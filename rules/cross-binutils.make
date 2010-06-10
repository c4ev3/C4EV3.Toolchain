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
CROSS_PACKAGES-$(PTXCONF_CROSS_BINUTILS) += cross-binutils

#
# Paths and names
#
CROSS_BINUTILS_VERSION	:= $(call remove_quotes,$(PTXCONF_CROSS_BINUTILS_VERSION))
CROSS_BINUTILS		:= binutils-$(CROSS_BINUTILS_VERSION)
CROSS_BINUTILS_SUFFIX	:= tar.bz2
CROSS_BINUTILS_SOURCE	:= $(SRCDIR)/$(CROSS_BINUTILS).$(CROSS_BINUTILS_SUFFIX)
CROSS_BINUTILS_DIR	:= $(CROSS_BUILDDIR)/$(CROSS_BINUTILS)
CROSS_BINUTILS_BUILDDIR	:= $(CROSS_BUILDDIR)/$(CROSS_BINUTILS)-build

CROSS_BINUTILS_URL	:= \
	$(PTXCONF_SETUP_GNUMIRROR)/binutils/$(CROSS_BINUTILS).$(CROSS_BINUTILS_SUFFIX) \
	ftp://sources.redhat.com/pub/binutils/snapshots/$(CROSS_BINUTILS).$(CROSS_BINUTILS_SUFFIX) \
	http://www.kernel.org/pub/linux/devel/binutils/$(CROSS_BINUTILS).$(CROSS_BINUTILS_SUFFIX)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(CROSS_BINUTILS_SOURCE):
	@$(call targetinfo)
	@$(call get, CROSS_BINUTILS)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-binutils.extract:
	@$(call targetinfo)
	@$(call clean, $(CROSS_BINUTILS_DIR))
	@$(call extract, CROSS_BINUTILS, $(CROSS_BUILDDIR))
	@$(call patchin, CROSS_BINUTILS, $(CROSS_BINUTILS_DIR))
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

CROSS_BINUTILS_PATH	:= PATH=$(CROSS_PATH)
CROSS_BINUTILS_ENV 	:= $(PTX_HOST_CROSS_ENV)
CROSS_BINUTILS_DEVPKG	:= NO

#
# autoconf
#
CROSS_BINUTILS_AUTOCONF := \
	$(PTX_HOST_CROSS_AUTOCONF) \
	$(PTXCONF_TOOLCHAIN_CONFIG_SYSROOT) \
	\
	--disable-werror \
	--disable-nls

$(STATEDIR)/cross-binutils.prepare:
	@$(call targetinfo)
	rm -fr $(CROSS_BINUTILS_BUILDDIR)
	mkdir -p $(CROSS_BINUTILS_BUILDDIR)
	cd $(CROSS_BINUTILS_BUILDDIR) && \
		$(CROSS_BINUTILS_PATH) $(CROSS_BINUTILS_ENV) \
		$(CROSS_BINUTILS_DIR)/configure $(CROSS_BINUTILS_AUTOCONF)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-binutils.compile:
	@$(call targetinfo)
	cd $(CROSS_BINUTILS_BUILDDIR) && $(CROSS_BINUTILS_PATH) \
		$(MAKE) $(PARALLELMFLAGS)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-binutils.install:
	@$(call targetinfo)
	@$(call install, CROSS_BINUTILS,$(CROSS_BINUTILS_BUILDDIR),h)

	mkdir -p "$(CROSS_GCC_FIRST_PREFIX)/$(PTXCONF_GNU_TARGET)/bin"
	for file in \
		ar \
		as \
		ld \
		nm \
		objcopy \
		objdump \
		ranlib \
		strip \
		; do \
		ln -sf "../../../$(PTXCONF_GNU_TARGET)/bin/$$file" \
			"$(CROSS_GCC_FIRST_PREFIX)/$(PTXCONF_GNU_TARGET)/bin/$$file"; \
	done

	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

cross-binutils_clean:
	rm -rf $(STATEDIR)/cross-binutils.*
	rm -rf $(CROSS_BINUTILS_DIR)

# vim: syntax=make
