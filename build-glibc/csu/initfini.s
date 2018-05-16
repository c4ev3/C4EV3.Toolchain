	.cpu arm10tdmi
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 2
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"initfini.c"
	.text
	.syntax divided
	
#include "defs.h"
	
/*@HEADER_ENDS*/
	
/*@TESTS_BEGIN*/
	.arm
	.syntax unified
	.align	2
	.global	dummy
	.arch armv5t
	.syntax unified
	.arm
	.fpu softvfp
	.type	dummy, %function
dummy:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	cmp	r0, #0
	bxeq	lr
	bx	r0	@ indirect register sibling call
	.syntax divided
	
/*@TESTS_END*/
	
/*@_init_PROLOG_BEGINS*/
	.arm
	.syntax unified
	.align	2
	.syntax unified
	.arm
	.fpu softvfp
	.type	call_gmon_start, %function
call_gmon_start:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L6
	ldr	r2, .L6+4
.LPIC0:
	add	r3, pc, r3
	ldr	r3, [r3, r2]
	cmp	r3, #0
	bxeq	lr
	b	__gmon_start__(PLT)
.L7:
	.align	2
.L6:
	.word	_GLOBAL_OFFSET_TABLE_-(.LPIC0+8)
	.word	__gmon_start__(GOT)
	.syntax divided
	.section .init
	.arm
	.syntax unified
	.section	.init,"ax",%progbits
	.align	2
	.global	_init
	.syntax unified
	.arm
	.fpu softvfp
	.type	_init, %function
_init:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	bl	call_gmon_start(PLT)
	.syntax divided
@ 96 "../sysdeps/generic/initfini.c" 1
	ALIGN
@ 0 "" 2
@ 97 "../sysdeps/generic/initfini.c" 1
	END_INIT
@ 0 "" 2
@ 99 "../sysdeps/generic/initfini.c" 1
	
/*@_init_PROLOG_ENDS*/
@ 0 "" 2
@ 100 "../sysdeps/generic/initfini.c" 1
	
/*@_init_EPILOG_BEGINS*/
@ 0 "" 2
@ 101 "../sysdeps/generic/initfini.c" 1
	.section .init
@ 0 "" 2
	.arm
	.syntax unified
	pop	{r4, pc}
	.syntax divided
	END_INIT
	
/*@_init_EPILOG_ENDS*/
	
/*@_fini_PROLOG_BEGINS*/
	.section .fini
	.arm
	.syntax unified
	.section	.fini,"ax",%progbits
	.align	2
	.global	_fini
	.syntax unified
	.arm
	.fpu softvfp
	.type	_fini, %function
_fini:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	.syntax divided
@ 116 "../sysdeps/generic/initfini.c" 1
	ALIGN
@ 0 "" 2
@ 117 "../sysdeps/generic/initfini.c" 1
	END_FINI
@ 0 "" 2
@ 118 "../sysdeps/generic/initfini.c" 1
	
/*@_fini_PROLOG_ENDS*/
@ 0 "" 2
	.arm
	.syntax unified
	bl	i_am_not_a_leaf(PLT)
	.syntax divided
@ 129 "../sysdeps/generic/initfini.c" 1
	
/*@_fini_EPILOG_BEGINS*/
@ 0 "" 2
@ 130 "../sysdeps/generic/initfini.c" 1
	.section .fini
@ 0 "" 2
	.arm
	.syntax unified
	pop	{r4, pc}
	.syntax divided
	END_FINI
	
/*@_fini_EPILOG_ENDS*/
	
/*@TRAILER_BEGINS*/
	.weak	__gmon_start__
	.ident	"GCC: (GCC for c4ev3 2018-05-15) 8.1.0"
	.section	.note.GNU-stack,"",%progbits
