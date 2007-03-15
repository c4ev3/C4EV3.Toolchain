# -*-makefile-*-
# $Id: template 6655 2007-01-02 12:55:21Z rsc $
#
# Copyright (C) 2006 by Robert Schwebel
#		2007 by Marc Kleine-Budde
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_GLIBC_SECOND) += glibc-second

#
# Paths and names
#
GLIBC_SECOND_BUILDDIR	= $(BUILDDIR_DEBUG)/$(GLIBC_FIRST)-second-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

glibc-second_get: $(STATEDIR)/glibc-second.get

$(STATEDIR)/glibc-second.get: $(STATEDIR)/glibc-first.get
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

glibc-second_extract: $(STATEDIR)/glibc-second.extract

$(STATEDIR)/glibc-second.extract: $(STATEDIR)/glibc.extract
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

glibc-second_prepare: $(STATEDIR)/glibc-second.prepare

GLIBC_SECOND_PATH := PATH=$(CROSS_PATH)
GLIBC_SECOND_ENV := BUILD_CC=$(HOSTCC)
GLIBC_SECOND_MAKEVARS := AUTOCONF=no

#
# autoconf
#
GLIBC_SECOND_AUTOCONF = $(GLIBC_FIRST_AUTOCONF)

$(STATEDIR)/glibc-second.prepare:
	@$(call targetinfo, $@)
	@$(call clean, $(GLIBC_SECOND_BUILDDIR))
	mkdir -p $(GLIBC_SECOND_BUILDDIR)
	cd $(GLIBC_SECOND_BUILDDIR) && \
		eval $(GLIBC_SECOND_ENV) $(GLIBC_SECOND_PATH) \
		$(GLIBC_FIRST_DIR)/configure $(GLIBC_SECOND_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

glibc-second_compile: $(STATEDIR)/glibc-second.compile

$(STATEDIR)/glibc-second.compile:
	@$(call targetinfo, $@)
	cd $(GLIBC_SECOND_BUILDDIR) && $(GLIBC_SECOND_PATH) $(MAKE) $(PARALLELMFLAGS)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

glibc-second_install: $(STATEDIR)/glibc-second.install

$(STATEDIR)/glibc-second.install:
	@$(call targetinfo, $@)
	cd $(GLIBC_SECOND_BUILDDIR) && \
		$(GLIBC_SECOND_PATH) $(MAKE) $(GLIBC_SECOND_MAKEVARS) \
		install_root=$(SYSROOT) install
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

glibc-second_targetinstall: $(STATEDIR)/glibc-second.targetinstall

$(STATEDIR)/glibc-second.targetinstall:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

glibc-second_clean:
	rm -rf $(STATEDIR)/glibc-second.*
	rm -rf $(IMAGEDIR)/glibc-second_*
	rm -rf $(GLIBC_SECOND_DIR)

# vim: syntax=make
