#include <linux/kernel.h>

/*
 * This file contains weak stub implementations for symbols that are
 * referenced by other drivers but are not being built, likely due to
 * missing Kconfig options. This allows the kernel to link successfully.
 */

// Stubs for drivers/power/supply/charger-manager.c
struct sgm4154x_charger_info;
struct sgm41512_charger_info;

struct sgm4154x_charger_info *pinfo;
struct sgm41512_charger_info *sgm41512_info;

int sgm4154x_enable_shipmode(struct sgm4154x_charger_info *info, bool en)
{
	return 0;
}

int sgm4154x_set_prechrg_curr(struct sgm4154x_charger_info *info, int pre_current)
{
	return 0;
}

int sgm41512_set_prechrg_curr(struct sgm41512_charger_info *info, int pre_current)
{
	return 0;
}

int sgm4154x_get_main_charger_current(void)
{
	return 0;
}

int sgm41512_get_second_charger_current(void)
{
	return 0;
}


// Stubs for drivers/gpu/drm/sprd/sprd_panel.c
void set_lcm_bias_voltage_parameter(int v, int i) {}
void fts_tp_reset_pin(int level) {}
void set_lcm_bias_voltage_for_sprd(void) {}

// Stubs for drivers/usb/musb/musb_sprd.c
void sc27xx_force_dpdm(bool on) {}
