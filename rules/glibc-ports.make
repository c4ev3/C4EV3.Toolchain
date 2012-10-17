# -*-makefile-*-
#
# Copyright (C) 2006 by Robert Schwebel
#		2008 by Marc Kleine-Budde <mkl@pengutronix.de>
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
ifneq ($(PTXCONF_GLIBC_VERSION),"")
GLIBC_PORTS_VERSION	:= -$(call remove_quotes,$(PTXCONF_GLIBC_PORTS_VERSION))
GLIBC_PORTS_MD5		:= $(call remove_quotes,$(PTXCONF_GLIBC_PORTS_MD5))
endif

ifneq ($(PTXCONF_GLIBC_TIMESTAMP),"")
GLIBC_PORTS_TIMESTAMP	:= -$(call remove_quotes,$(PTXCONF_GLIBC_PORTS_TIMESTAMP))
GLIBC_PORTS		:= glibc$(GLIBC_PORTS_VERSION)-ports$(GLIBC_PORTS_TIMESTAMP)
else
GLIBC_PORTS		:= glibc-ports$(GLIBC_PORTS_VERSION)
endif

GLIBC_PORTS_SUFFIX	:= tar.bz2
GLIBC_PORTS_SOURCE	:= $(SRCDIR)/$(GLIBC_PORTS).$(GLIBC_PORTS_SUFFIX)
GLIBC_PORTS_DIR		:= $(BUILDDIR)/$(GLIBC_PORTS)

GLIBC_PORTS_URL		:= \
	$(call ptx/mirror, GNU, glibc/$(GLIBC_PORTS).$(GLIBC_PORTS_SUFFIX)) \
	ftp://sources.redhat.com/pub/glibc/snapshots/$(GLIBC_PORTS).$(GLIBC_PORTS_SUFFIX) \
	http://www.pengutronix.de/software/ptxdist/temporary-src/glibc/$(GLIBC_PORTS).$(GLIBC_PORTS_SUFFIX)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(GLIBC_PORTS_SOURCE):
	@$(call targetinfo)
	@$(call get, GLIBC_PORTS)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

ifdef PTXCONF_GLIBC_PORTS
$(STATEDIR)/glibc.extract: $(STATEDIR)/glibc-ports.extract
endif

$(STATEDIR)/glibc-ports.extract:
	@$(call targetinfo)
	@$(call clean, $(GLIBC_PORTS_DIR))
	@$(call extract, GLIBC_PORTS, $(BUILDDIR))
	@$(call patchin, GLIBC_PORTS, $(GLIBC_PORTS_DIR))
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

$(STATEDIR)/glibc-ports.prepare:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/glibc-ports.compile:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

$(STATEDIR)/glibc-ports.install:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

$(STATEDIR)/glibc-ports.targetinstall:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

glibc-ports_clean:
	rm -rf $(STATEDIR)/glibc-ports.*
	rm -rf $(GLIBC_PORTS_DIR)

# vim: syntax=make
