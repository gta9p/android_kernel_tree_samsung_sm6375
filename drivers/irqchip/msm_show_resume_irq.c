// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2011, 2014-2016, 2018, 2020, The Linux Foundation. All rights reserved.
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
//+P86801AA1-3866, yexiaojun.wt, modify, 20230519, add kernel debug log
int msm_show_resume_irq_mask = 1;

module_param_named(
	debug_mask, msm_show_resume_irq_mask, int, 0664);
