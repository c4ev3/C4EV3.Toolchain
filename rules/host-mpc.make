# -*-makefile-*-
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
HOST_PACKAGES-$(PTXCONF_HOST_MPC) += host-mpc

#
# Paths and names
#
HOST_MPC_VERSION	:= 1.0.3
HOST_MPC_MD5		:= d6a1d5f8ddea3abd2cc3e98f58352d26
HOST_MPC		:= mpc-$(HOST_MPC_VERSION)
HOST_MPC_SUFFIX		:= tar.gz
HOST_MPC_URL		:= http://www.multiprecision.org/mpc/download/$(HOST_MPC).$(HOST_MPC_SUFFIX)
HOST_MPC_SOURCE		:= $(SRCDIR)/$(HOST_MPC).$(HOST_MPC_SUFFIX)
HOST_MPC_DIR		:= $(HOST_BUILDDIR)/$(HOST_MPC)
HOST_MPC_LICENSE	:= LGPL-3.0+

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

HOST_MPC_DEVPKG	:= NO

#
# autoconf
#
HOST_MPC_CONF_TOOL	:= autoconf
HOST_MPC_CONF_OPT	:= \
	$(PTX_HOST_AUTOCONF) \
	--disable-shared \
	--enable-static

# vim: syntax=make
