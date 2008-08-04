# -*-makefile-*-
# $Id: template 6001 2006-08-12 10:15:00Z mkl $
#
# Copyright (C) 2006 by Marc Kleine-Budde <mkl@pengutronix.de>
#          
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_UCLIBC) += uclibc

#
# Paths and names
#
UCLIBC_VERSION	:= $(call remove_quotes,$(PTXCONF_UCLIBC_VERSION))
ifneq ($(PTXCONF_UCLIBC_RELEASE),"")
UCLIBC_VERSION	:= $(UCLIBC_VERSION).$(call remove_quotes,$(PTXCONF_UCLIBC_RELEASE))
endif
UCLIBC		:= uClibc-$(UCLIBC_VERSION)
UCLIBC_SUFFIX	:= tar.bz2
UCLIBC_URL	:= http://www.uclibc.org/downloads/$(UCLIBC).$(UCLIBC_SUFFIX)
UCLIBC_SOURCE	:= $(SRCDIR)/$(UCLIBC).$(UCLIBC_SUFFIX)
UCLIBC_DIR	:= $(BUILDDIR)/$(UCLIBC)

uclibc_fix_config =								\
	echo 'KERNEL_SOURCE="$(SYSROOT)/usr"'           	>> $(1);	\
	echo 'SHARED_LIB_LOADER_PREFIX="/lib"'                  >> $(1);	\
	echo 'RUNTIME_PREFIX="/"'                               >> $(1);	\
	echo 'DEVEL_PREFIX=$(CROSS_LIB_DIR)'                    >> $(1);


# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(UCLIBC_SOURCE):
	@$(call targetinfo)
	@$(call get, UCLIBC)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

$(STATEDIR)/uclibc.extract:
	@$(call targetinfo)
	@$(call clean, $(UCLIBC_DIR))
	@$(call extract, UCLIBC)
	@$(call patchin, UCLIBC)
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

UCLIBC_PATH	:= PATH=$(CROSS_PATH)
UCLIBC_ENV 	:= $(CROSS_ENV)

UCLIBC_MAKEVARS	:= \
		CROSS=$(COMPILER_PREFIX)

$(STATEDIR)/uclibc.prepare:
	@$(call targetinfo)
	grep -e PTXCONF_UC_ $(PTXDIST_WORKSPACE)/ptxconfig | \
		sed -e 's/PTXCONF_UC_//g' > $(UCLIBC_DIR)/.config
	@$(call uclibc_fix_config, $(UCLIBC_DIR)/.config)
	yes "" | $(UCLIBC_PATH) $(MAKE) -C $(UCLIBC_DIR) \
		$(UCLIBC_MAKEVARS) \
		oldconfig
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/uclibc.compile:
	@$(call targetinfo)
	cd $(UCLIBC_DIR) && $(UCLIBC_PATH) $(MAKE) $(UCLIBC_MAKEVARS)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

$(STATEDIR)/uclibc.install:
	@$(call targetinfo)
	cd $(UCLIBC_DIR) && \
		$(UCLIBC_PATH) $(MAKE) $(UCLIBC_MAKEVARS) \
		install DEVEL_PREFIX=/usr/ PREFIX=$(SYSROOT)
	@$(call touch)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

$(STATEDIR)/uclibc.targetinstall:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

uclibc_clean:
	rm -rf $(STATEDIR)/uclibc.*
	rm -rf $(IMAGEDIR)/uclibc_*
	rm -rf $(UCLIBC_DIR)

# vim: syntax=make
