# -*-makefile-*-
# $Id$
#
# Copyright (C) 2006 by Robert Schwebel <r.schwebel@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_GLIBC_CRT) += glibc-crt

#
# Paths and names
#
GLIBC_CRT_DIR	= $(BUILDDIR)/$(GLIBC)-crt

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

glibc-crt_get: $(STATEDIR)/glibc-crt.get

$(STATEDIR)/glibc-crt.get: $(STATEDIR)/glibc.get
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

glibc-crt_extract: $(STATEDIR)/glibc-crt.extract

$(STATEDIR)/glibc-crt.extract: $(STATEDIR)/glibc.extract
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

glibc-crt_prepare: $(STATEDIR)/glibc-crt.prepare

GLIBC_CRT_PATH := PATH=$(CROSS_PATH)
GLIBC_CRT_ENV := \
	BUILD_CC=$(HOSTCC) \
	libc_cv_forced_unwind=yes \
	libc_cv_c_cleanup=yes


#
# autoconf
#
GLIBC_CRT_AUTOCONF = $(GLIBC_AUTOCONF)

$(STATEDIR)/glibc-crt.prepare:
	@$(call targetinfo, $@)
	@$(call clean, $(GLIBC_CRT_DIR))
	mkdir -p $(GLIBC_CRT_DIR)
	cd $(GLIBC_CRT_DIR) && eval \
		$(GLIBC_CRT_PATH) $(GLIBC_CRT_ENV) \
		$(GLIBC_DIR)/configure $(GLIBC_CRT_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

glibc-crt_compile: $(STATEDIR)/glibc-crt.compile

$(STATEDIR)/glibc-crt.compile:
	@$(call targetinfo, $@)
	cd $(GLIBC_CRT_DIR) && $(GLIBC_CRT_PATH) \
		$(MAKE) $(PARALLELMFLAGS) csu/subdir_lib
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

glibc-crt_install: $(STATEDIR)/glibc-crt.install

$(STATEDIR)/glibc-crt.install:
	@$(call targetinfo, $@)
	mkdir -p $(SYSROOT)/usr/lib
	for file in {S,}crt1.o crt{i,n}.o; do \
		$(INSTALL) -m 644 $(GLIBC_CRT_DIR)/csu/$$file \
			$(SYSROOT)/usr/lib/$$file || exit 1; \
	done
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

glibc-crt_targetinstall: $(STATEDIR)/glibc-crt.targetinstall

$(STATEDIR)/glibc-crt.targetinstall:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

glibc-crt_clean:
	rm -rf $(STATEDIR)/glibc-crt.*
	rm -rf $(GLIBC_CRT_DIR)

# vim: syntax=make
