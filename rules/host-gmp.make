# -*-makefile-*-
# $Id$
#
# Copyright (C) 2007 by Marc Kleine-Budde <mkl@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
HOST_PACKAGES-$(PTXCONF_HOST_GMP) += host-gmp

#
# Paths and names
#
HOST_GMP_VERSION	:= 4.2.1
HOST_GMP		:= gmp-$(HOST_GMP_VERSION)
HOST_GMP_SUFFIX		:= tar.bz2
HOST_GMP_URL		:= $(PTXCONF_SETUP_GNUMIRROR)/gmp/$(HOST_GMP).$(HOST_GMP_SUFFIX)
HOST_GMP_SOURCE		:= $(SRCDIR)/$(HOST_GMP).$(HOST_GMP_SUFFIX)
HOST_GMP_DIR		:= $(HOST_BUILDDIR)/$(HOST_GMP)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

host-gmp_get: $(STATEDIR)/host-gmp.get

$(STATEDIR)/host-gmp.get: $(host-gmp_get_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

$(HOST_GMP_SOURCE):
	@$(call targetinfo, $@)
	@$(call get, HOST_GMP)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

host-gmp_extract: $(STATEDIR)/host-gmp.extract

$(STATEDIR)/host-gmp.extract: $(host-gmp_extract_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(HOST_GMP_DIR))
	@$(call extract, HOST_GMP, $(HOST_BUILDDIR))
	@$(call patchin, HOST_GMP, $(HOST_GMP_DIR))
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

host-gmp_prepare: $(STATEDIR)/host-gmp.prepare

HOST_GMP_PATH	:= PATH=$(HOST_PATH)
HOST_GMP_ENV 	:= $(HOST_ENV)

#
# autoconf
#
HOST_GMP_AUTOCONF	:= $(HOST_AUTOCONF)

$(STATEDIR)/host-gmp.prepare: $(host-gmp_prepare_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(HOST_GMP_DIR)/config.cache)
	cd $(HOST_GMP_DIR) && \
		$(HOST_GMP_PATH) $(HOST_GMP_ENV) \
		./configure $(HOST_GMP_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

host-gmp_compile: $(STATEDIR)/host-gmp.compile

$(STATEDIR)/host-gmp.compile: $(host-gmp_compile_deps_default)
	@$(call targetinfo, $@)
	cd $(HOST_GMP_DIR) && $(HOST_GMP_PATH) $(MAKE) $(PARALLELMFLAGS)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

host-gmp_install: $(STATEDIR)/host-gmp.install

$(STATEDIR)/host-gmp.install: $(host-gmp_install_deps_default)
	@$(call targetinfo, $@)
	@$(call install, HOST_GMP,,h)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

host-gmp_clean:
	rm -rf $(STATEDIR)/host-gmp.*
	rm -rf $(HOST_GMP_DIR)

# vim: syntax=make
