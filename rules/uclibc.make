# -*-makefile-*-
# $Id: template 6001 2006-08-12 10:15:00Z mkl $
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
PACKAGES-$(PTXCONF_UCLIBC) += uclibc

#
# Paths and names
#
UCLIBC_VERSION	:= 0.9.28
UCLIBC		:= uClibc-$(UCLIBC_VERSION)
UCLIBC_SUFFIX	:= tar.bz2
UCLIBC_URL	:= http://www.uclibc.org/downloads/$(UCLIBC).$(UCLIBC_SUFFIX)
UCLIBC_SOURCE	:= $(SRCDIR)/$(UCLIBC).$(UCLIBC_SUFFIX)
UCLIBC_DIR	:= $(BUILDDIR)/$(UCLIBC)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

uclibc_get: $(STATEDIR)/uclibc.get

$(STATEDIR)/uclibc.get:
	@$(call targetinfo, $@)
	@$(call touch, $@)

$(UCLIBC_SOURCE):
	@$(call targetinfo, $@)
	@$(call get, UCLIBC)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

uclibc_extract: $(STATEDIR)/uclibc.extract

$(STATEDIR)/uclibc.extract:
	@$(call targetinfo, $@)
	@$(call clean, $(UCLIBC_DIR))
	@$(call extract, UCLIBC)
	@$(call patchin, UCLIBC)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

uclibc_prepare: $(STATEDIR)/uclibc.prepare

UCLIBC_PATH	:= PATH=$(CROSS_PATH)
UCLIBC_ENV 	:= $(CROSS_ENV)

#
# autoconf
#
UCLIBC_AUTOCONF := $(CROSS_AUTOCONF_USR)

$(STATEDIR)/uclibc.prepare:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

uclibc_compile: $(STATEDIR)/uclibc.compile

$(STATEDIR)/uclibc.compile:
	@$(call targetinfo, $@)
	cd $(UCLIBC_DIR) && $(UCLIBC_PATH) $(MAKE)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

uclibc_install: $(STATEDIR)/uclibc.install

$(STATEDIR)/uclibc.install:
	@$(call targetinfo, $@)
	@$(call install, UCLIBC)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

uclibc_targetinstall: $(STATEDIR)/uclibc.targetinstall

$(STATEDIR)/uclibc.targetinstall:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

uclibc_clean:
	rm -rf $(STATEDIR)/uclibc.*
	rm -rf $(IMAGEDIR)/uclibc_*
	rm -rf $(UCLIBC_DIR)

# vim: syntax=make
