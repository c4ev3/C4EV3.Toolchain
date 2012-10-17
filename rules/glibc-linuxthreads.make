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
PACKAGES-$(PTXCONF_GLIBC_LINUXTHREADS) += glibc-linuxthreads

#
# Paths and names
#
GLIBC_LINUXTHREADS_VERSION	:= $(call remove_quotes,$(PTXCONF_GLIBC_LINUXTHREADS_VERSION))
GLIBC_LINUXTHREADS_MD5		:= $(call remove_quotes,$(PTXCONF_GLIBC_LINUXTHREADS_MD5))
GLIBC_LINUXTHREADS		:= glibc-linuxthreads-$(GLIBC_LINUXTHREADS_VERSION)
GLIBC_LINUXTHREADS_SUFFIX	:= tar.bz2
GLIBC_LINUXTHREADS_URL		:= $(call ptx/mirror, GNU, glibc/$(GLIBC_LINUXTHREADS).$(GLIBC_LINUXTHREADS_SUFFIX))
GLIBC_LINUXTHREADS_SOURCE	:= $(SRCDIR)/$(GLIBC_LINUXTHREADS).$(GLIBC_LINUXTHREADS_SUFFIX)
GLIBC_LINUXTHREADS_DIR		:= $(BUILDDIR)/$(GLIBC_LINUXTHREADS)
GLIBC_LINUXTHREADS_STRIP_LEVEL	:= 0

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

$(GLIBC_LINUXTHREADS_SOURCE):
	@$(call targetinfo)
	@$(call get, GLIBC_LINUXTHREADS)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

ifdef PTXCONF_GLIBC_LINUXTHREADS
$(STATEDIR)/glibc.extract: $(STATEDIR)/glibc-linuxthreads.extract
endif

$(STATEDIR)/glibc-linuxthreads.extract:
	@$(call targetinfo)
	@$(call clean, $(GLIBC_LINUXTHREADS_DIR))
	@$(call extract, GLIBC_LINUXTHREADS, $(GLIBC_LINUXTHREADS_DIR))
	@$(call patchin, GLIBC_LINUXTHREADS, $(GLIBC_LINUXTHREADS_DIR))
	@$(call touch)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

$(STATEDIR)/glibc-linuxthreads.prepare:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

$(STATEDIR)/glibc-linuxthreads.compile:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

$(STATEDIR)/glibc-linuxthreads.install:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

$(STATEDIR)/glibc-linuxthreads.targetinstall:
	@$(call targetinfo)
	@$(call touch)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

glibc-linuxthreads_clean:
	rm -rf $(STATEDIR)/glibc-linuxthreads.*
	rm -rf $(GLIBC_LINUXTHREADS_DIR)

# vim: syntax=make
