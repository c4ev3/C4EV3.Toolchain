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

$(W32API_SOURCE):
	@$(call targetinfo)
	@$(call get, W32API)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

$(STATEDIR)/w32api.extract:
	@$(call targetinfo)
	@$(call clean, $(W32API_DIR))
	@$(call clean, $(W32API_BUILDDIR))
	@$(call extract, W32API)
	@$(call patchin, W32API, $(W32API_DIR))
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

W32API_PATH := PATH=$(CROSS_PATH)
W32API_ENV := $(CROSS_ENV)

W32API_AUTOCONF := \
	--prefix=$(SYSROOT)/mingw \
	--build=$(GNU_BUILD) \
	--host=$(PTXCONF_GNU_TARGET) \
	--target=$(PTXCONF_GNU_TARGET)

$(STATEDIR)/w32api.prepare:
	@$(call targetinfo)
	cd $(W32API_BUILDDIR) && $(W32API_ENV) $(W32API_PATH) \
		./configure $(W32API_AUTOCONF)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/w32api.compile:
	@$(call targetinfo)
	cd $(W32API_BUILDDIR) && $(W32API_PATH) \
		$(MAKE) $(PARALLELMFLAGS)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

$(STATEDIR)/w32api.install:
	@$(call targetinfo)
	cd $(W32API_BUILDDIR) && \
		$(W32API_PATH) $(MAKE) \
		install_root=$(SYSROOT) install
	@$(call touch)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

$(STATEDIR)/w32api.targetinstall:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

w32api_clean:
	rm -rf $(STATEDIR)/w32api.*
	rm -rf $(W32API_DIR)

# vim: syntax=make
