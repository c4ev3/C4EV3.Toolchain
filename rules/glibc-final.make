# -*-makefile-*-
# $Id$
#
# Copyright (C) 2006 by Marc Kleine-Budde <mkl@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_GLIBC_FINAL) += glibc-final

#
# Paths and names
#
GLIBC_FINAL_DIR	= $(BUILDDIR)/$(GLIBC)-final

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

glibc-final_get: $(STATEDIR)/glibc-final.get

$(STATEDIR)/glibc-final.get: $(STATEDIR)/glibc.get
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

glibc-final_extract: $(STATEDIR)/glibc-final.extract

$(STATEDIR)/glibc-final.extract: $(STATEDIR)/glibc.extract
	@$(call targetinfo, $@)
	@$(call clean, $(GLIBC_FINAL_DIR))
	mkdir -p $(GLIBC_FINAL_DIR)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

glibc-final_prepare: $(STATEDIR)/glibc-final.prepare

GLIBC_FINAL_PATH := PATH=$(CROSS_PATH)
GLIBC_FINAL_ENV := BUILD_CC=$(HOSTCC)
GLIBC_FINAL_MAKEVARS := AUTOCONF=no

#
# autoconf
#
GLIBC_FINAL_AUTOCONF = $(GLIBC_AUTOCONF)

$(STATEDIR)/glibc-final.prepare:
	@$(call targetinfo, $@)
	@$(call clean, $(GLIBC_FINAL_DIR)/config.cache)
	cd $(GLIBC_FINAL_DIR) && \
		eval $(GLIBC_FINAL_PATH) $(GLIBC_FINAL_ENV) \
		$(GLIBC_DIR)/configure $(GLIBC_FINAL_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

glibc-final_compile: $(STATEDIR)/glibc-final.compile

$(STATEDIR)/glibc-final.compile:
	@$(call targetinfo, $@)
	cd $(GLIBC_FINAL_DIR) && $(GLIBC_FINAL_PATH) \
		$(MAKE) $(GLIBC_FINAL_MAKEVARS) $(PARALLELMFLAGS)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

glibc-final_install: $(STATEDIR)/glibc-final.install

$(STATEDIR)/glibc-final.install:
	@$(call targetinfo, $@)
	cd $(GLIBC_BUILDDIR) && \
		$(GLIBC_PATH) $(MAKE) $(GLIBC_FINAL_MAKEVARS) \
		install_root=$(SYSROOT) install
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

glibc-final_targetinstall: $(STATEDIR)/glibc-final.targetinstall

$(STATEDIR)/glibc-final.targetinstall:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

glibc-final_clean:
	rm -rf $(STATEDIR)/glibc-final.*
	rm -rf $(GLIBC_FINAL_DIR)

# vim: syntax=make
