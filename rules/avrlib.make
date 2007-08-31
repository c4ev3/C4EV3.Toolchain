# -*-makefile-*-
# $Id: template 6655 2007-01-02 12:55:21Z rsc $
#
# Copyright (C) 2007 by Juergen Beisert
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_AVRLIB) += avrlib

#
# Paths and names
#
AVRLIB_VERSION	:= $(call remove_quotes,$(PTXCONF_AVRLIB_VERSION))
AVRLIB		:= avr-libc-$(AVRLIB_VERSION)
AVRLIB_SUFFIX	:= tar.bz2
AVRLIB_URL	:= http://download.savannah.gnu.org/releases/avr-libc/$(AVRLIB).$(AVRLIB_SUFFIX)
AVRLIB_SOURCE	:= $(SRCDIR)/$(AVRLIB).$(AVRLIB_SUFFIX)
AVRLIB_DIR	:= $(BUILDDIR)/$(AVRLIB)
AVRLIB_BUILDDIR	:= $(BUILDDIR)/$(AVRLIB)-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

avrlib_get: $(STATEDIR)/avrlib.get

$(STATEDIR)/avrlib.get: $(avrlib_get_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

$(AVRLIB_SOURCE):
	@$(call targetinfo, $@)
	@$(call get, AVRLIB)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

avrlib_extract: $(STATEDIR)/avrlib.extract

$(STATEDIR)/avrlib.extract: $(avrlib_extract_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(AVRLIB_DIR))
	@$(call extract, AVRLIB)
	@$(call patchin, AVRLIB)
	mkdir -p $(AVRLIB_BUILDDIR)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

avrlib_prepare: $(STATEDIR)/avrlib.prepare

AVRLIB_PATH	:= PATH=$(CROSS_PATH)
AVRLIB_ENV 	:= \
	$(CROSS_ENV) \
	CC_FOR_BUILD=$(HOSTCC)

#
# autoconf
#
# --targt could only be the string 'avr'
# newer libs (at least 1.4.6) forces --host=avr!
#
AVRLIB_AUTOCONF := \
	$(CROSS_AUTOCONF_USR) \
	--enable-multilib

$(STATEDIR)/avrlib.prepare: $(avrlib_prepare_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(AVRLIB_BUILDDIR)/config.cache)
	cd $(AVRLIB_BUILDDIR) && \
		$(AVRLIB_PATH) $(AVRLIB_ENV) \
		$(AVRLIB_DIR)/configure $(AVRLIB_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

avrlib_compile: $(STATEDIR)/avrlib.compile

$(STATEDIR)/avrlib.compile: $(avrlib_compile_deps_default)
	@$(call targetinfo, $@)
	cd $(AVRLIB_BUILDDIR) && $(AVRLIB_PATH) $(MAKE) $(PARALLELMFLAGS)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

avrlib_install: $(STATEDIR)/avrlib.install

$(STATEDIR)/avrlib.install: $(avrlib_install_deps_default)
	@$(call targetinfo, $@)
	cd $(AVRLIB_BUILDDIR) && \
		$(AVRLIB_PATH) $(MAKE) install DESTDIR=$(SYSROOT)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

avrlib_targetinstall: $(STATEDIR)/avrlib.targetinstall

$(STATEDIR)/avrlib.targetinstall: $(avrlib_targetinstall_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

avrlib_clean:
	rm -rf $(STATEDIR)/avrlib.*
	rm -rf $(IMAGEDIR)/avrlib_*
	rm -rf $(AVRLIB_DIR)
	rm -rf $(AVRLIB_BUILDDIR)

# vim: syntax=make

