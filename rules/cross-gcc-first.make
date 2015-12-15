# -*-makefile-*-
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
CROSS_GCC_FIRST_DL_VERSION	:= $(call remove_quotes,$(PTXCONF_CROSS_GCC_DL_VERSION))
CROSS_GCC_FIRST_MD5		:= $(call remove_quotes,$(PTXCONF_CROSS_GCC_MD5))
CROSS_GCC_FIRST			:= gcc-$(CROSS_GCC_FIRST_DL_VERSION)
ifeq ($(CROSS_GCC_FIRST_VERSION),$(CROSS_GCC_FIRST_DL_VERSION))
CROSS_GCC_FIRST_SUFFIX		:= tar.bz2
else
CROSS_GCC_FIRST_SUFFIX		:= tar.xz
endif
CROSS_GCC_FIRST_SOURCE		:= $(SRCDIR)/$(CROSS_GCC_FIRST).$(CROSS_GCC_FIRST_SUFFIX)
CROSS_GCC_FIRST_DIR		:= $(CROSS_BUILDDIR)/gcc-first-$(CROSS_GCC_FIRST_VERSION)
CROSS_GCC_FIRST_BUILDDIR	:= $(CROSS_GCC_FIRST_DIR)-build
CROSS_GCC_FIRST_URL		 = $(CROSS_GCC_URL)
CROSS_GCC_FIRST_BUILD_OOT	:= YES
CROSS_GCC_FIRST_DEVPKG		:= NO

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

CROSS_GCC_FIRST_ENV	:= $(HOST_ENV) MAKEINFO=:

#
# autoconf
#
CROSS_GCC_FIRST_CONF_TOOL	:= autoconf
CROSS_GCC_FIRST_CONF_OPT	 = \
	$(CROSS_GCC_AUTOCONF_COMMON) \
	--prefix=$(CROSS_GCC_FIRST_PREFIX) \
	\
	--disable-shared \
	--enable-languages=c \
	\
	--with-ld=$(PTXCONF_SYSROOT_CROSS)/bin/$(PTXCONF_GNU_TARGET)-ld \
	--with-as=$(PTXCONF_SYSROOT_CROSS)/bin/$(PTXCONF_GNU_TARGET)-as \
	--disable-checking \
	\
	--disable-libmudflap \
	--disable-libssp \
	--disable-libgomp \
	--disable-libquadmath \
	--disable-libatomic \
	--with-system-zlib

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

CROSS_GCC_FIRST_INSTALL_OPT := \
	install

$(STATEDIR)/cross-gcc-first.install:
	@$(call targetinfo)
	@$(call world/install, CROSS_GCC_FIRST)
	ln -sfv libgcc.a `$(CROSS_GCC_FIRST_PREFIX)/bin/$(PTXCONF_GNU_TARGET)-gcc \
		-print-libgcc-file-name | \
		sed 's/libgcc/&_eh/'`
	ln -sfv libgcc.a `$(CROSS_GCC_FIRST_PREFIX)/bin/$(PTXCONF_GNU_TARGET)-gcc \
		-print-libgcc-file-name | \
		sed 's/libgcc/&_s/'`

	@$(call touch)

# vim: syntax=make
