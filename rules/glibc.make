# -*-makefile-*-
#
# Copyright (C) 2006 by Robert Schwebel
#		2007, 2008 by Marc Kleine-Budde
#               2013 by Michael Olbrich <m.olbrich@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_GLIBC) += glibc

#
# Paths and names
#
GLIBC_VERSION	:= $(call remove_quotes,$(PTXCONF_GLIBC_VERSION))
GLIBC_MD5	:= $(call remove_quotes,$(PTXCONF_GLIBC_MD5))
GLIBC		:= glibc-$(GLIBC_VERSION)
GLIBC_SUFFIX	:= tar.bz2
GLIBC_SOURCE	:= $(SRCDIR)/$(GLIBC).$(GLIBC_SUFFIX)
GLIBC_DIR	:= $(BUILDDIR_DEBUG)/$(GLIBC)
GLIBC_BUILDDIR	:= $(BUILDDIR)/$(GLIBC)-build
GLIBC_URL	:= \
	$(call ptx/mirror, GNU, glibc/$(GLIBC).$(GLIBC_SUFFIX)) \
	ftp://sourceware.org/pub/glibc/snapshots/$(GLIBC).$(GLIBC_SUFFIX) \
	http://www.pengutronix.de/software/ptxdist/temporary-src/glibc/$(GLIBC).$(GLIBC_SUFFIX)
GLIBC_LICENSE	:= $(call remove_quotes,$(PTXCONF_GLIBC_LICENSE))
GLIBC_LICENSE_FILES := $(call remove_quotes,$(PTXCONF_GLIBC_LICENSE_FILES))

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

GLIBC_PATH := PATH=$(CROSS_PATH)
GLIBC_ENV := \
	CC="$(CROSS_CC) -fuse-ld=bfd" \
	BUILD_CC=$(HOSTCC) \
	MAKEINFO=: \
	$(GLIBC_FLAGS_ENV) \
	\
	libc_cv_slibdir='/lib' \
	\
	ac_cv_path_BASH_SHELL=/bin/bash \
	ac_cv_sizeof_long_double=$(PTXCONF_SIZEOF_LONG_DOUBLE)


GLIBC_MAKEVARS := AUTOCONF=no

#
# autoconf
#
GLIBC_AUTOCONF_COMMON := \
	--prefix=/usr \
	--host=$(PTXCONF_GNU_TARGET) \
	--target=$(PTXCONF_GNU_TARGET) \
	\
	--with-headers=$(SYSROOT)/usr/include \
	\
	--disable-build-nscd \
	--disable-nscd \
	\
	--without-gd \
	--without-selinux \
	--disable-sanity-checks \
	\
	$(PTXCONF_GLIBC_CONFIG_EXTRA)

GLIBC_CONF_TOOL	:= autoconf
GLIBC_CONF_OPT	:= \
	$(GLIBC_AUTOCONF_COMMON) \
	$(PTXCONF_GLIBC_CONFIG_EXTRA_CROSS) \
	\
	--enable-kernel=$(PTXCONF_GLIBC_ENABLE_KERNEL) \
	--enable-profile \
	--enable-shared \
	--enable-static-nss

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

GLIBC_COMPLIANCE := $(PTXCONF_SYSROOT_CROSS)/share/compliance/glibc


$(STATEDIR)/glibc.install: $(STATEDIR)/glibc.report
	@$(call targetinfo)
	cd $(GLIBC_BUILDDIR) && \
		$(GLIBC_PATH) $(MAKE) $(GLIBC_MAKEVARS) \
		install_root=$(SYSROOT) install

	@$(call world/env, GLIBC) ptxd_make_world_copy_license
#
# Fix a bug when linking statically
# see: http://bugs.debian.org/cgi-bin/bugreport.cgi?bug=76451
#
	if [ -e "$(SYSROOT)/usr/lib/libnss_files.a" ]; then \
		mv -- "$(SYSROOT)/usr/lib/libc.a" "$(SYSROOT)/usr/lib/libc_ns.a" && \
		echo '/* GNU ld script'											>  "$(SYSROOT)/usr/lib/libc.a" && \
		echo '   Use the static library, but some functions are in other strange'				>> "$(SYSROOT)/usr/lib/libc.a" && \
		echo '   libraries :-( So try them secondarily. */'							>> "$(SYSROOT)/usr/lib/libc.a" && \
		echo 'GROUP ( /usr/lib/libc_ns.a /usr/lib/libnss_files.a /usr/lib/libnss_dns.a /usr/lib/libresolv.a )'	>> "$(SYSROOT)/usr/lib/libc.a" ; \
	fi

	@$(call touch)

# vim: syntax=make
