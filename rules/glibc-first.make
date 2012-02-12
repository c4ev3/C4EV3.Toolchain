# -*-makefile-*-
# $Id: template 6655 2007-01-02 12:55:21Z rsc $
#
# Copyright (C) 2006 by Robert Schwebel
#		2007, 2008 by Marc Kleine-Budde
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_GLIBC_FIRST) += glibc-first

#
# Paths and names
#
GLIBC_FIRST_BUILDDIR	= $(BUILDDIR)/$(GLIBC)-first-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(STATEDIR)/glibc-first.get: $(STATEDIR)/glibc.get
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

$(STATEDIR)/glibc-first.extract: $(STATEDIR)/glibc.extract
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

GLIBC_FIRST_PATH := PATH=$(CROSS_PATH)
GLIBC_FIRST_ENV := \
	CC=$(CROSS_CC) \
	CXX=false \
	BUILD_CC=$(HOSTCC) \
	\
	libc_cv_c_cleanup=yes \
	libc_cv_forced_unwind=yes \
	libc_cv_fpie=yes \
	libc_cv_slibdir='/lib' \
	libc_cv_ssp=yes \
	libc_cv_visibility_attribute=yes \
	libc_cv_broken_visibility_attribute=no \
	libc_cv_z_relro=yes \
	\
	ac_cv_sizeof_long_double=$(PTXCONF_SIZEOF_LONG_DOUBLE)

GLIBC_FIRST_MAKEVARS := AUTOCONF=no

GLIBC_FIRST_AUTOCONF = \
	$(GLIBC_AUTOCONF_COMMON) \
	$(PTXCONF_GLIBC_CONFIG_EXTRA_CROSS) \
	--disable-debug \
	--disable-profile \

$(STATEDIR)/glibc-first.prepare:
	@$(call targetinfo)
	@$(call clean, $(GLIBC_FIRST_BUILDDIR))
	mkdir -p $(GLIBC_FIRST_BUILDDIR)
	cd $(GLIBC_FIRST_BUILDDIR) && \
		$(GLIBC_FIRST_ENV) $(GLIBC_FIRST_PATH) \
		$(GLIBC_DIR)/configure $(GLIBC_FIRST_AUTOCONF)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/glibc-first.compile:
	@$(call targetinfo)
	cd $(GLIBC_FIRST_BUILDDIR) && $(GLIBC_FIRST_PATH) $(MAKE) $(PARALLELMFLAGS) lib
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

$(STATEDIR)/glibc-first.install:
	@$(call targetinfo)
	cd $(GLIBC_FIRST_BUILDDIR) && \
		$(GLIBC_FIRST_PATH) $(MAKE) $(GLIBC_FIRST_MAKEVARS) \
		install_root=$(SYSROOT) install-lib-all install-headers
	@$(call touch)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

$(STATEDIR)/glibc-first.targetinstall:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

glibc-first_clean:
	rm -rf $(STATEDIR)/glibc-first.*
	rm -rf $(GLIBC_FIRST_BUILDDIR)

# vim: syntax=make
