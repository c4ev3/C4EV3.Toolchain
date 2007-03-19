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
PACKAGES-$(PTXCONF_UCLIBC_HEADERS) += uclibc-headers

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

uclibc-headers_get: $(STATEDIR)/uclibc-headers.get

$(STATEDIR)/uclibc-headers.get: $(STATEDIR)/uclibc.get
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

uclibc-headers_extract: $(STATEDIR)/uclibc-headers.extract

$(STATEDIR)/uclibc-headers.extract: $(STATEDIR)/uclibc.extract
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

uclibc-headers_prepare: $(STATEDIR)/uclibc-headers.prepare

UCLIBC_HEADERS_PATH	:= PATH=$(CROSS_PATH)
UCLIBC_HEADERS_ENV 	:= $(CROSS_ENV)

$(STATEDIR)/uclibc-headers.prepare: $(STATEDIR)/uclibc.prepare
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

uclibc-headers_compile: $(STATEDIR)/uclibc-headers.compile

$(STATEDIR)/uclibc-headers.compile:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

uclibc-headers_install: $(STATEDIR)/uclibc-headers.install

$(STATEDIR)/uclibc-headers.install:
	@$(call targetinfo, $@)
	cd $(UCLIBC_DIR) && \
		$(UCLIBC_PATH) $(UCLIBC_ENV) \
		$(MAKE) $(UCLIBC_MAKEVARS) \
		pregen install_dev DEVEL_PREFIX=/usr/ PREFIX=$(SYSROOT) KERNEL_SOURCE=$(SYSROOT)/usr
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

uclibc-headers_targetinstall: $(STATEDIR)/uclibc-headers.targetinstall

$(STATEDIR)/uclibc-headers.targetinstall:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

uclibc-headers_clean:
	rm -rf $(STATEDIR)/uclibc-headers.*
	rm -rf $(IMAGEDIR)/uclibc-headers_*
	rm -rf $(UCLIBC_HEADERS_DIR)

# vim: syntax=make
