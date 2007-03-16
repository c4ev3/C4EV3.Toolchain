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
PACKAGES-$(PTXCONF_MINGW_RUNTIME_HEADERS) += mingw-runtime-headers

#
# Paths and names
#
MINGW_RUNTIME_HEADERS_DIR      = $(BUILDDIR)/$(MINGW_RUNTIME)-headers

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

mingw-runtime-headers_get: $(STATEDIR)/mingw-runtime-headers.get

$(STATEDIR)/mingw-runtime-headers.get:  $(STATEDIR)/mingw-runtime.get
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

mingw-runtime-headers_extract: $(STATEDIR)/mingw-runtime-headers.extract

$(STATEDIR)/mingw-runtime-headers.extract: $(STATEDIR)/mingw-runtime.extract
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

mingw-runtime-headers_prepare: $(STATEDIR)/mingw-runtime-headers.prepare

$(STATEDIR)/mingw-runtime-headers.prepare:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

mingw-runtime-headers_compile: $(STATEDIR)/mingw-runtime-headers.compile

$(STATEDIR)/mingw-runtime-headers.compile:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

mingw-runtime-headers_install: $(STATEDIR)/mingw-runtime-headers.install

$(STATEDIR)/mingw-runtime-headers.install:
	@$(call targetinfo, $@)
	mkdir -p $(SYSROOT)/mingw/include
	cp -r $(MINGW_RUNTIME_BUILDDIR)/include/* $(SYSROOT)/mingw/include/
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

mingw-runtime-headers_targetinstall: $(STATEDIR)/mingw-runtime-headers.targetinstall

$(STATEDIR)/mingw-runtime-headers.targetinstall:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

mingw-runtime-headers_clean:
	rm -rf $(STATEDIR)/mingw-runtime-headers.*
	rm -rf $(MINGW_RUNTIME_HEADERS_DIR)

# vim: syntax=make
