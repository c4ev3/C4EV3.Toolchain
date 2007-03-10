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
PACKAGES-$(PTXCONF_UCLIBC_HEADERS) += uclibc_headers

UCLIBC_HEADERS_DIR	= $(UCLIBC_DIR)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

uclibc_headers_get: $(STATEDIR)/uclibc_headers.get

$(STATEDIR)/uclibc_headers.get: $(STATEDIR)/uclibc.get
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

uclibc_headers_extract: $(STATEDIR)/uclibc_headers.extract

$(STATEDIR)/uclibc_headers.extract: $(STATEDIR)/uclibc.extract
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

uclibc_headers_prepare: $(STATEDIR)/uclibc_headers.prepare

UCLIBC_HEADERS_PATH	:= PATH=$(CROSS_PATH)
UCLIBC_HEADERS_ENV 	:= $(CROSS_ENV)

$(STATEDIR)/uclibc_headers.prepare:
	@$(call targetinfo, $@)
	cp $(PTXDIST_WORKSPACE)/uclibc.config $(UCLIBC_HEADERS_DIR)/.config
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

uclibc_headers_compile: $(STATEDIR)/uclibc_headers.compile

$(STATEDIR)/uclibc_headers.compile:
	@$(call targetinfo, $@)
	yes "" | make -C $(UCLIBC_HEADERS_DIR) oldconfig
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

uclibc_headers_install: $(STATEDIR)/uclibc_headers.install

$(STATEDIR)/uclibc_headers.install:
	@$(call targetinfo, $@)
	cd $(UCLIBC_HEADERS_DIR) && \
		$(UCLIBC_HEADERS_PATH) $(UCLIBC_HEADERS_ENV) \
		$(MAKE) pregen install_dev DEVEL_PREFIX=/usr/ PREFIX=$(SYSROOT) KERNEL_SOURCE=$(SYSROOT)/usr
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

uclibc_headers_targetinstall: $(STATEDIR)/uclibc_headers.targetinstall

$(STATEDIR)/uclibc_headers.targetinstall:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

uclibc_headers_clean:
	rm -rf $(STATEDIR)/uclibc_headers.*
	rm -rf $(IMAGEDIR)/uclibc_headers_*
	rm -rf $(UCLIBC_HEADERS_DIR)

# vim: syntax=make
