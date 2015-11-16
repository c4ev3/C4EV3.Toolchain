# -*-makefile-*-
#
# Copyright (C) 2006-2008 by Marc Kleine-Budde <mkl@pengutronix.de>
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

#
# Paths and names
#
UCLIBC_HEADERS_VERSION	:= $(call remove_quotes,$(PTXCONF_UCLIBC_VERSION))
UCLIBC_HEADERS_MD5	:= $(call remove_quotes,$(PTXCONF_UCLIBC_MD5))
UCLIBC_HEADERS		:= uClibc-$(UCLIBC_HEADERS_VERSION)
UCLIBC_HEADERS_SUFFIX	:= tar.bz2
UCLIBC_HEADERS_SOURCE	:= $(SRCDIR)/$(UCLIBC_HEADERS).$(UCLIBC_HEADERS_SUFFIX)
UCLIBC_HEADERS_DIR	:= $(BUILDDIR)/uClibc-headers-$(UCLIBC_HEADERS_VERSION)
UCLIBC_HEADERS_URL	 = $(UCLIBC_URL)
UCLIBC_HEADERS_CONFIG	 = $(UCLIBC_CONFIG)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

UCLIBC_HEADERS_ENV = $(UCLIBC_ENV)

$(STATEDIR)/uclibc-headers.prepare: $(UCLIBC_HEADERS_CONFIG)
	@$(call targetinfo)
	@$(call world/kconfig, UCLIBC_HEADERS, oldconfig)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/uclibc-headers.compile:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

UCLIBC_HEADERS_INSTALL_OPT = \
	$(UCLIBC_MAKE_OPT) \
	install_headers

# vim: syntax=make
