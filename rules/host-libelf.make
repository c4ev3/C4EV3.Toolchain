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
HOST_LIBELF_VERSION	:= 0.174
HOST_LIBELF_MD5		:= 48bec24c0c8b2c16820326956dff9378
HOST_LIBELF		:= elfutils-$(HOST_LIBELF_VERSION)
HOST_LIBELF_SUFFIX	:= tar.bz2
HOST_LIBELF_URL		:= https://sourceware.org/elfutils/ftp/$(HOST_LIBELF_VERSION)/$(HOST_LIBELF).$(HOST_LIBELF_SUFFIX)
HOST_LIBELF_SOURCE	:= $(SRCDIR)/$(HOST_LIBELF).$(HOST_LIBELF_SUFFIX)
HOST_LIBELF_DIR		:= $(HOST_BUILDDIR)/$(HOST_LIBELF)
HOST_LIBELF_LICENSE	:= (LGPL-3.0+ OR GPL-2.0+) AND GPL-3.0+

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

#
# autoconf
#
HOST_LIBELF_AUTOCONF := \
	$(PTX_HOST_AUTOCONF) \
	--enable-deterministic-archives \
	--disable-thread-safety \
	--disable-debugpred \
	--disable-gprof \
	--disable-gcov \
	--disable-sanitize-undefined \
	--disable-valgrind \
	--disable-tests-rpath \
	--enable-libebl-subdir=elfutils \
	--enable-textrelcheck \
	--enable-symbol-versioning \
	--disable-nls \
	--with-zlib \
	--without-bzlib \
	--with-lzma \
	--without-biarch

HOST_LIBELF_DEVPKG	:= NO

ifdef PTXDIST_ICECC
LIBELF_CFLAGS := -C
endif

HOST_LIBELF_MAKE_OPT	:= -C libelf libelf.a
HOST_LIBELF_INSTALL_OPT	:= -C libelf install-data-am install-exec-am

# vim: syntax=make
