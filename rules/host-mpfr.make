# -*-makefile-*-
# $Id$
#
# Copyright (C) 2007 by Marc Kleine-Budde <mkl@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
HOST_PACKAGES-$(PTXCONF_HOST_MPFR) += host-mpfr

#
# Paths and names
#
HOST_MPFR_VERSION	:= 2.3.1
HOST_MPFR		:= mpfr-$(HOST_MPFR_VERSION)
HOST_MPFR_SUFFIX	:= tar.bz2
HOST_MPFR_URL		:= http://www.mpfr.org/mpfr-current/$(HOST_MPFR).$(HOST_MPFR_SUFFIX)
HOST_MPFR_SOURCE	:= $(SRCDIR)/$(HOST_MPFR).$(HOST_MPFR_SUFFIX)
HOST_MPFR_DIR		:= $(HOST_BUILDDIR)/$(HOST_MPFR)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(HOST_MPFR_SOURCE):
	@$(call targetinfo)
	@$(call get, HOST_MPFR)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

$(STATEDIR)/host-mpfr.extract:
	@$(call targetinfo)
	@$(call clean, $(HOST_MPFR_DIR))
	@$(call extract, HOST_MPFR, $(HOST_BUILDDIR))
	@$(call patchin, HOST_MPFR, $(HOST_MPFR_DIR))
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

HOST_MPFR_PATH	:= PATH=$(HOST_PATH)
HOST_MPFR_ENV 	:= $(HOST_ENV)

#
# autoconf
#
HOST_MPFR_AUTOCONF	:= \
	$(HOST_AUTOCONF) \
	--disable-shared \
	--enable-static

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

host-mpfr_clean:
	rm -rf $(STATEDIR)/host-mpfr.*
	rm -rf $(HOST_MPFR_DIR)

# vim: syntax=make
