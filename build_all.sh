#! /bin/bash
# This is some wrapper to call the makefile fragment, which builds all toolchains
# - might be a good place for common preparations and final postprocessing

# -- Update current SVN workcopy
svn update

# -- Start make, which check dependencies on the ptxconfig files stored in gstate
# -- For each updated ptxconfig the toolchain is recompiled
# -- Finaly a status file suitable for parsing is generated and stored in
# --   gstate/OSELAS-BuildAll-Status.txt
# -- The make process is started with via nice to avoid cpu-load on compile host
nice -n 5 make -f build_all.mk

# -- Dump status file
echo -n "\n\n"
cat gstate/OSELAS-BuildAll-Status.txt

# -- ToDos:

# [ ] Checkout a new working copy of trunk for each chain, and do building in parallel
# [ ] Create a nice HTML output for the status showing the actual status of each chain
# [ ] Add checks to ensure consitency of ptxconfig files and install locations -
#       apply fixup-ptxconfigs.sh?
# [ ] Add code to create all install directory at once - so you have to enter the
#       sudo password only once, when this script started the first time.
# [ ] Remove link to installation directory from cross-toolchain.make?
#       We need some way to determine the installation path from outside ptxdist...

