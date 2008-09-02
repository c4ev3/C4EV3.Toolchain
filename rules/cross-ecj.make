# -*-makefile-*-
# $Id$
#
# Copyright (C) 2008 by Marc Kleine-Budde <mkl@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
CROSS_PACKAGES-$(PTXCONF_CROSS_ECJ) += cross-ecj

#
# Paths and names
#
CROSS_ECJ_VERSION	:= $(call remove_quotes,$(PTXCONF_CROSS_ECJ_VERSION))
CROSS_ECJ		:= ecj-$(CROSS_ECJ_VERSION)
CROSS_ECJ_SUFFIX	:= jar
CROSS_ECJ_URL		:= ftp://sourceware.org/pub/java/$(CROSS_ECJ).$(CROSS_ECJ_SUFFIX)
CROSS_ECJ_SOURCE	:= $(SRCDIR)/$(CROSS_ECJ).$(CROSS_ECJ_SUFFIX)
CROSS_ECJ_DIR		:= $(CROSS_BUILDDIR)/$(CROSS_ECJ)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(CROSS_ECJ_SOURCE):
	@$(call targetinfo)
	@$(call get, CROSS_ECJ)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-ecj.extract:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-ecj.prepare:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-ecj.compile:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-ecj.install:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

cross-ecj_clean:
	rm -rf $(STATEDIR)/cross-ecj.*
	rm -rf $(CROSS_ECJ_DIR)

# vim: syntax=make
