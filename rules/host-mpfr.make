# -*-makefile-*-
# $Id$
#
# Copyright (C) 2007-2008 by Marc Kleine-Budde <mkl@pengutronix.de>
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
HOST_MPFR_VERSION	:= 3.0.0
HOST_MPFR		:= mpfr-$(HOST_MPFR_VERSION)
HOST_MPFR_SUFFIX	:= tar.bz2
HOST_MPFR_SOURCE	:= $(SRCDIR)/$(HOST_MPFR).$(HOST_MPFR_SUFFIX)
HOST_MPFR_DIR		:= $(HOST_BUILDDIR)/$(HOST_MPFR)

HOST_MPFR_URL		:= \
	http://www.mpfr.org/mpfr-$(HOST_MPFR_VERSION)/$(HOST_MPFR).$(HOST_MPFR_SUFFIX) \
	http://cross-lfs.org/files/packages/svn/$(HOST_MPFR).$(HOST_MPFR_SUFFIX)

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
HOST_MPFR_ENV 	:= $(PTX_HOST_ENV)
HOST_MPFR_DEVPKG:= NO

#
# autoconf
#
HOST_MPFR_AUTOCONF	:= \
	$(PTX_HOST_AUTOCONF) \
	--disable-shared \
	--enable-static

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

host-mpfr_clean:
	rm -rf $(STATEDIR)/host-mpfr.*
	rm -rf $(HOST_MPFR_DIR)

# vim: syntax=make
