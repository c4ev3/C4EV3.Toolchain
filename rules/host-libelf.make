# -*-makefile-*-
#
# Copyright (C) 2011 by Michael Olbrich <m.olbrich@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
HOST_PACKAGES-$(PTXCONF_HOST_LIBELF) += host-libelf

#
# Paths and names
#
HOST_LIBELF_VERSION	:= 0.8.13
HOST_LIBELF_MD5		:= 4136d7b4c04df68b686570afa26988ac
HOST_LIBELF		:= libelf-$(HOST_LIBELF_VERSION)
HOST_LIBELF_SUFFIX	:= tar.gz
HOST_LIBELF_URL		:= http://www.mr511.de/software/$(HOST_LIBELF).$(HOST_LIBELF_SUFFIX)
HOST_LIBELF_SOURCE	:= $(SRCDIR)/$(HOST_LIBELF).$(HOST_LIBELF_SUFFIX)
HOST_LIBELF_DIR		:= $(HOST_BUILDDIR)/$(HOST_LIBELF)
HOST_LIBELF_LICENSE	:= LGPL

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

#
# autoconf
#
HOST_LIBELF_AUTOCONF := \
	$(PTX_HOST_AUTOCONF) \
	--disable-shared \
	--enable-elf64

HOST_LIBELF_DEVPKG	:= NO

# vim: syntax=make
