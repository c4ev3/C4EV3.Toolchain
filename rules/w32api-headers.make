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
PACKAGES-$(PTXCONF_W32API_HEADERS) += w32api-headers

#
# Paths and names
#
W32API_HEADERS_DIR	= $(BUILDDIR)/$(W32API)-headers

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

w32api-headers_get: $(STATEDIR)/w32api-headers.get

$(STATEDIR)/w32api-headers.get: $(STATEDIR)/w32api.get
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

w32api-headers_extract: $(STATEDIR)/w32api-headers.extract

$(STATEDIR)/w32api-headers.extract: $(STATEDIR)/w32api.extract
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

w32api-headers_prepare: $(STATEDIR)/w32api-headers.prepare

$(STATEDIR)/w32api-headers.prepare:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

w32api-headers_compile: $(STATEDIR)/w32api-headers.compile

$(STATEDIR)/w32api-headers.compile:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

w32api-headers_install: $(STATEDIR)/w32api-headers.install 

$(STATEDIR)/w32api-headers.install:
	@$(call targetinfo, $@)
	mkdir -p $(SYSROOT)/mingw/include
	cp -r $(W32API_BUILDDIR)/include/* $(SYSROOT)/mingw/include/
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

w32api-headers_targetinstall: $(STATEDIR)/w32api-headers.targetinstall

$(STATEDIR)/w32api-headers.targetinstall:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

w32api-headers_clean:
	rm -rf $(STATEDIR)/w32api-headers.*

# vim: syntax=make
