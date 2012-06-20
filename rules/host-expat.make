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
HOST_EXPAT_VERSION	:= 2.0.1
HOST_EXPAT_MD5		:= e4b08e8477e1dccb56b95078c6d6ff88
HOST_EXPAT		:= expat-$(HOST_EXPAT_VERSION)
# Note: repackaged tar.bz2 as tar.gz seems broken.
HOST_EXPAT_SUFFIX	:= tar.bz2
HOST_EXPAT_URL		:= http://www.pengutronix.de/software/ptxdist/temporary-src/$(HOST_EXPAT).$(HOST_EXPAT_SUFFIX)
HOST_EXPAT_SOURCE	:= $(SRCDIR)/$(HOST_EXPAT).$(HOST_EXPAT_SUFFIX)
HOST_EXPAT_DIR		:= $(HOST_BUILDDIR)/$(HOST_EXPAT)

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
