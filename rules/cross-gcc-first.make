# -*-makefile-*-
# $Id$
#
# Copyright (C) 2006 by Robert Schwebel
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
CROSS_PACKAGES-$(PTXCONF_CROSS_GCC_FIRST) += cross-gcc-first

#
# Paths and names
#
CROSS_GCC_FIRST_VERSION		:= $(call remove_quotes,$(PTXCONF_CROSS_GCC_VERSION))
CROSS_GCC_FIRST			:= gcc-$(CROSS_GCC_FIRST_VERSION)
CROSS_GCC_FIRST_SUFFIX	 	:= tar.bz2
CROSS_GCC_FIRST_URL	 	:= $(PTXCONF_SETUP_GNUMIRROR)/gcc/$(CROSS_GCC_FIRST)/$(CROSS_GCC_FIRST).$(CROSS_GCC_FIRST_SUFFIX)
CROSS_GCC_FIRST_SOURCE		:= $(SRCDIR)/$(CROSS_GCC_FIRST).$(CROSS_GCC_FIRST_SUFFIX)
CROSS_GCC_FIRST_DIR		:= $(BUILDDIR_CROSS_DEBUG)/$(CROSS_GCC_FIRST)
CROSS_GCC_FIRST_BUILDDIR	:= $(CROSS_BUILDDIR)/$(CROSS_GCC_FIRST)-first-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

cross-gcc-first_get: $(STATEDIR)/cross-gcc-first.get

$(STATEDIR)/cross-gcc-first.get:
	@$(call targetinfo, $@)
	@$(call touch, $@)

$(CROSS_GCC_FIRST_SOURCE):
	@$(call targetinfo, $@)
	@$(call get, CROSS_GCC_FIRST)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

cross-gcc-first_extract: $(STATEDIR)/cross-gcc-first.extract

$(STATEDIR)/cross-gcc-first.extract:
	@$(call targetinfo, $@)
	@$(call clean, $(CROSS_GCC_FIRST_DIR))
	@$(call extract, CROSS_GCC_FIRST, $(BUILDDIR_CROSS_DEBUG))
	@$(call patchin, CROSS_GCC_FIRST, $(CROSS_GCC_FIRST_DIR))
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

cross-gcc-first_prepare: $(STATEDIR)/cross-gcc-first.prepare

CROSS_GCC_FIRST_PATH	:= PATH=$(CROSS_PATH)
CROSS_GCC_FIRST_ENV	:= $(HOSTCC_ENV)

#
# autoconf
#
CROSS_GCC_AUTOCONF_COMMON := \
	--host=$(GNU_HOST) \
	--target=$(PTXCONF_GNU_TARGET) \
	--with-sysroot=$(SYSROOT) \
	--with-gmp=$(PTX_PREFIX_HOST) \
	--with-mpfr=$(PTX_PREFIX_HOST) \
	$(PTXCONF_CROSS_GCC_EXTRA_CONFIG) \
	$(PTXCONF_CROSS_GCC_EXTRA_CONFIG_LIBC) \
	\
        --disable-nls \
	--disable-multilib \
	--enable-symvers=gnu \
	--enable-__cxa_atexit \
	--disable-libunwind-exceptions

ifndef CROSS_GCC_HEADERS
CROSS_GCC_AUTOCONF_COMMON += --without-headers
endif

CROSS_GCC_FIRST_AUTOCONF := \
	$(CROSS_GCC_AUTOCONF_COMMON) \
	--prefix=$(CROSS_GCC_FIRST_PREFIX) \
	\
        --disable-shared \
        --enable-languages=c \
	\
	--with-ld=$(PTXCONF_PREFIX)/bin/$(PTXCONF_GNU_TARGET)-ld \
	--with-as=$(PTXCONF_PREFIX)/bin/$(PTXCONF_GNU_TARGET)-as \
	--disable-checking \
	\
	--disable-libmudflap \
	--disable-libssp \
	--disable-libgomp


$(STATEDIR)/cross-gcc-first.prepare:
	@$(call targetinfo, $@)
	@$(call clean, $(CROSS_GCC_FIRST_BUILDDIR))
	mkdir -p $(CROSS_GCC_FIRST_BUILDDIR)
	cd $(CROSS_GCC_FIRST_BUILDDIR) && \
		eval $(CROSS_GCC_FIRST_PATH) $(CROSS_GCC_FIRST_ENV) \
		$(CROSS_GCC_FIRST_DIR)/configure $(CROSS_GCC_FIRST_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

cross-gcc-first_compile: $(STATEDIR)/cross-gcc-first.compile

$(STATEDIR)/cross-gcc-first.compile:
	@$(call targetinfo, $@)

# 	export $(CROSS_GCC_FIRST_PATH); \
# 	cd $(CROSS_GCC_FIRST_BUILDDIR) && \
# 		if test -d $(CROSS_GCC_FIRST_DIR)/libdecnumber; then \
# 			$(MAKE) configure-libdecnumber && \
# 			$(MAKE) $(PARALLELMFLAGS) all-libdecnumber; \
# 		fi

# 	cd $(CROSS_GCC_FIRST_BUILDDIR) && $(CROSS_GCC_FIRST_PATH) \
# 		$(MAKE) configure-gcc

# 	cd $(CROSS_GCC_FIRST_BUILDDIR) && $(CROSS_GCC_FIRST_PATH) \
# 		$(MAKE) configure-libcpp

# 	cd $(CROSS_GCC_FIRST_BUILDDIR) && $(CROSS_GCC_FIRST_PATH) \
# 		$(MAKE) configure-build-libiberty

# 	cd $(CROSS_GCC_FIRST_BUILDDIR) && $(CROSS_GCC_FIRST_PATH) \
# 		$(MAKE) $(PARALLELMFLAGS) all-libcpp

# 	cd $(CROSS_GCC_FIRST_BUILDDIR) && $(CROSS_GCC_FIRST_PATH) \
# 		$(MAKE) $(PARALLELMFLAGS) all-build-libiberty

# 	cd $(CROSS_GCC_FIRST_BUILDDIR)/gcc && $(CROSS_GCC_FIRST_PATH) \
# 		$(MAKE) $(PARALLELMFLAGS) libgcc.mk


# 	if test '!' -f $(CROSS_GCC_FIRST_BUILDDIR)/gcc/libgcc.mk-ORIG; then \
# 		cp -p $(CROSS_GCC_FIRST_BUILDDIR)/gcc/libgcc.mk \
# 			$(CROSS_GCC_FIRST_BUILDDIR)/gcc/libgcc.mk-ORIG; \
# 	fi

# 	sed 's@-lc@@g' < $(CROSS_GCC_FIRST_BUILDDIR)/gcc/libgcc.mk-ORIG \
# 		> $(CROSS_GCC_FIRST_BUILDDIR)/gcc/libgcc.mk

# 	cd $(CROSS_GCC_FIRST_BUILDDIR)/gcc && $(CROSS_GCC_FIRST_PATH) \
# 		$(MAKE) tree-check.h

	cd $(CROSS_GCC_FIRST_BUILDDIR) && $(CROSS_GCC_FIRST_PATH) \
		$(MAKE) $(PARALLELMFLAGS) #all-gcc

	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

cross-gcc-first_install: $(STATEDIR)/cross-gcc-first.install

$(STATEDIR)/cross-gcc-first.install:
	@$(call targetinfo, $@)
	cd $(CROSS_GCC_FIRST_BUILDDIR) && \
		$(CROSS_GCC_FIRST_PATH) $(MAKE) install #install-gcc
	ln -sv libgcc.a `$(CROSS_GCC_FIRST_PREFIX)/bin/$(PTXCONF_GNU_TARGET)-gcc \
		-print-libgcc-file-name | \
		sed 's/libgcc/&_eh/'`
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

cross-gcc-first_clean:
	rm -rf $(STATEDIR)/cross-gcc-first.*
	rm -rf $(CROSS_GCC_FIRST_DIR)
	rm -rf $(CROSS_GCC_FIRST_BUILDDIR)

# vim: syntax=make
