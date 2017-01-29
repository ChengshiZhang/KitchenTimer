/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//ad/eng/users/c/h/chz/EC311labs/KitchenTimer/clock_divider.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {1000, 0};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static int ng5[] = {10000000, 0};



static void Always_28_0(char *t0)
{
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(40, ng0);

LAB19:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 24, t4, 24, t5, 24);
    t11 = (t0 + 1928);
    xsi_vlogvar_assign_value(t11, t15, 0, 0, 24);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB21;

LAB20:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB23;

LAB22:    *((unsigned int *)t15) = 1;

LAB23:    t14 = (t15 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB27:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);

LAB9:    xsi_set_current_line(32, ng0);
    t11 = (t0 + 1768);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 16, t13, 16, t14, 16);
    t16 = (t0 + 1768);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 16);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB10:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB13;

LAB12:    *((unsigned int *)t15) = 1;

LAB13:    t14 = (t15 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB17:    goto LAB8;

LAB11:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(33, ng0);

LAB18:    xsi_set_current_line(34, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 1608);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    goto LAB17;

LAB21:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(42, ng0);

LAB28:    xsi_set_current_line(43, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 1608);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 24);
    goto LAB27;

}


extern void work_m_00000000001898304582_4217414517_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000001898304582_4217414517", "isim/fsm_test_isim_beh.exe.sim/work/m_00000000001898304582_4217414517.didat");
	xsi_register_executes(pe);
}
