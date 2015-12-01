# -*-makefile-*-
#
# Copyright (C) 2012 by Michael Olbrich <m.olbrich@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
HOST_PACKAGES-$(PTXCONF_HOST_EXPAT) += host-expat

#
# Paths and names
#
HOST_EXPAT_VERSION	:= 2.1.1
HOST_EXPAT_MD5		:= 7380a64a8e3a9d66a9887b01d0d7ea81
HOST_EXPAT		:= expat-$(HOST_EXPAT_VERSION)
HOST_EXPAT_SUFFIX	:= tar.bz2
HOST_EXPAT_URL		:= $(call ptx/mirror, SF, expat/$(HOST_EXPAT).$(HOST_EXPAT_SUFFIX))
HOST_EXPAT_SOURCE	:= $(SRCDIR)/$(HOST_EXPAT).$(HOST_EXPAT_SUFFIX)
HOST_EXPAT_DIR		:= $(HOST_BUILDDIR)/$(HOST_EXPAT)
HOST_EXPAT_LICENSE	:= MIT

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

#HOST_EXPAT_CONF_ENV	:= $(HOST_ENV)
HOST_EXPAT_DEVPKG	:= NO

#
# autoconf
#
HOST_EXPAT_CONF_TOOL	:= autoconf
HOST_EXPAT_CONF_OPT	:= \
	$(PTX_HOST_AUTOCONF) \
	--disable-shared \
	--enable-static

# vim: syntax=make
