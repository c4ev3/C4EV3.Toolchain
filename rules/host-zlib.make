# -*-makefile-*-
#
# Copyright (C) 2006 by Pengutronix e.K., Hildesheim, Germany
#               2009 by Marc Kleine-Budde <mkl@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
HOST_PACKAGES-$(PTXCONF_HOST_ZLIB) += host-zlib

#
# Paths and names
#
HOST_ZLIB_VERSION	:= 1.2.11
HOST_ZLIB_MD5		:= 85adef240c5f370b308da8c938951a68
HOST_ZLIB		:= zlib-$(HOST_ZLIB_VERSION)
HOST_ZLIB_SUFFIX	:= tar.xz
HOST_ZLIB_URL		:= \
	http://zlib.net/$(HOST_ZLIB).$(HOST_ZLIB_SUFFIX) \
	$(call ptx/mirror, SF, libpng/$(HOST_ZLIB).$(HOST_ZLIB_SUFFIX))
HOST_ZLIB_SOURCE	:= $(SRCDIR)/$(HOST_ZLIB).$(HOST_ZLIB_SUFFIX)
HOST_ZLIB_DIR		:= $(HOST_BUILDDIR)/$(HOST_ZLIB)
HOST_ZLIB_LICENSE	:= Zlib
HOST_ZLIB_LICENSE_FILES	:= file://README;md5=0ff45db88393c3152e458a047bba0ff1

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

HOST_ZLIB_DEVPKG	:= NO

#
# autoconf
#
HOST_ZLIB_CONF_TOOL	:= autoconf
HOST_ZLIB_CONF_OPT	:= \
	$(PTX_HOST_AUTOCONF) \
	--static

# vim: syntax=make
