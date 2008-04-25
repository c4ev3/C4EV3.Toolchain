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
PACKAGES-$(PTXCONF_LIBC_FIRST) += libc-first

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

libc-first_get: $(STATEDIR)/libc-first.get

$(STATEDIR)/libc-first.get: $(libc-first_get_deps_default)
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

libc-first_extract: $(STATEDIR)/libc-first.extract

$(STATEDIR)/libc-first.extract: $(libc-first_extract_deps_default)
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

libc-first_prepare: $(STATEDIR)/libc-first.prepare

$(STATEDIR)/libc-first.prepare: $(libc-first_prepare_deps_default)
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

libc-first_compile: $(STATEDIR)/libc-first.compile

$(STATEDIR)/libc-first.compile: $(libc-first_compile_deps_default)
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

libc-first_install: $(STATEDIR)/libc-first.install

$(STATEDIR)/libc-first.install: $(libc-first_install_deps_default)
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

libc-first_targetinstall: $(STATEDIR)/libc-first.targetinstall

$(STATEDIR)/libc-first.targetinstall: $(libc-first_targetinstall_deps_default)
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

libc-first_clean:
	rm -rf $(STATEDIR)/libc-first.*
	rm -rf $(IMAGEDIR)/libc-first_*

# vim: syntax=make
