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
PACKAGES-$(PTXCONF_AVR8LIB) += avrlib

#
# Paths and names
#
AVR8LIB_VERSION		:= $(call remove_quotes,$(PTXCONF_AVR8LIB_VERSION))
AVR8LIB			:= avr-libc-$(AVR8LIB_VERSION)
AVR8LIB_SUFFIX		:= tar.bz2
AVR8LIB_URL		:= http://download.savannah.gnu.org/releases/avr-libc/$(AVR8LIB).$(AVR8LIB_SUFFIX)
AVR8LIB_SOURCE		:= $(SRCDIR)/$(AVR8LIB).$(AVR8LIB_SUFFIX)
AVR8LIB_DIR		:= $(BUILDDIR)/$(AVR8LIB)
AVR8LIB_BUILDDIR	:= $(BUILDDIR)/$(AVR8LIB)-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(AVR8LIB_SOURCE):
	@$(call targetinfo)
	@$(call get, AVR8LIB)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

$(STATEDIR)/avrlib.extract:
	@$(call targetinfo)
	@$(call clean, $(AVR8LIB_DIR))
	@$(call extract, AVR8LIB)
	@$(call patchin, AVR8LIB)
	mkdir -p $(AVR8LIB_BUILDDIR)
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

AVR8LIB_PATH	:= PATH=$(CROSS_PATH)
AVR8LIB_ENV 	:= \
	$(CROSS_ENV) \
	CC_FOR_BUILD=$(HOSTCC)

#
# autoconf
#
# --targt could only be the string 'avr'
# newer libs (at least 1.4.6) forces --host=avr!
#
AVR8LIB_AUTOCONF := \
	--prefix=$(PTXCONF_SYSROOT_TARGET) \
	--build=$(GNU_BUILD) \
	--target=$(PTXCONF_GNU_TARGET) \
	--host=$(PTXCONF_GNU_TARGET) \
	--enable-multilib

$(STATEDIR)/avrlib.prepare:
	@$(call targetinfo)
	@$(call clean, $(AVR8LIB_BUILDDIR)/config.cache)
	cd $(AVR8LIB_BUILDDIR) && \
		$(AVR8LIB_PATH) $(AVR8LIB_ENV) \
		$(AVR8LIB_DIR)/configure $(AVR8LIB_AUTOCONF)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/avrlib.compile:
	@$(call targetinfo)
	cd $(AVR8LIB_BUILDDIR) && $(AVR8LIB_PATH) $(MAKE) $(PARALLELMFLAGS)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

$(STATEDIR)/avrlib.install:
	@$(call targetinfo)
	cd $(AVR8LIB_BUILDDIR) && \
		$(AVR8LIB_PATH) $(MAKE) install
	@$(call touch)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

$(STATEDIR)/avrlib.targetinstall:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

avrlib_clean:
	rm -rf $(STATEDIR)/avrlib.*
	rm -rf $(IMAGEDIR)/avrlib_*
	rm -rf $(AVR8LIB_DIR)
	rm -rf $(AVR8LIB_BUILDDIR)

# vim: syntax=make

