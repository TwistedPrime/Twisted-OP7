/*
 * Altivec XOR operations
 *
 * Copyright 2017 IBM Corp.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#include <linux/preempt.h>
#include <linux/export.h>
#include <linux/sched.h>
#include <asm/switch_to.h>
#include "xor_vmx.h"

void xor_altivec_2(unsigned long bytes, unsigned long * __restrict p1,
		   const unsigned long * __restrict p2)
{
	preempt_disable();
	enable_kernel_altivec();
	__xor_altivec_2(bytes, p1, p2);
	disable_kernel_altivec();
	preempt_enable();
}
EXPORT_SYMBOL(xor_altivec_2);

void xor_altivec_3(unsigned long bytes, unsigned long * __restrict p1,
		   const unsigned long * __restrict p2,
		   const unsigned long * __restrict p3)
{
	preempt_disable();
	enable_kernel_altivec();
	__xor_altivec_3(bytes, p1, p2, p3);
	disable_kernel_altivec();
	preempt_enable();
}
EXPORT_SYMBOL(xor_altivec_3);

void xor_altivec_4(unsigned long bytes, unsigned long * __restrict p1,
		   const unsigned long * __restrict p2,
		   const unsigned long * __restrict p3,
		   const unsigned long * __restrict p4)
{
	preempt_disable();
	enable_kernel_altivec();
	__xor_altivec_4(bytes, p1, p2, p3, p4);
	disable_kernel_altivec();
	preempt_enable();
}
EXPORT_SYMBOL(xor_altivec_4);

void xor_altivec_5(unsigned long bytes, unsigned long * __restrict p1,
		   const unsigned long * __restrict p2,
		   const unsigned long * __restrict p3,
		   const unsigned long * __restrict p4,
		   const unsigned long * __restrict p5)
{
	preempt_disable();
	enable_kernel_altivec();
	__xor_altivec_5(bytes, p1, p2, p3, p4, p5);
	disable_kernel_altivec();
	preempt_enable();
}
EXPORT_SYMBOL(xor_altivec_5);
