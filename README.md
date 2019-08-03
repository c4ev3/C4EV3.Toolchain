# C4EV3.Toolchain (Work-in-progress)

This `arm-c4ev3-linux-uclibceabi` Toolchain consists of:

* **cross-compiler:** {gcc,g++}-8.2.1 (`--with-cpu=arm926ej-s --`)
* **libc**: uclibc-ng-1.0.31 (statically linked by default)
* **assembler/linker**: binutils-2.31.1
* **kernel headers**: kernel-2.6.33-rc4-sanitized

It's meant for use when a recent C/C++ Toolchain is needed for the EV3,
while still running on stock firmware.

### How to build

C4EV3-Toolchain is a configuration of [OSELAS.Toolchain].
To build an [OSELAS.Toolchain], you will first need to install [PTXdist] `v2019.07.0`.

Afterwards, this project can be built via:

```
ptxdist select ptxconfigs/arm-c4ev3-linux-uclibceabi_gcc-8.2.1_uclibc-ng-1.0.31_binutils-2.31.1_kernel-2.6.33-rc4-sanitized.ptxconfig
ptxdist go -j -q
```

This will proceed to download all needed packages, build them and installs them into `/opt`.
If you want to install elsewhere or change other configuration, you may do so via running `ptxdist menuconfig`.


### How to use

Just invoke the `arm-c4ev3-linux-uclibceabi-gcc` or `arm-c4ev3-linux-uclibceabi-g++` to compile your sources.
You can use [ev3duder] to upload the resulting ELF binary to the EV3. It should work out of the box as resulting
binaries are statically linked and need no supporting software on the EV3 except for the kernel.


### FAQ

- *What operating systems are supported?* So far this has only been tested on Linux. It should work on BSD as well. macOS is problematic because of outdated GNU bash.

- *Why no glibc?* Building outdated low level libraries with modern tools is a hassle. Most C4EV3 programs are quite limited in what they use from the stock glibc, so dropping it in favor of a statically linked uClibc isn't a big loss.

- *How to reduce binary size?* Try compiling with `-fdata-sections -ffunction-sections`

[OSELAS.Toolchain]: https://www.pengutronix.de/en/software/toolchain.html
[PTXdist]: https://ptxdist.org
[ev3duder]: https://github.com/c4ev3/ev3duder
