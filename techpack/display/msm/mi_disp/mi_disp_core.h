/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 * Copyright (C) 2020 XiaoMi, Inc.
 */

#ifndef _MI_DISP_CORE_H_
#define _MI_DISP_CORE_H_

#include <linux/device.h>
#include <linux/cdev.h>

#define MI_DISPLAY_CLASS  "mi_display"

struct disp_core {
	struct class *class;
};

int mi_disp_cdev_register(const char *name,
			const struct file_operations *fops, struct cdev **cdevp);
void mi_disp_cdev_unregister(struct cdev *cdev);
int mi_disp_class_device_register(struct device *dev);
void mi_disp_class_device_unregister(struct device *dev);
struct disp_core *mi_get_disp_core(void);

int mi_disp_core_init(void);
void mi_disp_core_deinit(void);

#endif /* _MI_DISP_CORE_H_ */
