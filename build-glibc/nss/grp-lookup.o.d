$(common-objpfx)nss/grp-lookup.o: grp-lookup.c \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/wordsize-32/symbol-hacks.h XXX-lookup.c nsswitch.h \
 ../include/arpa/nameser.h ../resolv/arpa/nameser.h \
 ../sysdeps/unix/sysv/linux/sys/param.h ../include/limits.h \
 ../include/features.h ../include/sys/cdefs.h ../misc/sys/cdefs.h \
 ../sysdeps/wordsize-32/bits/wordsize.h ../include/gnu/stubs.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include-fixed/limits.h \
 ../include/bits/posix1_lim.h ../posix/bits/posix1_lim.h \
 ../nptl/sysdeps/unix/sysv/linux/bits/local_lim.h \
 /opt/cross/arm-linux/include/linux/limits.h ../include/bits/posix2_lim.h \
 ../posix/bits/posix2_lim.h ../include/bits/xopen_lim.h \
 $(common-objpfx)bits/stdio_lim.h \
 /opt/cross/arm-linux/include/linux/param.h \
 /opt/cross/arm-linux/include/asm/param.h ../include/sys/types.h \
 ../posix/sys/types.h ../bits/types.h ../bits/typesizes.h \
 ../include/time.h ../time/time.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stddef.h \
 ../include/endian.h ../string/endian.h \
 ../ports/sysdeps/arm/bits/endian.h ../include/sys/select.h \
 ../misc/sys/select.h ../bits/select.h \
 ../sysdeps/unix/sysv/linux/bits/sigset.h ../bits/time.h \
 ../sysdeps/unix/sysv/linux/sys/sysmacros.h \
 ../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/pthreadtypes.h \
 ../include/sys/bitypes.h ../resolv/sys/bitypes.h \
 ../include/arpa/nameser_compat.h ../resolv/arpa/nameser_compat.h \
 ../include/string.h ../string/string.h ../include/xlocale.h \
 ../locale/xlocale.h ../ports/sysdeps/arm/bits/string.h \
 ../include/bits/string2.h ../string/bits/string2.h ../include/stdlib.h \
 ../stdlib/stdlib.h ../sysdeps/generic/stdint.h ../bits/wchar.h \
 ../include/netinet/in.h ../inet/netinet/in.h ../include/sys/socket.h \
 ../socket/sys/socket.h ../include/sys/uio.h ../misc/sys/uio.h \
 ../sysdeps/unix/sysv/linux/bits/uio.h \
 ../sysdeps/unix/sysv/linux/bits/socket.h ../bits/sockaddr.h \
 /opt/cross/arm-linux/include/asm/socket.h \
 /opt/cross/arm-linux/include/asm/sockios.h \
 ../sysdeps/unix/sysv/linux/bits/in.h ../bits/byteswap.h ../include/nss.h \
 ../nss/nss.h ../include/resolv.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stdbool.h \
 ../resolv/resolv.h ../include/stdio.h ../libio/stdio.h \
 ../include/libio.h ../libio/libio.h ../sysdeps/gnu/_G_config.h \
 ../include/wchar.h ../wcsmbs/wchar.h ../include/gconv.h ../iconv/gconv.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stdarg.h \
 ../sysdeps/unix/sysv/linux/bits/sys_errlist.h ../libio/bits/stdio.h \
 ../include/tls.h ../ports/sysdeps/arm/nptl/tls.h \
 ../sysdeps/unix/sysv/linux/dl-sysdep.h ../ports/sysdeps/arm/dl-sysdep.h \
 ../sysdeps/generic/dl-sysdep.h \
 ../ports/sysdeps/unix/sysv/linux/arm/eabi/sysdep.h \
 ../ports/sysdeps/unix/sysv/linux/arm/sysdep.h \
 ../ports/sysdeps/unix/arm/sysdep.h ../sysdeps/unix/sysdep.h \
 ../sysdeps/generic/sysdep.h ../sysdeps/unix/sysv/linux/sys/syscall.h \
 /opt/cross/arm-linux/include/asm/unistd.h ../ports/sysdeps/arm/sysdep.h \
 ../nptl/descr.h ../include/sched.h ../posix/sched.h \
 ../sysdeps/unix/sysv/linux/bits/sched.h ../include/setjmp.h \
 ../setjmp/setjmp.h ../ports/sysdeps/arm/eabi/bits/setjmp.h \
 ../sysdeps/generic/hp-timing.h ../nptl/sysdeps/pthread/list.h \
 ../ports/sysdeps/unix/sysv/linux/arm/nptl/lowlevellock.h \
 ../include/atomic.h ../sysdeps/unix/sysv/linux/bits/waitflags.h \
 ../bits/waitstatus.h ../include/alloca.h ../stdlib/alloca.h \
 ../ports/sysdeps/arm/stackinfo.h ../nptl/sysdeps/pthread/allocalim.h \
 ../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/atomic.h \
 ../ports/sysdeps/unix/sysv/linux/arm/kernel-features.h \
 ../sysdeps/unix/sysv/linux/kernel-features.h \
 ../ports/sysdeps/arm/nptl/pthreaddef.h ../nptl/../nptl_db/thread_db.h \
 ../include/pthread.h ../nptl/sysdeps/pthread/pthread.h \
 ../include/signal.h ../signal/signal.h \
 ../ports/sysdeps/unix/sysv/linux/arm/sys/procfs.h ../include/sys/time.h \
 ../time/sys/time.h ../ports/sysdeps/unix/sysv/linux/arm/sys/user.h \
 ../ports/sysdeps/unix/sysv/linux/arm/eabi/nptl/unwind.h \
 ../include/search.h ../misc/search.h ../include/dlfcn.h ../dlfcn/dlfcn.h \
 ../include/bits/dlfcn.h ../bits/dlfcn.h ../include/link.h ../elf/link.h \
 ../include/elf.h ../elf/elf.h ../sysdeps/generic/dl-dtprocnum.h \
 ../bits/elfclass.h ../ports/sysdeps/arm/bits/link.h \
 ../ports/sysdeps/arm/bits/linkmap.h ../sysdeps/generic/dl-lookupcfg.h \
 ../nptl/sysdeps/pthread/bits/libc-lock.h \
 ../nptl/sysdeps/pthread/pthread-functions.h \
 ../nptl/sysdeps/unix/sysv/linux/internaltypes.h \
 ../sysdeps/generic/bp-sym.h

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/wordsize-32/symbol-hacks.h:

XXX-lookup.c:

nsswitch.h:

../include/arpa/nameser.h:

../resolv/arpa/nameser.h:

../sysdeps/unix/sysv/linux/sys/param.h:

../include/limits.h:

../include/features.h:

../include/sys/cdefs.h:

../misc/sys/cdefs.h:

../sysdeps/wordsize-32/bits/wordsize.h:

../include/gnu/stubs.h:

/opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include-fixed/limits.h:

../include/bits/posix1_lim.h:

../posix/bits/posix1_lim.h:

../nptl/sysdeps/unix/sysv/linux/bits/local_lim.h:

/opt/cross/arm-linux/include/linux/limits.h:

../include/bits/posix2_lim.h:

../posix/bits/posix2_lim.h:

../include/bits/xopen_lim.h:

$(common-objpfx)bits/stdio_lim.h:

/opt/cross/arm-linux/include/linux/param.h:

/opt/cross/arm-linux/include/asm/param.h:

../include/sys/types.h:

../posix/sys/types.h:

../bits/types.h:

../bits/typesizes.h:

../include/time.h:

../time/time.h:

/opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stddef.h:

../include/endian.h:

../string/endian.h:

../ports/sysdeps/arm/bits/endian.h:

../include/sys/select.h:

../misc/sys/select.h:

../bits/select.h:

../sysdeps/unix/sysv/linux/bits/sigset.h:

../bits/time.h:

../sysdeps/unix/sysv/linux/sys/sysmacros.h:

../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/pthreadtypes.h:

../include/sys/bitypes.h:

../resolv/sys/bitypes.h:

../include/arpa/nameser_compat.h:

../resolv/arpa/nameser_compat.h:

../include/string.h:

../string/string.h:

../include/xlocale.h:

../locale/xlocale.h:

../ports/sysdeps/arm/bits/string.h:

../include/bits/string2.h:

../string/bits/string2.h:

../include/stdlib.h:

../stdlib/stdlib.h:

../sysdeps/generic/stdint.h:

../bits/wchar.h:

../include/netinet/in.h:

../inet/netinet/in.h:

../include/sys/socket.h:

../socket/sys/socket.h:

../include/sys/uio.h:

../misc/sys/uio.h:

../sysdeps/unix/sysv/linux/bits/uio.h:

../sysdeps/unix/sysv/linux/bits/socket.h:

../bits/sockaddr.h:

/opt/cross/arm-linux/include/asm/socket.h:

/opt/cross/arm-linux/include/asm/sockios.h:

../sysdeps/unix/sysv/linux/bits/in.h:

../bits/byteswap.h:

../include/nss.h:

../nss/nss.h:

../include/resolv.h:

/opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stdbool.h:

../resolv/resolv.h:

../include/stdio.h:

../libio/stdio.h:

../include/libio.h:

../libio/libio.h:

../sysdeps/gnu/_G_config.h:

../include/wchar.h:

../wcsmbs/wchar.h:

../include/gconv.h:

../iconv/gconv.h:

/opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stdarg.h:

../sysdeps/unix/sysv/linux/bits/sys_errlist.h:

../libio/bits/stdio.h:

../include/tls.h:

../ports/sysdeps/arm/nptl/tls.h:

../sysdeps/unix/sysv/linux/dl-sysdep.h:

../ports/sysdeps/arm/dl-sysdep.h:

../sysdeps/generic/dl-sysdep.h:

../ports/sysdeps/unix/sysv/linux/arm/eabi/sysdep.h:

../ports/sysdeps/unix/sysv/linux/arm/sysdep.h:

../ports/sysdeps/unix/arm/sysdep.h:

../sysdeps/unix/sysdep.h:

../sysdeps/generic/sysdep.h:

../sysdeps/unix/sysv/linux/sys/syscall.h:

/opt/cross/arm-linux/include/asm/unistd.h:

../ports/sysdeps/arm/sysdep.h:

../nptl/descr.h:

../include/sched.h:

../posix/sched.h:

../sysdeps/unix/sysv/linux/bits/sched.h:

../include/setjmp.h:

../setjmp/setjmp.h:

../ports/sysdeps/arm/eabi/bits/setjmp.h:

../sysdeps/generic/hp-timing.h:

../nptl/sysdeps/pthread/list.h:

../ports/sysdeps/unix/sysv/linux/arm/nptl/lowlevellock.h:

../include/atomic.h:

../sysdeps/unix/sysv/linux/bits/waitflags.h:

../bits/waitstatus.h:

../include/alloca.h:

../stdlib/alloca.h:

../ports/sysdeps/arm/stackinfo.h:

../nptl/sysdeps/pthread/allocalim.h:

../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/atomic.h:

../ports/sysdeps/unix/sysv/linux/arm/kernel-features.h:

../sysdeps/unix/sysv/linux/kernel-features.h:

../ports/sysdeps/arm/nptl/pthreaddef.h:

../nptl/../nptl_db/thread_db.h:

../include/pthread.h:

../nptl/sysdeps/pthread/pthread.h:

../include/signal.h:

../signal/signal.h:

../ports/sysdeps/unix/sysv/linux/arm/sys/procfs.h:

../include/sys/time.h:

../time/sys/time.h:

../ports/sysdeps/unix/sysv/linux/arm/sys/user.h:

../ports/sysdeps/unix/sysv/linux/arm/eabi/nptl/unwind.h:

../include/search.h:

../misc/search.h:

../include/dlfcn.h:

../dlfcn/dlfcn.h:

../include/bits/dlfcn.h:

../bits/dlfcn.h:

../include/link.h:

../elf/link.h:

../include/elf.h:

../elf/elf.h:

../sysdeps/generic/dl-dtprocnum.h:

../bits/elfclass.h:

../ports/sysdeps/arm/bits/link.h:

../ports/sysdeps/arm/bits/linkmap.h:

../sysdeps/generic/dl-lookupcfg.h:

../nptl/sysdeps/pthread/bits/libc-lock.h:

../nptl/sysdeps/pthread/pthread-functions.h:

../nptl/sysdeps/unix/sysv/linux/internaltypes.h:

../sysdeps/generic/bp-sym.h:
