# -*-makefile-*-
# $Id$
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
NEWLIB		:= newlib-$(NEWLIB_VERSION)
NEWLIB_SUFFIX	:= tar.gz
NEWLIB_URL	:= ftp://sources.redhat.com/pub/newlib/$(NEWLIB).$(NEWLIB_SUFFIX)
NEWLIB_SOURCE	:= $(SRCDIR)/$(NEWLIB).$(NEWLIB_SUFFIX)
NEWLIB_DIR	:= $(BUILDDIR_DEBUG)/$(NEWLIB)
NEWLIB_BUILDDIR	:= $(BUILDDIR)/$(NEWLIB)-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

newlib_get: $(STATEDIR)/newlib.get

$(STATEDIR)/newlib.get: $(newlib_get_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

$(NEWLIB_SOURCE):
	@$(call targetinfo, $@)
	@$(call get, NEWLIB)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

newlib_extract: $(STATEDIR)/newlib.extract

$(STATEDIR)/newlib.extract: $(newlib_extract_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(NEWLIB_DIR))
	@$(call clean, $(NEWLIB_BUILDDIR))
	@$(call extract, NEWLIB, $(BUILDDIR_DEBUG))
	@$(call patchin, NEWLIB, $(NEWLIB_DIR))
	mkdir -p $(NEWLIB_BUILDDIR)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

newlib_prepare: $(STATEDIR)/newlib.prepare

NEWLIB_PATH := PATH=$(CROSS_PATH)
NEWLIB_ENV := \
	CC_FOR_BUILD=$(HOSTCC) \
	$(PTXCONF_NEWLIB_EXTRA_ENV)

#
# autoconf
#

NEWLIB_AUTOCONF := \
	--prefix=$(SYSROOT) \
	--build=$(GNU_BUILD) \
	--target=$(PTXCONF_GNU_TARGET) \
        --disable-shared \
	--disable-newlib-supplied-syscalls \
	--with-newlib

#	--host=$(PTXCONF_GNU_TARGET) \

$(STATEDIR)/newlib.prepare: $(newlib_prepare_deps_default)
	@$(call targetinfo, $@)
	cd $(NEWLIB_BUILDDIR) && eval \
		$(NEWLIB_ENV) $(NEWLIB_PATH) \
		$(NEWLIB_DIR)/configure $(NEWLIB_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

newlib_compile: $(STATEDIR)/newlib.compile

$(STATEDIR)/newlib.compile: $(newlib_compile_deps_default)
	@$(call targetinfo, $@)
	cd $(NEWLIB_BUILDDIR) && $(NEWLIB_PATH) \
		$(MAKE) $(PARALLELMFLAGS)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

newlib_install: $(STATEDIR)/newlib.install

$(STATEDIR)/newlib.install: $(newlib_install_deps_default)
	@$(call targetinfo, $@)
	cd $(NEWLIB_BUILDDIR) && \
		$(NEWLIB_PATH) $(MAKE) install
	rm -rf $(SYSROOT)/usr
	mv $(SYSROOT)/$(PTXCONF_GNU_TARGET) $(SYSROOT)/usr
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

newlib_targetinstall: $(STATEDIR)/newlib.targetinstall

$(STATEDIR)/newlib.targetinstall: $(newlib_targetinstall_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

newlib_clean:
	rm -rf $(STATEDIR)/newlib.*
	rm -rf $(NEWLIB_DIR)

# vim: syntax=make
