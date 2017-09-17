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
HOST_PACKAGES-$(PTXCONF_HOST_GMP) += host-gmp

#
# Paths and names
#
HOST_GMP_VERSION	:= 6.1.2
HOST_GMP_MD5		:= f58fa8001d60c4c77595fbbb62b63c1d
HOST_GMP		:= gmp-$(HOST_GMP_VERSION)
HOST_GMP_SUFFIX		:= tar.xz
HOST_GMP_URL		:= \
	$(call ptx/mirror, GNU, gmp/$(HOST_GMP).$(HOST_GMP_SUFFIX)) \
	https://gmplib.org/download/gmp/$(HOST_GMP).$(HOST_GMP_SUFFIX)
HOST_GMP_SOURCE		:= $(SRCDIR)/$(HOST_GMP).$(HOST_GMP_SUFFIX)
HOST_GMP_DIR		:= $(HOST_BUILDDIR)/$(HOST_GMP)
HOST_GMP_LICENSE	:= LGPL-3.0+ OR GPL-2.0+
HOST_GMP_LICENSE_FILES	:= \
	file://README;startline=1;endline=28;md5=f3c74a346cd47d0368288cc431ff865a \
	file://COPYING;md5=d32239bcb673463ab874e80d47fae504 \
	file://COPYING.LESSERv3;md5=6a6a8e020838b23406c81b19c1d46df6 \
	file://COPYINGv2;md5=b234ee4d69f5fce4486a80fdaf4a4263

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

HOST_GMP_DEVPKG	:= NO

#
# autoconf
#
HOST_GMP_CONF_TOOL	:= autoconf
HOST_GMP_CONF_OPT	:= \
	$(PTX_HOST_AUTOCONF) \
	--host=$(GNU_HOST) \
	--disable-shared \
	--enable-static \
	--without-readline

# vim: syntax=make
