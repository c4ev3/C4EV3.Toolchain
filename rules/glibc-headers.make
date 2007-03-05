# -*-makefile-*-
# $Id$
#
# Copyright (C) 2006 by Robert Schwebel
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_GLIBC_HEADERS) += glibc-headers

#
# Paths and names
#
GLIBC_HEADERS_DIR	= $(BUILDDIR)/$(GLIBC)-headers

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

glibc-headers_get: $(STATEDIR)/glibc-headers.get

$(STATEDIR)/glibc-headers.get: $(STATEDIR)/glibc.get
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

glibc-headers_extract: $(STATEDIR)/glibc-headers.extract

$(STATEDIR)/glibc-headers.extract: $(STATEDIR)/glibc.extract
	@$(call targetinfo, $@)
	@$(call clean, $(GLIBC_HEADERS_DIR))
	mkdir -p $(GLIBC_HEADERS_DIR)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

glibc-headers_prepare: $(STATEDIR)/glibc-headers.prepare

GLIBC_HEADERS_PATH := PATH=$(CROSS_PATH)
#
# these various env variables are necessary, because we are using the host compiler
# it doesn't matter if we define ppc stuff during arm build
# they aren't tested :)
# no ifdefs for simplicity
#
GLIBC_HEADERS_ENV  := \
	$(HOST_ENV) \
	CC="$${CC} -DBOOTSTRAP_GCC $(call remove_quotes, $(PTXCONF_GLIBC_HEADERS_FAKE_CROSS))" \
	\
	libc_cv_initfini_array=yes \
	\
	libc_cv_386_tls=yes \
	\
	libc_cv_arm_tls=yes \
	\
	libc_cv_mlong_double_128ibm=set \
	libc_cv_mlong_double_128=set \
	libc_cv_ppc_machine=yes \
	libc_cv_powerpc32_tls=yes \
	libc_cv_powerpc64_tls=yes

#
# autoconf
#
GLIBC_HEADERS_AUTOCONF = \
	$(GLIBC_AUTOCONF_COMMON) \
	\
	--enable-hacker-mode

$(STATEDIR)/glibc-headers.prepare: $(STATEDIR)/glibc.extract
	@$(call targetinfo, $@)
	cd $(GLIBC_HEADERS_DIR) && \
		$(GLIBC_HEADERS_PATH) $(GLIBC_HEADERS_ENV) \
		$(GLIBC_DIR)/configure $(GLIBC_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

glibc-headers_compile: $(STATEDIR)/glibc-headers.compile

$(STATEDIR)/glibc-headers.compile:
	@$(call targetinfo, $@)
	cd $(GLIBC_HEADERS_DIR) && \
		$(GLIBC_HEADERS_PATH) $(GLIBC_HEADERS_ENV) \
		$(MAKE) sysdeps/gnu/errlist.c

	mkdir -p $(GLIBC_HEADERS_DIR)/stdio-common
	touch $(GLIBC_HEADERS_DIR)/stdio-common/errlist-compat.c
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

glibc-headers_install: $(STATEDIR)/glibc-headers.install

$(STATEDIR)/glibc-headers.install:
	@$(call targetinfo, $@)
	cd $(GLIBC_HEADERS_DIR) && \
		$(GLIBC_HEADERS_PATH) $(GLIBC_HEADERS_ENV) \
		$(MAKE) compiling=yes install_root=$(SYSROOT) install-headers

	mkdir -p $(SYSROOT)/usr/include/gnu
	touch $(SYSROOT)/usr/include/gnu/stubs.h

	cp $(GLIBC_DIR)/include/features.h $(SYSROOT)/usr/include/features.h
	cp $(GLIBC_HEADERS_DIR)/bits/stdio_lim.h $(SYSROOT)/usr/include/bits/stdio_lim.h
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

glibc-headers_targetinstall: $(STATEDIR)/glibc-headers.targetinstall

$(STATEDIR)/glibc-headers.targetinstall:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

glibc-headers_clean:
	rm -rf $(STATEDIR)/glibc-headers.*
	rm -rf $(GLIBC_HEADERS_DIR)

# vim: syntax=make
