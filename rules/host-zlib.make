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
HOST_ZLIB_VERSION	:= 1.2.5
HOST_ZLIB		:= zlib-$(HOST_ZLIB_VERSION)
HOST_ZLIB_SUFFIX	:= tar.bz2
HOST_ZLIB_URL		:= http://zlib.net/$(HOST_ZLIB).$(HOST_ZLIB_SUFFIX)
HOST_ZLIB_SOURCE	:= $(SRCDIR)/$(HOST_ZLIB).$(HOST_ZLIB_SUFFIX)
HOST_ZLIB_DIR		:= $(HOST_BUILDDIR)/$(HOST_ZLIB)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(HOST_ZLIB_SOURCE):
	@$(call targetinfo)
	@$(call get, HOST_ZLIB)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

HOST_ZLIB_PATH	:= PATH=$(HOST_PATH)
HOST_ZLIB_ENV 	:= $(HOST_ENV)

#
# autoconf
#
HOST_ZLIB_AUTOCONF	:= \
	$(PTX_HOST_AUTOCONF) \
	--static

# vim: syntax=make
