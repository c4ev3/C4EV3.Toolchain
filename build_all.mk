#!/usr/bin/make
# -- Makefile to build all ptxconfigs
# -- Carsten Schlote <c.schlote@konzeptpark.de>

# -- start this fragment with 'make -f build_all.mk' or the supplied wrapper script!

# -- Defines and Lists --------------------------------------------------------
BLDDATE = $(shell date)
SVNREV := ($(strip $(shell svnversion)))

PTXCONFIGS_DIR = ptxconfigs
PTXCONFIGS = $(basename $(notdir $(wildcard $(PTXCONFIGS_DIR)/*.ptxconfig)))

GSTATE_DIR = gstate
BLDTAG = .buildtag
STATTAG = .status
REVTAG = .svnrev
GSTATE_TAGS := $(addprefix $(GSTATE_DIR)/,$(addsuffix $(BLDTAG),$(PTXCONFIGS)))

DIST_DIR = dists
DISTTAG = .tar.bz2
DISTS := $(addprefix $(DIST_DIR)/,$(addsuffix $(DISTTAG),$(PTXCONFIGS)))

STATUSPAGE = $(GSTATE_DIR)/OSELAS-BuildAll-Status.txt

# -- Macros -------------------------------------------------------------------

define ShowHeader
	@echo -en "\n\n---------------------------------------------------------------------\n"
	@echo -en "-- $(1)"
	@echo -en "\n---------------------------------------------------------------------\n\n"
endef

define CompileChain

$(GSTATE_DIR)/$(1)$(BLDTAG) : $(PTXCONFIGS_DIR)/$(1).ptxconfig | mkgstatedir mkdistdir
	$(call ShowHeader, Rebuild toolchain $(1))
	ptxdist distclean
	ptxdist select $$<
	@echo "ptxdist go" ; \
	if ptxdist go; then \
	  echo -n "$(SVNREV)" > $(GSTATE_DIR)/$(1)$(REVTAG); \
	  echo -n "Build successful." > $(GSTATE_DIR)/$(1)$(STATTAG); \
	  echo -n "$(BLDDATE)" > $$@; \
	else \
	  echo -n "Build failed" > $(GSTATE_DIR)/$(1)$(STATTAG); \
	  touch $$@; \
	  echo -e "\n!!! BUILD FAILED !!!\n\n"; \
	fi

	$(call ShowHeader, Saving logs for toolchain $(1))
	@if test -e logfile; then cp -v logfile $(DIST_DIR)/$(1)-logfile; else echo "No logfile?";  fi
	@if test -e deptree.ps; then cp -v deptree.ps $(DIST_DIR)/$(1)-depends.ps; else echo "No deptree.ps?";  fi

	$(call ShowHeader, Create archive for toolchain $(1))
	@if test -L state/toolchain-install-dir; then \
	  echo tar cjf $(DIST_DIR)/$(1).tar.bz2 -C `readlink state/toolchain-install-dir`; \
	else \
	  echo "No symbolic link to install dir found - no archive created."; \
	fi

$(DIST_DIR)/$(1)$(DISTTAG) : $(GSTATE_DIR)/$(1)$(BLDTAG)
	@echo "BROKEN - needs some way to derive install location from ptxconfig"

build_$(1) : $(GSTATE_DIR)/$(1)$(BLDTAG)
	$(call UpdateStatusPage)

endef

define UpdateStatusPage
	@echo -e "# OSELAS Toolchain Build All Status" > $(STATUSPAGE)
	@echo -e "# $(BLDDATE) / $(SVNREV)" >> $(STATUSPAGE)
	@echo -e "# <toolchain>:<last build date>:<svn revision>:<build status>" >> $(STATUSPAGE)
	@for i in $(PTXCONFIGS); do \
	   echo -n "$$i:"; \
	   if test -e $(GSTATE_DIR)/$$i$(BLDTAG); then cat $(GSTATE_DIR)/$$i$(BLDTAG); else echo -n "Unknown"; fi; \
	   echo -n ":"; \
	   if test -e $(GSTATE_DIR)/$$i$(REVTAG); then cat $(GSTATE_DIR)/$$i$(REVTAG); else echo -n "Unknown"; fi; \
	   echo -n ":"; \
	   if test -e $(GSTATE_DIR)/$$i$(STATTAG); then cat $(GSTATE_DIR)/$$i$(STATTAG); else echo -n "Unknown"; fi; \
	   echo ":"; \
	done >> $(STATUSPAGE)
	@echo -e "# \$$Id\$$" >> $(STATUSPAGE)
endef

# -- Targets ------------------------------------------------------------------

.PHONY : all mkgstatedir mkdistdir updatestatpage clean distclean

all : $(GSTATE_TAGS)
	$(call UpdateStatusPage)

dist :  $(DISTS)
	$(call UpdateStatusPage)

mkgstatedir :
	@mkdir -p $(GSTATE_DIR)

mkdistdir :
	@mkdir -p $(DIST_DIR)

updatestatpage:
	$(call UpdateStatusPage)

clean :
	-rm -rf $(GSTATE_DIR)

distclean : clean
	-rm -rf $(DIST_DIR)

# -- Rules --------------------------------------------------------------------

$(foreach CFG,$(PTXCONFIGS),$(eval $(call CompileChain,$(CFG))))

