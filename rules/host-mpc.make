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
HOST_MPC_VERSION	:= 1.1.0
HOST_MPC_MD5		:= 4125404e41e482ec68282a2e687f6c73
HOST_MPC		:= mpc-$(HOST_MPC_VERSION)
HOST_MPC_SUFFIX		:= tar.gz
HOST_MPC_URL		:= https://ftp.gnu.org/gnu/mpc/$(HOST_MPC).$(HOST_MPC_SUFFIX)
HOST_MPC_SOURCE		:= $(SRCDIR)/$(HOST_MPC).$(HOST_MPC_SUFFIX)
HOST_MPC_DIR		:= $(HOST_BUILDDIR)/$(HOST_MPC)
HOST_MPC_LICENSE	:= LGPL-3.0-or-later

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
