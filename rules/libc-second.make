# -*-makefile-*-
# $Id: template 6655 2007-01-02 12:55:21Z rsc $
#
# Copyright (C) 2006, 2007 by Marc Kleine-Budde <mkl@ppengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_LIBC_SECOND) += libc-second

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

libc-second_get: $(STATEDIR)/libc-second.get

$(STATEDIR)/libc-second.get: $(libc-second_get_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

libc-second_extract: $(STATEDIR)/libc-second.extract

$(STATEDIR)/libc-second.extract: $(libc-second_extract_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

libc-second_prepare: $(STATEDIR)/libc-second.prepare

$(STATEDIR)/libc-second.prepare: $(libc-second_prepare_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

libc-second_compile: $(STATEDIR)/libc-second.compile

$(STATEDIR)/libc-second.compile: $(libc-second_compile_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

libc-second_install: $(STATEDIR)/libc-second.install

$(STATEDIR)/libc-second.install: $(libc-second_install_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

libc-second_targetinstall: $(STATEDIR)/libc-second.targetinstall

$(STATEDIR)/libc-second.targetinstall: $(libc-second_targetinstall_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

libc-second_clean:
	rm -rf $(STATEDIR)/libc-second.*
	rm -rf $(IMAGEDIR)/libc-second_*

# vim: syntax=make
