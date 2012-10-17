# -*-makefile-*-
#
# Copyright (C) 2007 by Sascha Hauer
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_NEWLIB) += newlib

#
# Paths and names
#
NEWLIB_VERSION	:= $(call remove_quotes,$(PTXCONF_NEWLIB_VERSION))
NEWLIB_MD5	:= $(call remove_quotes,$(PTXCONF_NEWLIB_MD5))
NEWLIB		:= newlib-$(NEWLIB_VERSION)
NEWLIB_SUFFIX	:= tar.gz
NEWLIB_URL	:= ftp://sources.redhat.com/pub/newlib/$(NEWLIB).$(NEWLIB_SUFFIX)
NEWLIB_SOURCE	:= $(SRCDIR)/$(NEWLIB).$(NEWLIB_SUFFIX)
NEWLIB_DIR	:= $(BUILDDIR_DEBUG)/$(NEWLIB)
NEWLIB_BUILDDIR	:= $(BUILDDIR)/$(NEWLIB)-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(NEWLIB_SOURCE):
	@$(call targetinfo)
	@$(call get, NEWLIB)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

$(STATEDIR)/newlib.extract:
	@$(call targetinfo)
	@$(call clean, $(NEWLIB_DIR))
	@$(call extract, NEWLIB, $(BUILDDIR_DEBUG))
	@$(call patchin, NEWLIB, $(NEWLIB_DIR))
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

NEWLIB_PATH := PATH=$(CROSS_PATH)
NEWLIB_ENV := CC_FOR_BUILD=$(HOSTCC)

#
# autoconf
#
NEWLIB_AUTOCONF := \
	--prefix=$(PTXCONF_SYSROOT_CROSS) \
	--target=$(PTXCONF_GNU_TARGET) \
	--disable-shared \
	--disable-newlib-supplied-syscalls \
	--with-newlib

$(STATEDIR)/newlib.prepare:
	@$(call targetinfo)
	@$(call clean, $(NEWLIB_BUILDDIR))
	mkdir -p $(NEWLIB_BUILDDIR)
	cd $(NEWLIB_BUILDDIR) && \
		$(NEWLIB_ENV) $(NEWLIB_PATH) \
		$(NEWLIB_DIR)/configure $(NEWLIB_AUTOCONF)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/newlib.compile:
	@$(call targetinfo)
	cd $(NEWLIB_BUILDDIR) && $(NEWLIB_PATH) \
		$(MAKE) $(PARALLELMFLAGS)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

$(STATEDIR)/newlib.install:
	@$(call targetinfo)
	cd $(NEWLIB_BUILDDIR) && \
		$(NEWLIB_PATH) $(MAKE) install
	@$(call touch)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

$(STATEDIR)/newlib.targetinstall:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

newlib_clean:
	rm -rf $(STATEDIR)/newlib.*
	rm -rf $(NEWLIB_DIR)

# vim: syntax=make
