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

$(STATEDIR)/glibc-crt.extract: $(glibc-crt_extract_deps_default) $(STATEDIR)/glibc.extract
	@$(call targetinfo, $@)
	@$(call clean, $(GLIBC_CRT_DIR))
	mkdir -p $(GLIBC_CRT_DIR)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

glibc-crt_prepare: $(STATEDIR)/glibc-crt.prepare

GLIBC_CRT_PATH	:= PATH=$(CROSS_PATH)
GLIBC_CRT_ENV	:= \
	BUILD_CC=$(HOSTCC) \
	libc_cv_forced_unwind=yes \
	libc_cv_c_cleanup=yes

#
# libc_cv_forced_unwind=yes
# libc_cv_c_cleanup=yes
#
# is needed for nptl (mkl)
#


#
# autoconf
#
GLIBC_CRT_AUTOCONF = $(GLIBC_AUTOCONF)

$(STATEDIR)/glibc-crt.prepare: $(glibc-crt_prepare_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(GLIBC_CRT_DIR)/config.cache)
	cd $(GLIBC_CRT_DIR) && \
		$(GLIBC_CRT_PATH) $(GLIBC_CRT_ENV) \
		$(GLIBC_DIR)/configure $(GLIBC_CRT_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

glibc-crt_compile: $(STATEDIR)/glibc-crt.compile

$(STATEDIR)/glibc-crt.compile: $(glibc-crt_compile_deps_default)
	@$(call targetinfo, $@)
	cd $(GLIBC_CRT_DIR) && $(GLIBC_CRT_ENV) $(GLIBC_CRT_PATH) \
		$(MAKE) $(PARALLELMFLAGS) csu/subdir_lib
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

glibc-crt_install: $(STATEDIR)/glibc-crt.install

$(STATEDIR)/glibc-crt.install: $(glibc-crt_install_deps_default)
	@$(call targetinfo, $@)
	for file in crt1.o crti.o crtn.o; do \
		$(INSTALL) -m 644 -D $(GLIBC_CRT_DIR)/csu/$$file \
			$(SYSROOT)/usr/lib/$$file; \
	done
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

glibc-crt_targetinstall: $(STATEDIR)/glibc-crt.targetinstall

$(STATEDIR)/glibc-crt.targetinstall: $(glibc-crt_targetinstall_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

glibc-crt_clean:
	rm -rf $(STATEDIR)/glibc-crt.*
	rm -rf $(GLIBC_CRT_DIR)

# vim: syntax=make
