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

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-toolchain.get:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-toolchain.extract:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-toolchain.prepare:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-toolchain.compile:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-toolchain.install:
	@$(call targetinfo)
	-rm -f ${PTXCONF_SYSROOT_CROSS}/bin/ptxconfig
	cp ${PTXDIST_PTXCONFIG} ${PTXCONF_SYSROOT_CROSS}/bin/ptxconfig

# carsten.schlote: Setup a symbolic link to installation dir
# FIXME: find better place for this link?
	-rm state/toolchain-install-dir
	ln -s ${PTXCONF_SYSROOT_CROSS} $(STATEDIR)/toolchain-install-dir
	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

cross-toolchain_clean:
	rm -rf $(STATEDIR)/cross-toolchain.*

# vim: syntax=make
