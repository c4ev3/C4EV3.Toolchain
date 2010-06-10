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
HOST_PACKAGES-$(PTXCONF_HOST_GMP) += host-gmp

#
# Paths and names
#
HOST_GMP_VERSION	:= 4.2.4
HOST_GMP		:= gmp-$(HOST_GMP_VERSION)
HOST_GMP_SUFFIX		:= tar.bz2
HOST_GMP_URL		:= $(PTXCONF_SETUP_GNUMIRROR)/gmp/$(HOST_GMP).$(HOST_GMP_SUFFIX)
HOST_GMP_SOURCE		:= $(SRCDIR)/$(HOST_GMP).$(HOST_GMP_SUFFIX)
HOST_GMP_DIR		:= $(HOST_BUILDDIR)/$(HOST_GMP)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(HOST_GMP_SOURCE):
	@$(call targetinfo)
	@$(call get, HOST_GMP)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

HOST_GMP_PATH	:= PATH=$(HOST_PATH)
HOST_GMP_ENV 	:= $(PTX_HOST_ENV)
HOST_GMP_DEVPKG	:= NO

#
# autoconf
#
HOST_GMP_AUTOCONF	:= \
	$(PTX_HOST_AUTOCONF) \
	--disable-shared \
	--enable-static

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

host-gmp_clean:
	rm -rf $(STATEDIR)/host-gmp.*
	rm -rf $(HOST_GMP_DIR)

# vim: syntax=make
