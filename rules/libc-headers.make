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
PACKAGES-$(PTXCONF_LIBC_HEADERS) += libc_headers

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

libc_headers_get: $(STATEDIR)/libc_headers.get

$(STATEDIR)/libc_headers.get:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

libc_headers_extract: $(STATEDIR)/libc_headers.extract

$(STATEDIR)/libc_headers.extract:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

libc_headers_prepare: $(STATEDIR)/libc_headers.prepare

$(STATEDIR)/libc_headers.prepare:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

libc_headers_compile: $(STATEDIR)/libc_headers.compile

$(STATEDIR)/libc_headers.compile:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

libc_headers_install: $(STATEDIR)/libc_headers.install

$(STATEDIR)/libc_headers.install:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

libc_headers_targetinstall: $(STATEDIR)/libc_headers.targetinstall

$(STATEDIR)/libc_headers.targetinstall:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

libc_headers_clean:
	rm -rf $(STATEDIR)/libc_headers.*

# vim: syntax=make
