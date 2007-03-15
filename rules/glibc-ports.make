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
PACKAGES-$(PTXCONF_GLIBC_PORTS) += glibc-ports

#
# Paths and names
#
GLIBC_PORTS_VERSION	:= $(call remove_quotes,$(PTXCONF_GLIBC_PORTS_VERSION))
GLIBC_PORTS		:= glibc-ports-$(GLIBC_PORTS_VERSION)
GLIBC_PORTS_SUFFIX	:= tar.bz2
GLIBC_PORTS_URL		:= $(PTXCONF_SETUP_GNUMIRROR)/glibc/$(GLIBC_PORTS).$(GLIBC_PORTS_SUFFIX)
GLIBC_PORTS_SOURCE	:= $(SRCDIR)/$(GLIBC_PORTS).$(GLIBC_PORTS_SUFFIX)
GLIBC_PORTS_DIR		:= $(BUILDDIR)/$(GLIBC_PORTS)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

glibc-ports_get: $(STATEDIR)/glibc-ports.get

$(STATEDIR)/glibc-ports.get:
	@$(call targetinfo, $@)
	@$(call touch, $@)

$(GLIBC_PORTS_SOURCE):
	@$(call targetinfo, $@)
	@$(call get, GLIBC_PORTS)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

ifdef PTXCONF_GLIBC_PORTS
$(STATEDIR)/glibc-first.extract: $(STATEDIR)/glibc-ports.extract
endif

glibc-ports_extract: $(STATEDIR)/glibc-ports.extract

$(STATEDIR)/glibc-ports.extract:
	@$(call targetinfo, $@)
	@$(call clean, $(GLIBC_PORTS_DIR))
	@$(call extract, GLIBC_PORTS, $(BUILDDIR))
	@$(call patchin, GLIBC_PORTS, $(GLIBC_PORTS_DIR))
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

glibc-ports_prepare: $(STATEDIR)/glibc-ports.prepare

$(STATEDIR)/glibc-ports.prepare:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

glibc-ports_compile: $(STATEDIR)/glibc-ports.compile

$(STATEDIR)/glibc-ports.compile:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

glibc-ports_install: $(STATEDIR)/glibc-ports.install

$(STATEDIR)/glibc-ports.install:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

glibc-ports_targetinstall: $(STATEDIR)/glibc-ports.targetinstall

$(STATEDIR)/glibc-ports.targetinstall:
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

glibc-ports_clean:
	rm -rf $(STATEDIR)/glibc-ports.*
	rm -rf $(IMAGEDIR)/glibc_ports_*
	rm -rf $(GLIBC_PORTS_DIR)

# vim: syntax=make
