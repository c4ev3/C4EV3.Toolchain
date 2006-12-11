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
CROSS_BINUTILS_URL	:= $(PTXCONF_SETUP_GNUMIRROR)/binutils/$(CROSS_BINUTILS).$(CROSS_BINUTILS_SUFFIX)
CROSS_BINUTILS_SOURCE	:= $(SRCDIR)/$(CROSS_BINUTILS).$(CROSS_BINUTILS_SUFFIX)
CROSS_BINUTILS_DIR	:= $(CROSS_BUILDDIR)/$(CROSS_BINUTILS)
CROSS_BINUTILS_BUILDDIR	:= $(CROSS_BUILDDIR)/$(CROSS_BINUTILS)-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

cross-binutils_get: $(STATEDIR)/cross-binutils.get

$(STATEDIR)/cross-binutils.get: $(cross-binutils_get_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

$(CROSS_BINUTILS_SOURCE):
	@$(call targetinfo, $@)
	@$(call get, CROSS_BINUTILS)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

cross-binutils_extract: $(STATEDIR)/cross-binutils.extract

$(STATEDIR)/cross-binutils.extract: $(cross-binutils_extract_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(CROSS_BINUTILS_DIR))
	@$(call extract, CROSS_BINUTILS, $(CROSS_BUILDDIR))
	@$(call patchin, CROSS_BINUTILS, $(CROSS_BINUTILS_DIR))
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

cross-binutils_prepare: $(STATEDIR)/cross-binutils.prepare

CROSS_BINUTILS_PATH	:= PATH=$(CROSS_PATH)
CROSS_BINUTILS_ENV 	:= $(HOST_ENV)

#
# autoconf
#
CROSS_BINUTILS_AUTOCONF := \
	--prefix=$(PTXCONF_PREFIX) \
	--build=$(GNU_HOST) \
	--host=$(GNU_HOST) \
	--target=$(PTXCONF_GNU_TARGET) \
	--with-sysroot=$(SYSROOT) \
	--disable-werror \
	--disable-nls \
	--enable-serial-configure

$(STATEDIR)/cross-binutils.prepare: $(cross-binutils_prepare_deps_default)
	@$(call targetinfo, $@)
	rm -fr $(CROSS_BINUTILS_BUILDDIR)
	mkdir -p $(CROSS_BINUTILS_BUILDDIR)
	cd $(CROSS_BINUTILS_BUILDDIR) && \
		$(CROSS_BINUTILS_PATH) $(CROSS_BINUTILS_ENV) \
		$(CROSS_BINUTILS_DIR)/configure $(CROSS_BINUTILS_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

cross-binutils_compile: $(STATEDIR)/cross-binutils.compile

$(STATEDIR)/cross-binutils.compile: $(cross-binutils_compile_deps_default)
	@$(call targetinfo, $@)
	cd $(CROSS_BINUTILS_BUILDDIR) && $(CROSS_BINUTILS_PATH) \
		$(MAKE) $(PARALLELMFLAGS)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

cross-binutils_install: $(STATEDIR)/cross-binutils.install

$(STATEDIR)/cross-binutils.install: $(cross-binutils_install_deps_default)
	@$(call targetinfo, $@)
	@$(call install, CROSS_BINUTILS,$(CROSS_BINUTILS_BUILDDIR),h)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

cross-binutils_clean:
	rm -rf $(STATEDIR)/cross-binutils.*
	rm -rf $(CROSS_BINUTILS_DIR)

# vim: syntax=make
