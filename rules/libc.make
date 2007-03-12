# -*-makefile-*-
# $Id: template 6001 2006-08-12 10:15:00Z mkl $
#
# Copyright (C) 2006, 2007 by Marc Kleine-Budde <mkl@pengutronix.de>
#          
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_LIBC) += libc

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

libc_get: $(STATEDIR)/libc.get

$(STATEDIR)/libc.get:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

libc_extract: $(STATEDIR)/libc.extract

$(STATEDIR)/libc.extract:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

libc_prepare: $(STATEDIR)/libc.prepare

$(STATEDIR)/libc.prepare:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

libc_compile: $(STATEDIR)/libc.compile

$(STATEDIR)/libc.compile:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

libc_install: $(STATEDIR)/libc.install

$(STATEDIR)/libc.install:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

libc_targetinstall: $(STATEDIR)/libc.targetinstall

$(STATEDIR)/libc.targetinstall:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

libc_clean:
	rm -rf $(STATEDIR)/libc.*

# vim: syntax=make
