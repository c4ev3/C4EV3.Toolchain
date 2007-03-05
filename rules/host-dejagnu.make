# -*-makefile-*-
# $Id$
#
# Copyright (C) 2007 by Marc Kleine-Budde
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
HOST_PACKAGES-$(PTXCONF_HOST_DEJAGNU) += host-dejagnu

#
# Paths and names
#
HOST_DEJAGNU_VERSION	:= 1.4.4
HOST_DEJAGNU		:= dejagnu-$(HOST_DEJAGNU_VERSION)
HOST_DEJAGNU_SUFFIX	:= tar.gz
HOST_DEJAGNU_URL	:= $(PTXCONF_SETUP_GNUMIRROR)/dejagnu/$(HOST_DEJAGNU).$(HOST_DEJAGNU_SUFFIX)
HOST_DEJAGNU_SOURCE	:= $(SRCDIR)/$(HOST_DEJAGNU).$(HOST_DEJAGNU_SUFFIX)
HOST_DEJAGNU_DIR	:= $(HOST_BUILDDIR)/$(HOST_DEJAGNU)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

host-dejagnu_get: $(STATEDIR)/host-dejagnu.get

$(STATEDIR)/host-dejagnu.get:
	@$(call targetinfo, $@)
	@$(call touch, $@)

$(HOST_DEJAGNU_SOURCE):
	@$(call targetinfo, $@)
	@$(call get, HOST_DEJAGNU)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

host-dejagnu_extract: $(STATEDIR)/host-dejagnu.extract

$(STATEDIR)/host-dejagnu.extract:
	@$(call targetinfo, $@)
	@$(call clean, $(HOST_DEJAGNU_DIR))
	@$(call extract, HOST_DEJAGNU, $(HOST_BUILDDIR))
	@$(call patchin, HOST_DEJAGNU, $(HOST_DEJAGNU_DIR))
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

host-dejagnu_prepare: $(STATEDIR)/host-dejagnu.prepare

HOST_DEJAGNU_PATH	:= PATH=$(HOST_PATH)
HOST_DEJAGNU_ENV 	:= $(HOST_ENV)

#
# autoconf
#
HOST_DEJAGNU_AUTOCONF	:= $(HOST_AUTOCONF)

$(STATEDIR)/host-dejagnu.prepare:
	@$(call targetinfo, $@)
	@$(call clean, $(HOST_DEJAGNU_DIR)/config.cache)
	cd $(HOST_DEJAGNU_DIR) && \
		$(HOST_DEJAGNU_PATH) $(HOST_DEJAGNU_ENV) \
		./configure $(HOST_DEJAGNU_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

host-dejagnu_compile: $(STATEDIR)/host-dejagnu.compile

$(STATEDIR)/host-dejagnu.compile:
	@$(call targetinfo, $@)
	cd $(HOST_DEJAGNU_DIR) && $(HOST_DEJAGNU_PATH) $(MAKE) $(PARALLELMFLAGS)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

host-dejagnu_install: $(STATEDIR)/host-dejagnu.install

$(STATEDIR)/host-dejagnu.install:
	@$(call targetinfo, $@)
	@$(call install, HOST_DEJAGNU,,h)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

host-dejagnu_clean:
	rm -rf $(STATEDIR)/host-dejagnu.*
	rm -rf $(HOST_DEJAGNU_DIR)

# vim: syntax=make
