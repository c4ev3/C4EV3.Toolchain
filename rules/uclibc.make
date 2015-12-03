# -*-makefile-*-
#
# Copyright (C) 2006, 2008 by Marc Kleine-Budde <mkl@pengutronix.de>
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
UCLIBC_MD5	:= $(call remove_quotes,$(PTXCONF_UCLIBC_MD5))
UCLIBC		:= uClibc-$(UCLIBC_VERSION)
UCLIBC_SUFFIX	:= tar.bz2
UCLIBC_URL	:= \
	http://www.uclibc.org/downloads/$(UCLIBC).$(UCLIBC_SUFFIX) \
	http://www.uclibc.org/downloads/snapshots/$(UCLIBC).$(UCLIBC_SUFFIX)
UCLIBC_SOURCE	:= $(SRCDIR)/$(UCLIBC).$(UCLIBC_SUFFIX)
UCLIBC_DIR	:= $(BUILDDIR)/$(UCLIBC)
UCLIBC_CONFIG	:= $(call remove_quotes, $(PTXDIST_PLATFORMCONFIGDIR)/config/$(PTXCONF_UCLIBC_CONFIG))
UCLIBC_LICENSE	:= $(call remove_quotes,$(PTXCONF_UCLIBC_LICENSE))
UCLIBC_LICENSE_FILES := $(call remove_quotes,$(PTXCONF_UCLIBC_LICENSE_FILES))

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

UCLIBC_ENV	:= \
	$(HOST_ENV_CC) \
	KCONFIG_NOTIMESTAMP=1 \
	$(if $(filter 0,$(PTXDIST_VERBOSE)),V=)

$(UCLIBC_CONFIG):
	@echo
	@echo "**************************************************************************"
	@echo "**** Please generate a uclibc config with 'ptxdist menuconfig uclibc' ****"
	@echo "**************************************************************************"
	@echo
	@echo
	@exit 1

$(STATEDIR)/uclibc.prepare: $(UCLIBC_CONFIG)
	@$(call targetinfo)
	@$(call world/kconfig, UCLIBC, oldconfig)
	@$(call touch)

UCLIBC_MAKE_OPT		:= \
	CROSS=$(COMPILER_PREFIX) \
	HOSTCC="$(HOSTCC)" \
	DEVEL_PREFIX=/usr/ \
	PREFIX=$(SYSROOT) \
	KERNEL_HEADERS=$(SYSROOT)/usr/include \
	RUNTIME_PREFIX=/ \
	SHARED_LIB_LOADER_PREFIX=/lib

UCLIBC_INSTALL_OPT	:= \
	$(UCLIBC_MAKE_OPT) \
	install

$(STATEDIR)/uclibc.install: $(STATEDIR)/uclibc.report
	@$(call targetinfo)
	@$(call world/install, UCLIBC)
	@$(call world/env, UCLIBC) ptxd_make_world_copy_license
	@$(call touch)

# ----------------------------------------------------------------------------
# oldconfig / menuconfig
# ----------------------------------------------------------------------------

uclibc_oldconfig uclibc_menuconfig: $(STATEDIR)/uclibc.extract
	@$(call world/kconfig, UCLIBC, $(subst uclibc_,,$@))
	@$(call finish)

# vim: syntax=make
