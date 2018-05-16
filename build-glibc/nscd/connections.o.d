$(common-objpfx)nscd/connections.o: connections.c \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/wordsize-32/symbol-hacks.h ../include/alloca.h \
 ../stdlib/alloca.h ../include/features.h ../include/sys/cdefs.h \
 ../misc/sys/cdefs.h ../sysdeps/wordsize-32/bits/wordsize.h \
 ../include/gnu/stubs.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stddef.h \
 ../ports/sysdeps/arm/stackinfo.h ../nptl/sysdeps/pthread/allocalim.h \
 ../include/limits.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include-fixed/limits.h \
 ../include/bits/posix1_lim.h ../posix/bits/posix1_lim.h \
 ../nptl/sysdeps/unix/sysv/linux/bits/local_lim.h \
 /opt/cross/arm-linux/include/linux/limits.h ../include/bits/posix2_lim.h \
 ../posix/bits/posix2_lim.h ../include/bits/xopen_lim.h \
 $(common-objpfx)bits/stdio_lim.h ../include/assert.h \
 ../assert/assert.h ../include/atomic.h ../include/stdlib.h \
 ../stdlib/stdlib.h ../sysdeps/unix/sysv/linux/bits/waitflags.h \
 ../bits/waitstatus.h ../include/endian.h ../string/endian.h \
 ../ports/sysdeps/arm/bits/endian.h ../include/xlocale.h \
 ../locale/xlocale.h ../include/sys/types.h ../posix/sys/types.h \
 ../bits/types.h ../bits/typesizes.h ../include/time.h ../time/time.h \
 ../include/sys/select.h ../misc/sys/select.h ../bits/select.h \
 ../sysdeps/unix/sysv/linux/bits/sigset.h ../bits/time.h \
 ../sysdeps/unix/sysv/linux/sys/sysmacros.h \
 ../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/pthreadtypes.h \
 ../include/bits/stdlib.h ../stdlib/bits/stdlib.h \
 ../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/atomic.h \
 ../sysdeps/generic/stdint.h ../bits/wchar.h \
 ../ports/sysdeps/unix/sysv/linux/arm/eabi/sysdep.h \
 ../ports/sysdeps/unix/sysv/linux/arm/sysdep.h \
 ../ports/sysdeps/unix/arm/sysdep.h ../sysdeps/unix/sysdep.h \
 ../sysdeps/generic/sysdep.h ../sysdeps/unix/sysv/linux/sys/syscall.h \
 /opt/cross/arm-linux/include/asm/unistd.h ../ports/sysdeps/arm/sysdep.h \
 ../sysdeps/unix/sysv/linux/dl-sysdep.h ../ports/sysdeps/arm/dl-sysdep.h \
 ../sysdeps/generic/dl-sysdep.h ../include/tls.h \
 ../ports/sysdeps/arm/nptl/tls.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stdbool.h \
 ../nptl/descr.h ../include/sched.h ../posix/sched.h \
 ../sysdeps/unix/sysv/linux/bits/sched.h ../include/setjmp.h \
 ../setjmp/setjmp.h ../ports/sysdeps/arm/eabi/bits/setjmp.h \
 ../sysdeps/generic/hp-timing.h ../nptl/sysdeps/pthread/list.h \
 ../ports/sysdeps/unix/sysv/linux/arm/nptl/lowlevellock.h \
 ../sysdeps/unix/sysv/linux/sys/param.h \
 /opt/cross/arm-linux/include/linux/param.h \
 /opt/cross/arm-linux/include/asm/param.h \
 ../ports/sysdeps/unix/sysv/linux/arm/kernel-features.h \
 ../sysdeps/unix/sysv/linux/kernel-features.h \
 ../ports/sysdeps/arm/nptl/pthreaddef.h ../nptl/../nptl_db/thread_db.h \
 ../include/pthread.h ../nptl/sysdeps/pthread/pthread.h \
 ../include/signal.h ../signal/signal.h \
 ../ports/sysdeps/unix/sysv/linux/arm/sys/procfs.h ../include/sys/time.h \
 ../time/sys/time.h ../ports/sysdeps/unix/sysv/linux/arm/sys/user.h \
 ../ports/sysdeps/unix/sysv/linux/arm/eabi/nptl/unwind.h \
 ../include/resolv.h ../resolv/resolv.h ../include/netinet/in.h \
 ../inet/netinet/in.h ../include/sys/socket.h ../socket/sys/socket.h \
 ../include/sys/uio.h ../misc/sys/uio.h \
 ../sysdeps/unix/sysv/linux/bits/uio.h \
 ../sysdeps/unix/sysv/linux/bits/socket.h ../bits/sockaddr.h \
 /opt/cross/arm-linux/include/asm/socket.h \
 /opt/cross/arm-linux/include/asm/sockios.h ../include/bits/socket2.h \
 ../socket/bits/socket2.h ../sysdeps/unix/sysv/linux/bits/in.h \
 ../bits/byteswap.h ../include/error.h ../misc/error.h \
 ../include/bits/error.h ../include/bits/../../misc/bits/error.h \
 ../include/errno.h ../stdlib/errno.h \
 ../sysdeps/unix/sysv/linux/bits/errno.h \
 /opt/cross/arm-linux/include/linux/errno.h \
 /opt/cross/arm-linux/include/asm/errno.h \
 /opt/cross/arm-linux/include/asm-generic/errno.h \
 /opt/cross/arm-linux/include/asm-generic/errno-base.h ../include/fcntl.h \
 ../io/fcntl.h ../ports/sysdeps/unix/sysv/linux/arm/bits/fcntl.h \
 ../include/sys/stat.h ../io/sys/stat.h \
 ../sysdeps/unix/sysv/linux/bits/stat.h ../include/bits/fcntl2.h \
 ../include/bits/../../io/bits/fcntl2.h ../include/grp.h ../grp/grp.h \
 ../include/stdio.h ../libio/stdio.h ../include/libintl.h \
 ../intl/libintl.h ../include/locale.h ../locale/locale.h \
 ../include/bits/locale.h ../locale/bits/locale.h ../include/pwd.h \
 ../pwd/pwd.h ../nss/nss.h ../include/libio.h ../libio/libio.h \
 ../sysdeps/gnu/_G_config.h ../include/wchar.h ../wcsmbs/wchar.h \
 ../include/gconv.h ../iconv/gconv.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stdarg.h \
 ../sysdeps/unix/sysv/linux/bits/sys_errlist.h ../libio/bits/stdio.h \
 ../libio/bits/stdio2.h ../include/arpa/nameser.h \
 ../resolv/arpa/nameser.h ../include/sys/bitypes.h \
 ../resolv/sys/bitypes.h ../include/arpa/nameser_compat.h \
 ../resolv/arpa/nameser_compat.h ../include/string.h ../string/string.h \
 ../ports/sysdeps/arm/bits/string.h ../include/bits/string2.h \
 ../string/bits/string2.h ../include/bits/string3.h \
 ../string/bits/string3.h ../include/unistd.h ../posix/unistd.h \
 ../nptl/sysdeps/unix/sysv/linux/bits/posix_opt.h ../bits/environments.h \
 ../bits/confname.h ../include/getopt.h ../posix/getopt.h \
 ../include/bits/unistd.h ../posix/bits/unistd.h ../include/arpa/inet.h \
 ../inet/arpa/inet.h ../sysdeps/unix/sysv/linux/sys/epoll.h \
 ../include/sys/mman.h ../misc/sys/mman.h \
 ../ports/sysdeps/unix/sysv/linux/arm/bits/mman.h ../include/sys/poll.h \
 ../io/sys/poll.h ../sysdeps/unix/sysv/linux/bits/poll.h \
 ../include/sys/sendfile.h ../io/sys/sendfile.h ../include/sys/un.h \
 ../socket/sys/un.h nscd.h nscd-client.h ../sysdeps/generic/nscd-types.h \
 dbg_log.h selinux.h

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/wordsize-32/symbol-hacks.h:

../include/alloca.h:

../stdlib/alloca.h:

../include/features.h:

../include/sys/cdefs.h:

../misc/sys/cdefs.h:

../sysdeps/wordsize-32/bits/wordsize.h:

../include/gnu/stubs.h:

/opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stddef.h:

../ports/sysdeps/arm/stackinfo.h:

../nptl/sysdeps/pthread/allocalim.h:

../include/limits.h:

/opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include-fixed/limits.h:

../include/bits/posix1_lim.h:

../posix/bits/posix1_lim.h:

../nptl/sysdeps/unix/sysv/linux/bits/local_lim.h:

/opt/cross/arm-linux/include/linux/limits.h:

../include/bits/posix2_lim.h:

../posix/bits/posix2_lim.h:

../include/bits/xopen_lim.h:

$(common-objpfx)bits/stdio_lim.h:

../include/assert.h:

../assert/assert.h:

../include/atomic.h:

../include/stdlib.h:

../stdlib/stdlib.h:

../sysdeps/unix/sysv/linux/bits/waitflags.h:

../bits/waitstatus.h:

../include/endian.h:

../string/endian.h:

../ports/sysdeps/arm/bits/endian.h:

../include/xlocale.h:

../locale/xlocale.h:

../include/sys/types.h:

../posix/sys/types.h:

../bits/types.h:

../bits/typesizes.h:

../include/time.h:

../time/time.h:

../include/sys/select.h:

../misc/sys/select.h:

../bits/select.h:

../sysdeps/unix/sysv/linux/bits/sigset.h:

../bits/time.h:

../sysdeps/unix/sysv/linux/sys/sysmacros.h:

../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/pthreadtypes.h:

../include/bits/stdlib.h:

../stdlib/bits/stdlib.h:

../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/atomic.h:

../sysdeps/generic/stdint.h:

../bits/wchar.h:

../ports/sysdeps/unix/sysv/linux/arm/eabi/sysdep.h:

../ports/sysdeps/unix/sysv/linux/arm/sysdep.h:

../ports/sysdeps/unix/arm/sysdep.h:

../sysdeps/unix/sysdep.h:

../sysdeps/generic/sysdep.h:

../sysdeps/unix/sysv/linux/sys/syscall.h:

/opt/cross/arm-linux/include/asm/unistd.h:

../ports/sysdeps/arm/sysdep.h:

../sysdeps/unix/sysv/linux/dl-sysdep.h:

../ports/sysdeps/arm/dl-sysdep.h:

../sysdeps/generic/dl-sysdep.h:

../include/tls.h:

../ports/sysdeps/arm/nptl/tls.h:

/opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stdbool.h:

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

../sysdeps/unix/sysv/linux/sys/param.h:

/opt/cross/arm-linux/include/linux/param.h:

/opt/cross/arm-linux/include/asm/param.h:

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

../include/resolv.h:

../resolv/resolv.h:

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

../include/bits/socket2.h:

../socket/bits/socket2.h:

../sysdeps/unix/sysv/linux/bits/in.h:

../bits/byteswap.h:

../include/error.h:

../misc/error.h:

../include/bits/error.h:

../include/bits/../../misc/bits/error.h:

../include/errno.h:

../stdlib/errno.h:

../sysdeps/unix/sysv/linux/bits/errno.h:

/opt/cross/arm-linux/include/linux/errno.h:

/opt/cross/arm-linux/include/asm/errno.h:

/opt/cross/arm-linux/include/asm-generic/errno.h:

/opt/cross/arm-linux/include/asm-generic/errno-base.h:

../include/fcntl.h:

../io/fcntl.h:

../ports/sysdeps/unix/sysv/linux/arm/bits/fcntl.h:

../include/sys/stat.h:

../io/sys/stat.h:

../sysdeps/unix/sysv/linux/bits/stat.h:

../include/bits/fcntl2.h:

../include/bits/../../io/bits/fcntl2.h:

../include/grp.h:

../grp/grp.h:

../include/stdio.h:

../libio/stdio.h:

../include/libintl.h:

../intl/libintl.h:

../include/locale.h:

../locale/locale.h:

../include/bits/locale.h:

../locale/bits/locale.h:

../include/pwd.h:

../pwd/pwd.h:

../nss/nss.h:

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

../libio/bits/stdio2.h:

../include/arpa/nameser.h:

../resolv/arpa/nameser.h:

../include/sys/bitypes.h:

../resolv/sys/bitypes.h:

../include/arpa/nameser_compat.h:

../resolv/arpa/nameser_compat.h:

../include/string.h:

../string/string.h:

../ports/sysdeps/arm/bits/string.h:

../include/bits/string2.h:

../string/bits/string2.h:

../include/bits/string3.h:

../string/bits/string3.h:

../include/unistd.h:

../posix/unistd.h:

../nptl/sysdeps/unix/sysv/linux/bits/posix_opt.h:

../bits/environments.h:

../bits/confname.h:

../include/getopt.h:

../posix/getopt.h:

../include/bits/unistd.h:

../posix/bits/unistd.h:

../include/arpa/inet.h:

../inet/arpa/inet.h:

../sysdeps/unix/sysv/linux/sys/epoll.h:

../include/sys/mman.h:

../misc/sys/mman.h:

../ports/sysdeps/unix/sysv/linux/arm/bits/mman.h:

../include/sys/poll.h:

../io/sys/poll.h:

../sysdeps/unix/sysv/linux/bits/poll.h:

../include/sys/sendfile.h:

../io/sys/sendfile.h:

../include/sys/un.h:

../socket/sys/un.h:

nscd.h:

nscd-client.h:

../sysdeps/generic/nscd-types.h:

dbg_log.h:

selinux.h:
