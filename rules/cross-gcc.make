# -*-makefile-*-
# $Id$
#
# Copyright (C) 2006 by Robert Schwebel
#               2008 by Marc Kleine-Budde <mkl@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
CROSS_PACKAGES-$(PTXCONF_CROSS_GCC) += cross-gcc

#
# Paths and names
#
CROSS_GCC_VERSION	:= $(call remove_quotes,$(PTXCONF_CROSS_GCC_VERSION))
CROSS_GCC		:= gcc-$(CROSS_GCC_VERSION)
CROSS_GCC_SUFFIX	:= tar.bz2
CROSS_GCC_SOURCE	:= $(SRCDIR)/$(CROSS_GCC).$(CROSS_GCC_SUFFIX)
CROSS_GCC_DIR		:= $(BUILDDIR_CROSS_DEBUG)/$(CROSS_GCC)
CROSS_GCC_BUILDDIR	:= $(CROSS_BUILDDIR)/$(CROSS_GCC)-build

CROSS_GCC_URL	 	:= \
	$(PTXCONF_SETUP_GNUMIRROR)/gcc/$(CROSS_GCC)/$(CROSS_GCC).$(CROSS_GCC_SUFFIX) \
	ftp://gcc.gnu.org/pub/gcc/snapshots/$(CROSS_GCC_VERSION)/$(CROSS_GCC).$(CROSS_GCC_SUFFIX)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(CROSS_GCC_SOURCE):
	@$(call targetinfo)
	@$(call get, CROSS_GCC)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-gcc.extract:
	@$(call targetinfo)
	@$(call clean, $(CROSS_GCC_DIR))
	@$(call extract, CROSS_GCC, $(BUILDDIR_CROSS_DEBUG))
	@$(call patchin, CROSS_GCC, $(CROSS_GCC_DIR))
ifdef PTXCONF_CROSS_ECJ
	@cp $(CROSS_ECJ_SOURCE) $(CROSS_GCC_DIR)/ecj.jar
endif
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

CROSS_GCC_PATH	:= PATH=$(CROSS_PATH)
CROSS_GCC_ENV	:= $(HOSTCC_ENV)

#
# autoconf
#
CROSS_GCC_AUTOCONF_COMMON := \
	--target=$(PTXCONF_GNU_TARGET) \
	$(PTXCONF_CROSS_GCC_EXTRA_CONFIG) \
	$(PTXCONF_CROSS_GCC_EXTRA_CONFIG_LIBC) \
	$(PTXCONF_CROSS_GCC_EXTRA_CONFIG_CXA_ATEXIT) \
	$(PTXCONF_CROSS_GCC_EXTRA_CONFIG_SJLJ_EXCEPTIONS) \
	\
	--disable-nls \
	--disable-decimal-float \
	--disable-fixed-point \
	--disable-win32-registry \
	\
	--enable-symvers=gnu \
	\
	--with-pkgversion=${PTXCONF_PROJECT}

ifdef PTXCONF_HOST_GMP
CROSS_GCC_AUTOCONF_COMMON += --with-gmp=$(PTXCONF_SYSROOT_HOST)
endif

ifdef PTXCONF_HOST_MPFR
CROSS_GCC_AUTOCONF_COMMON += --with-mpfr=$(PTXCONF_SYSROOT_HOST)
endif

#
# for other architectures than AVR its not usefull to have multilib,
# but we need a sysroot for them
#
ifndef PTXCONF_ARCH_AVR
CROSS_GCC_AUTOCONF_COMMON += \
	--disable-multilib \
	--with-sysroot=$(SYSROOT)
endif

#   --enable-tls            enable or disable generation of tls code
#                           overriding the assembler check for tls support
#   --enable-initfini-array       use .init_array/.fini_array sections
#   --enable-version-specific-runtime-libs
#                           specify that runtime libraries should be
#                           installed in a compiler-specific directory
#   --with-long-double-128  Use 128-bit long double by default.


#
# language selection
#
CROSS_GCC_LANG-$(PTXCONF_CROSS_GCC_LANG_C)		+= c
CROSS_GCC_LANG-$(PTXCONF_CROSS_GCC_LANG_CXX)		+= c++
CROSS_GCC_LANG-$(PTXCONF_CROSS_GCC_LANG_JAVA)		+= java
CROSS_GCC_LANG-$(PTXCONF_CROSS_GCC_LANG_FORTRAN)	+= fortran

CROSS_GCC_AUTOCONF := \
	$(CROSS_GCC_AUTOCONF_COMMON) \
	--prefix=$(PTXCONF_SYSROOT_CROSS) \
	\
	--enable-languages=$(subst $(space),$(comma),$(CROSS_GCC_LANG-y)) \
	--enable-threads=$(PTXCONF_CROSS_GCC_THREADS) \
	--enable-c99 \
	--enable-long-long \
	--enable-libstdcxx-debug \
	--enable-profile \
	--enable-checking=release \
	\
	$(PTXCONF_CROSS_GCC_EXTRA_CONFIG_SHARED)

$(STATEDIR)/cross-gcc.prepare:
	@$(call targetinfo)
	@$(call clean, $(CROSS_GCC_BUILDDIR))
	mkdir -p $(CROSS_GCC_BUILDDIR)
	cd $(CROSS_GCC_BUILDDIR) && \
		$(CROSS_GCC_PATH) $(CROSS_GCC_ENV) \
		$(CROSS_GCC_DIR)/configure $(CROSS_GCC_AUTOCONF)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-gcc.compile:
	@$(call targetinfo)
	cd $(CROSS_GCC_BUILDDIR) && $(CROSS_GCC_PATH) \
		$(MAKE) $(PARALLELMFLAGS)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-gcc.install:
	@$(call targetinfo)
	cd $(CROSS_GCC_BUILDDIR) && \
		$(CROSS_GCC_PATH) $(MAKE) install
	@find $(PTXCONF_SYSROOT_CROSS) -name "*.la" | while read la_file; do \
		rm -v $${la_file}; \
	done
	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

cross-gcc_clean:
	rm -rf $(STATEDIR)/cross-gcc.*
	rm -rf $(CROSS_GCC_DIR)
	rm -rf $(CROSS_GCC_BUILDDIR)

# vim: syntax=make
