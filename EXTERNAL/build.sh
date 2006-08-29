#!/bin/sh
# http://yann.poupet.free.fr/ep93xx/

TCDIR='ep93xx'
WHEREAMI=`pwd`
TOOLCHAINDIR='/home/yannouch/KURZFMB/ToolChains'
SRCDIR="SOMEWHERE"
GCCVERS='3.4.4'
BINUTILVERS='2.16'
GLIBCVERS='2.3.5'
GLIBCKHVERS='2.3.5'
SRCEXT='tar.bz2'
KERNHEADVERS='2.6.11.7-eb'

unset LD_LIBRARY_PATH
export CPPFLAGS="-D__MAVERICK__"

while [ "x$ANS" == "x" ];
do
	clear
	echo -n "Destination directory ? "
	read ANS
done

if [ -d $ANS ]; then
	while [ "x$DEL" == "x" ];
	do
		clear
		echo Directory $ANS allready exists
		echo -n "Delete it [y/n] ? "
		read DEL
		DEL=`echo $DEL | sed -e 's|[^yYnN]||'`
		if [ "x$DEL" == "xn" -o "x$DEL" == "xN" ]; then
			echo "Okay, abort ..."
			exit 0
		elif [ "x$DEL" == "xy" -o "x$DEL" == "xY" ]; then
			echo "Deleting $ANS ..."
			rm -fr $ANS
			echo "Done"
		else 
			DEL=""
		fi
	done
fi

if [ -e $ANS ]; then
	echo "$ANS is an existing file. Abort."
	exit 0
fi

DESTDIR=$ANS
mkdir -p "$DESTDIR/$TCDIR"
cd "$DESTDIR/$TCDIR"
mkdir arm-linux
mkdir lib
cd arm-linux
ln -s ../lib .

cd $DESTDIR
# BINUTILS
if [ ! -e "$SRCDIR/binutils-$BINUTILVERS.$SRCEXT" ]; then
	echo "ERROR : missing $SRCDIR/binutils-$BINUTILVERS.$SRCEXT file"
	echo Abort.
	exit 0
fi

mkdir "binutils-${BINUTILVERS}.build"
echo "Unpacking $SRCDIR/binutils-$BINUTILVERS.$SRCEXT ..."
tar -jxf "$SRCDIR/binutils-$BINUTILVERS.$SRCEXT"
echo "Done."

if [ -e "$SRCDIR/binutils-$BINUTILVERS.patch" ]; then
	echo "Applying $SRCDIR/binutils-$BINUTILVERS.patch"
	cd "$DESTDIR/binutils-$BINUTILVERS"
	cat "$SRCDIR/binutils-$BINUTILVERS.patch" | patch -p1
	echo "Done."
fi

cd "$DESTDIR/binutils-$BINUTILVERS.build"
$DESTDIR/binutils-$BINUTILVERS/configure --target=arm-linux --build=arm-linux --prefix=$DESTDIR/$TCDIR
make -j4
RETCODE=$?
if [ "x$RETCODE" != "x0" ]; then
	echo "Build binutils-$BINUTILVERS failed"
	exit 1
fi
make install
RETCODE=$?
if [ "x$RETCODE" != "x0" ]; then
	echo "Install binutils-$BINUTILVERS failed"
	exit 1
fi
#KERNEL HEADERS
cd "$DESTDIR/$TCDIR"
if [ ! -e "$SRCDIR/linux-kernel-headers-$KERNHEADVERS.$SRCEXT" ]; then
	echo "ERROR : missing $SRCDIR/linux-kernel-headers-$KERNHEADVERS.$SRCEXT file"
	echo Abort.
	exit 0
fi

echo "Unpacking linux-kernel-headers-$KERNHEADVERS"
tar -jxf "$SRCDIR/linux-kernel-headers-$KERNHEADVERS.$SRCEXT"
echo "Done."

cd arm-linux
ln -s ../include/ .
ln -s ../include/ ./sys-include
cd ../include
ln -s ../include/ include

export PATH=$DESTDIR/$TCDIR/bin:$PATH

cd $DESTDIR
#GCC 1ST PASS
if [ ! -e "$SRCDIR/gcc-$GCCVERS.$SRCEXT" ]; then
	echo "ERROR : missing $SRCDIR/gcc-$GCCVERS.$SRCEXT file"
	echo Abort.
	exit 0
fi

mkdir "gcc-${GCCVERS}.build-1"
echo "Unpacking $SRCDIR/gcc-$GCCVERS.$SRCEXT ..."
tar -jxf "$SRCDIR/gcc-$GCCVERS.$SRCEXT"
echo "Done."

if [ -e "$SRCDIR/gcc-$GCCVERS.patch" ]; then
	echo "Applying $SRCDIR/gcc-$GCCVERS.patch"
	cd "$DESTDIR/gcc-$GCCVERS"
	cat "$SRCDIR/gcc-$GCCVERS.patch" | patch -p1
	echo "Done."
fi

cd "$DESTDIR/gcc-$GCCVERS.build-1"
$DESTDIR/gcc-$GCCVERS/configure --target=arm-linux --prefix=$DESTDIR/$TCDIR --disable-shared --disable-threads --enable-languages=c --disable-multilib

make -j4

RETCODE=$?
if [ "x$RETCODE" != "x0" ]; then
	echo "Build gcc-${GCCVERS} failed"
	exit 1
fi

make install

RETCODE=$?
if [ "x$RETCODE" != "x0" ]; then
	echo "Install gcc-${GCCVERS} failed"
	exit 1
fi

cd $DESTDIR
#GLIBC
if [ ! -e "$SRCDIR/glibc-$GLIBCVERS.$SRCEXT" ]; then
	echo "ERROR : missing $SRCDIR/glibc-$GLIBCVERS.$SRCEXT file"
	echo Abort.
	exit 0
fi

mkdir "glibc-${GLIBCVERS}.build"
echo "Unpacking $SRCDIR/glibc-$GLIBCVERS.$SRCEXT ..."
tar -jxf "$SRCDIR/glibc-$GLIBCVERS.$SRCEXT"
echo "Done."

if [ -e "$SRCDIR/glibc-$GLIBCVERS.patch" ]; then
	echo "Applying $SRCDIR/glibc-$GLIBCVERS.patch"
	cd "$DESTDIR/glibc-$GLIBCVERS"
	cat "$SRCDIR/glibc-$GLIBCVERS.patch" | patch -p1
	echo "Done."
fi
# GLIBC LINUXTHREADS
cd "$DESTDIR/glibc-$GLIBCVERS"
if [ ! -e "$SRCDIR/glibc-linuxthreads-$GLIBCKHVERS.$SRCEXT" ]; then
	echo "ERROR : missing $SRCDIR/glibc-linuxthreads-$GLIBCKHVERS.$SRCEXT file"
	echo Abort.
	exit 0
fi
tar -jxf $SRCDIR/glibc-linuxthreads-$GLIBCKHVERS.$SRCEXT
# BUILD
cd "$DESTDIR/glibc-$GLIBCVERS.build"
$DESTDIR/glibc-$GLIBCVERS/configure --host=arm-linux --prefix=$DESTDIR/$TCDIR --enable-add-ons=linuxthreads --disable-profile --enable-kernel=2.6.0 --without-cvs --with-headers=$DESTDIR/$TCDIR/include --with-__thread
perl -pi -e 's/^CC = .*/CC = arm-linux-gcc -mcpu=ep9312/' config.make
perl -pi -e 's/CFLAGS = -g -O2/CFLAGS = -g -O1 -mfix-crunch-d1/' config.make

make -j4

RETCODE=$?
if [ "x$RETCODE" != "x0" ]; then
	echo "Build glibc-$GLIBCVERS failed"
	exit 1
fi

make install

RETCODE=$?
if [ "x$RETCODE" != "x0" ]; then
	echo "Install glibc-$GLIBCVERS failed"
	exit 1
fi

perl -pi -e 's/.*BUG in libc.*$//' $DESTDIR/$TCDIR/lib/libc.so
perl -pi -e 's/.*BUG in libc.*$//' $DESTDIR/$TCDIR/lib/libpthread.so

# GCC 2ND PASS
cd $DESTDIR
mkdir "gcc-${GCCVERS}.build-2"
cd "gcc-${GCCVERS}.build-2"
$DESTDIR/gcc-$GCCVERS/configure --target=arm-linux --prefix=$DESTDIR/$TCDIR --disable-multilib --disable-nls --enable-languages=c,c++
perl -pi -e 's/CFLAGS_FOR_BUILD =/CFLAGS_FOR_BUILD = -g -O1 /' Makefile
perl -pi -e 's/CFLAGS =/CFLAGS = -g -O1 /' Makefile
perl -pi -e 's/CXXFLAGS = -g -O2/CXXFLAGS = -g -O1/' Makefile
perl -pi -e 's/CFLAGS_FOR_TARGET = -O2/CFLAGS_FOR_TARGET = -O2 -mcpu=ep9312 -mfix-crunch-d1/' Makefile
perl -pi -e "s/CXXFLAGS_FOR_TARGET = \$(CXXFLAGS)/CXXFLAGS_FOR_TARGET = -mcpu=ep9312 -mfix-crunch-d1 \$(CXXFLAGS)/" Makefile

make -j4

RETCODE=$?
if [ "x$RETCODE" != "x0" ]; then
	echo "Build gcc-${GCCVERS} failed"
	exit 1
fi

make install

RETCODE=$?
if [ "x$RETCODE" != "x0" ]; then
	echo "Install gcc-${GCCVERS} failed"
	exit 1
fi

echo "Installation successfully finished."
