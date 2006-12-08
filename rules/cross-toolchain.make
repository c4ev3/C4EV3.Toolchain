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
CROSS_PACKAGES-$(PTXCONF_CROSS_TOOLCHAIN) += cross-toolchain

#
# Paths and names
#
CROSS_TOOLCHAIN_VERSION		:=
CROSS_TOOLCHAIN			:= toolchain-$(CROSS_TOOLCHAIN_VERSION)
CROSS_TOOLCHAIN_DIR		:= $(CROSS_BUILDDIR)/$(CROSS_TOOLCHAIN)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

cross-toolchain_get: $(STATEDIR)/cross-toolchain.get

$(STATEDIR)/cross-toolchain.get: $(cross-toolchain_get_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

cross-toolchain_extract: $(STATEDIR)/cross-toolchain.extract

$(STATEDIR)/cross-toolchain.extract: $(cross-toolchain_extract_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

cross-toolchain_prepare: $(STATEDIR)/cross-toolchain.prepare

$(STATEDIR)/cross-toolchain.prepare: $(cross-toolchain_prepare_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

cross-toolchain_compile: $(STATEDIR)/cross-toolchain.compile

$(STATEDIR)/cross-toolchain.compile: $(cross-toolchain_compile_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

cross-toolchain_install: $(STATEDIR)/cross-toolchain.install

$(STATEDIR)/cross-toolchain.install: $(cross-toolchain_install_deps_default)
	@$(call targetinfo, $@)
	rm -f ${PTXCONF_PREFIX}/bin/ptxconfig
	cat ${PTXDIST_WORKSPACE}/ptxconfig > ${PTXCONF_PREFIX}/bin/ptxconfig
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

cross-toolchain_clean:
	rm -rf $(STATEDIR)/cross-toolchain.*
	rm -rf $(IMAGEDIR)/cross-toolchain_*
	rm -rf $(CROSS_TOOLCHAIN_DIR)

# vim: syntax=make
