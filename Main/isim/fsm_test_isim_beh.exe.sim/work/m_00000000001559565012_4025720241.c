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
static const char *ng0 = "//ad/eng/users/c/h/chz/EC311labs/KitchenTimer/fsm_test.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {11, 0};
static unsigned int ng5[] = {5U, 0U};
static int ng6[] = {5, 0};
static int ng7[] = {7, 0};
static unsigned int ng8[] = {40U, 0U};
static int ng9[] = {6, 0};
static int ng10[] = {8, 0};
static int ng11[] = {12, 0};
static int ng12[] = {9, 0};
static int ng13[] = {10, 0};



static void Always_46_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_48_1(char *t0)
{
    char t5[8];
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    int t12;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    int t19;
    char *t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);

LAB4:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB6:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB7;

LAB8:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB9:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB10;

LAB11:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    t10 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t5, t13, t14, ((int*)(t8)), 2, t9, 32, 1, t10, 32, 1);
    t15 = (t5 + 4);
    t11 = *((unsigned int *)t15);
    t12 = (!(t11));
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t12 && t18);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB12:    t24 = *((unsigned int *)t14);
    t25 = (t24 + 0);
    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t13);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t4, t3, t25, *((unsigned int *)t13), t29);
    goto LAB13;

LAB14:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB15:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB16;

LAB17:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    t9 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t5, t13, t14, ((int*)(t7)), 2, t8, 32, 1, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    t15 = (t13 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t19 = (t12 && t18);
    t16 = (t14 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB18:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB19;

LAB20:    t24 = *((unsigned int *)t14);
    t25 = (t24 + 0);
    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t13);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t3, t2, t25, *((unsigned int *)t13), t29);
    goto LAB21;

LAB22:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB23:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB24;

LAB25:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    t10 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t5, t13, t14, ((int*)(t8)), 2, t9, 32, 1, t10, 32, 1);
    t15 = (t5 + 4);
    t11 = *((unsigned int *)t15);
    t12 = (!(t11));
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t12 && t18);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB26:    t24 = *((unsigned int *)t14);
    t25 = (t24 + 0);
    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t13);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t4, t3, t25, *((unsigned int *)t13), t29);
    goto LAB27;

LAB28:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB29;

LAB30:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB31;

LAB32:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB33:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB34;

LAB35:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB36:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB37;

LAB38:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB39:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB40;

LAB41:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB42:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB43;

LAB44:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB45:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB46;

LAB47:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB48:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB49;

LAB50:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 30000LL);
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB51:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB52;

LAB53:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB54:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB55;

LAB56:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 300000LL);
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB57:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB58;

LAB59:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB60:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB61;

LAB62:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB63;

LAB64:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB65:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB66;

LAB67:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    t10 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t5, t13, t14, ((int*)(t8)), 2, t9, 32, 1, t10, 32, 1);
    t15 = (t5 + 4);
    t11 = *((unsigned int *)t15);
    t12 = (!(t11));
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t12 && t18);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB68;

LAB69:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB70;

LAB71:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB68:    t24 = *((unsigned int *)t14);
    t25 = (t24 + 0);
    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t13);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t4, t3, t25, *((unsigned int *)t13), t29);
    goto LAB69;

LAB70:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB71;

LAB72:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB73;

LAB74:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB73:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB74;

LAB75:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    t10 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t5, t13, t14, ((int*)(t8)), 2, t9, 32, 1, t10, 32, 1);
    t15 = (t5 + 4);
    t11 = *((unsigned int *)t15);
    t12 = (!(t11));
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t12 && t18);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB76;

LAB77:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB78;

LAB79:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB76:    t24 = *((unsigned int *)t14);
    t25 = (t24 + 0);
    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t13);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t4, t3, t25, *((unsigned int *)t13), t29);
    goto LAB77;

LAB78:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB79;

LAB80:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB81;

LAB82:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB81:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB82;

LAB83:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    t10 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t5, t13, t14, ((int*)(t8)), 2, t9, 32, 1, t10, 32, 1);
    t15 = (t5 + 4);
    t11 = *((unsigned int *)t15);
    t12 = (!(t11));
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t12 && t18);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB84;

LAB85:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB86;

LAB87:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB88;
    goto LAB1;

LAB84:    t24 = *((unsigned int *)t14);
    t25 = (t24 + 0);
    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t13);
    t28 = (t26 - t27);
    t29 = (t28 + 1);
    xsi_vlogvar_assign_value(t4, t3, t25, *((unsigned int *)t13), t29);
    goto LAB85;

LAB86:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB87;

LAB88:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB89;

LAB90:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB89:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB90;

LAB91:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB92;

LAB93:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB94;
    goto LAB1;

LAB92:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB93;

LAB94:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB95;

LAB96:    goto LAB1;

LAB95:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB96;

}


extern void work_m_00000000001559565012_4025720241_init()
{
	static char *pe[] = {(void *)Always_46_0,(void *)Initial_48_1};
	xsi_register_didat("work_m_00000000001559565012_4025720241", "isim/fsm_test_isim_beh.exe.sim/work/m_00000000001559565012_4025720241.didat");
	xsi_register_executes(pe);
}
