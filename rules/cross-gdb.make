# -*-makefile-*-
# $Id$
#
# Copyright (C) 2006, 2007, 2008 by Marc Kleine-Budde <mkl@pengutronix.de>
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
CROSS_PACKAGES-$(PTXCONF_CROSS_GDB) += cross-gdb

#
# Paths and names
#
CROSS_GDB_VERSION	:= $(call remove_quotes,$(PTXCONF_CROSS_GDB_VERSION))
CROSS_GDB_MD5		:= $(call remove_quotes,$(PTXCONF_CROSS_GDB_MD5))
CROSS_GDB		:= gdb-$(CROSS_GDB_VERSION)
CROSS_GDB_SUFFIX	:= tar.bz2
CROSS_GDB_SOURCE	:= $(SRCDIR)/$(CROSS_GDB).$(CROSS_GDB_SUFFIX)
CROSS_GDB_DIR		:= $(CROSS_BUILDDIR)/$(CROSS_GDB)

CROSS_GDB_URL		:= \
	$(PTXCONF_SETUP_GNUMIRROR)/gdb/$(CROSS_GDB).$(CROSS_GDB_SUFFIX) \
	ftp://sourceware.org/pub/gdb/snapshots/current/$(CROSS_GDB).$(CROSS_GDB_SUFFIX)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(CROSS_GDB_SOURCE):
	@$(call targetinfo)
	@$(call get, CROSS_GDB)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-gdb.extract:
	@$(call targetinfo)
	@$(call clean, $(CROSS_GDB_DIR))
	@$(call extract, CROSS_GDB, $(CROSS_BUILDDIR))
	@$(call patchin, CROSS_GDB, $(CROSS_GDB_DIR))
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

CROSS_GDB_PATH	:= PATH=$(CROSS_PATH)
CROSS_GDB_ENV 	:= $(PTX_HOST_ENV)
CROSS_GDB_DEVPKG := NO

#
# autoconf
#
CROSS_GDB_AUTOCONF := \
	$(PTX_HOST_CROSS_AUTOCONF) \
	$(PTXCONF_TOOLCHAIN_CONFIG_SYSROOT) \
	\
	--disable-werror \
	--enable-tui \
	--with-expat

$(STATEDIR)/cross-gdb.prepare:
	@$(call targetinfo)
	@$(call clean, $(CROSS_GDB_DIR)/config.cache)
	cd $(CROSS_GDB_DIR) && \
		$(CROSS_GDB_PATH) $(CROSS_GDB_ENV) \
		./configure $(CROSS_GDB_AUTOCONF)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-gdb.compile:
	@$(call targetinfo)
	cd $(CROSS_GDB_DIR) && $(CROSS_GDB_PATH) $(MAKE) $(PARALLELMFLAGS)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

$(STATEDIR)/cross-gdb.install:
	@$(call targetinfo)
	@$(call install, CROSS_GDB,,h)
	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

cross-gdb_clean:
	rm -rf $(STATEDIR)/cross-gdb.*
	rm -rf $(CROSS_GDB_DIR)

# vim: syntax=make
