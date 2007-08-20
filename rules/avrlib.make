# -*-makefile-*-
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
PACKAGES-$(PTXCONF_AVR8LIB) += avr8lib

#
# Paths and names
#
AVRLIB_VERSION	:= $(call remove_quotes,$(PTXCONF_AVR8LIB_VERSION))
AVRLIB		:= avr-libc-$(AVRLIB_VERSION)
AVRLIB_SUFFIX	:= tar.bz2
AVRLIB_URL	:= http://download.savannah.gnu.org/releases/avr-libc/$(AVRLIB).$(AVRLIB_SUFFIX)
AVRLIB_SOURCE	:= $(SRCDIR)/$(AVRLIB).$(AVRLIB_SUFFIX)
AVRLIB_DIR	:= $(BUILDDIR_DEBUG)/$(AVRLIB)
AVRLIB_BUILDDIR	:= $(BUILDDIR)/$(AVRLIB)-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

avr8lib_get: $(STATEDIR)/avr8lib.get

$(STATEDIR)/avr8lib.get: $(avr8lib_get_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

$(AVRLIB_SOURCE):
	@$(call targetinfo, $@)
	@$(call get, AVRLIB)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

avr8lib_extract: $(STATEDIR)/avr8lib.extract

$(STATEDIR)/avr8lib.extract: $(avr8lib_extract_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(AVRLIB_DIR))
	@$(call clean, $(AVRLIB_BUILDDIR))
	@$(call extract, AVRLIB, $(BUILDDIR_DEBUG))
	@$(call patchin, AVRLIB, $(AVRLIB_DIR))
	mkdir -p $(AVRLIB_BUILDDIR)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

avr8lib_prepare: $(STATEDIR)/avr8lib.prepare

AVRLIB_PATH := PATH=$(CROSS_PATH)
AVRLIB_ENV := CC_FOR_BUILD=$(HOSTCC)

#
# autoconf
# --targt could only be the string 'avr'
# newer libs (at least 1.4.6) forces --host=avr!
#
AVRLIB_AUTOCONF := \
	--prefix=$(PTXCONF_PREFIX) \
	--build=$(GNU_BUILD) \
	--target=$(PTXCONF_GNU_TARGET) \
	--host=$(PTXCONF_GNU_TARGET) \
	--enable-multilib

$(STATEDIR)/avr8lib.prepare: $(avr8lib_prepare_deps_default)
	@$(call targetinfo, $@)
	cd $(AVRLIB_BUILDDIR) && eval \
		$(AVRLIB_ENV) $(AVRLIB_PATH) \
		$(AVRLIB_DIR)/configure $(AVRLIB_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

avr8lib_compile: $(STATEDIR)/avr8lib.compile

$(STATEDIR)/avr8lib.compile: $(avr8lib_compile_deps_default)
	@$(call targetinfo, $@)
	cd $(AVRLIB_BUILDDIR) && eval $(AVRLIB_PATH) && \
		$(MAKE) $(PARALLELMFLAGS)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

avr8lib_install: $(STATEDIR)/avr8lib.install

$(STATEDIR)/avr8lib.install: $(avr8lib_install_deps_default)
	@$(call targetinfo, $@)
	cd $(AVRLIB_BUILDDIR) && \
		$(AVRLIB_PATH) $(MAKE) install
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

avr8lib_targetinstall: $(STATEDIR)/avr8lib.targetinstall

$(STATEDIR)/avr8lib.targetinstall: $(avr8lib_targetinstall_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

avr8lib_clean:
	rm -rf $(STATEDIR)/avr8lib.*
	rm -rf $(AVRLIB_DIR)

# vim: syntax=make
