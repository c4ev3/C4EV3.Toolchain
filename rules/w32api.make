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
PACKAGES-$(PTXCONF_W32API) += w32api

#
# Paths and names
#
W32API_VERSION  := $(call remove_quotes,$(PTXCONF_W32API_VERSION))
W32API          := w32api-$(W32API_VERSION)-src
W32API_SUFFIX   := tar.gz
W32API_URL      := $(PTXCONF_SETUP_SFMIRROR)/mingw/$(W32API).$(W32API_SUFFIX)
W32API_SOURCE   := $(SRCDIR)/$(W32API).$(W32API_SUFFIX)
W32API_DIR      := $(BUILDDIR)/$(W32API)
W32API_BUILDDIR	:= $(BUILDDIR)/w32api-$(W32API_VERSION)


# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

w32api_get: $(STATEDIR)/w32api.get

$(STATEDIR)/w32api.get: $(w32api_get_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

$(W32API_SOURCE):
	@$(call targetinfo, $@)
	@$(call get, W32API)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

w32api_extract: $(STATEDIR)/w32api.extract

$(STATEDIR)/w32api.extract: $(w32api_extract_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(W32API_DIR))
	@$(call clean, $(W32API_BUILDDIR))
	@$(call extract, W32API)
	@$(call patchin, W32API, $(W32API_DIR))
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

w32api_prepare: $(STATEDIR)/w32api.prepare

W32API_PATH := PATH=$(CROSS_PATH)
W32API_ENV := $(CROSS_ENV)

W32API_AUTOCONF := \
	--prefix=$(SYSROOT)/mingw \
	--build=$(GNU_BUILD) \
	--host=$(PTXCONF_GNU_TARGET) \
	--target=$(PTXCONF_GNU_TARGET) \


$(STATEDIR)/w32api.prepare: $(w32api_prepare_deps_default)
	@$(call targetinfo, $@)
	cd $(W32API_BUILDDIR) && $(W32API_ENV) $(W32API_PATH) \
			./configure $(W32API_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

w32api_compile: $(STATEDIR)/w32api.compile

$(STATEDIR)/w32api.compile: $(w32api_compile_deps_default)
	@$(call targetinfo, $@)
	cd $(W32API_BUILDDIR) && $(W32API_PATH) \
		$(MAKE) $(PARALLELMFLAGS)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

w32api_install: $(STATEDIR)/w32api.install

$(STATEDIR)/w32api.install: $(w32api_install_deps_default)
	@$(call targetinfo, $@)
	cd $(W32API_BUILDDIR) && \
		$(W32API_PATH) $(MAKE) \
		install_root=$(SYSROOT) install
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

w32api_targetinstall: $(STATEDIR)/w32api.targetinstall

$(STATEDIR)/w32api.targetinstall: $(w32api_targetinstall_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

w32api_clean:
	rm -rf $(STATEDIR)/w32api.*
	rm -rf $(W32API_DIR)

# vim: syntax=make
