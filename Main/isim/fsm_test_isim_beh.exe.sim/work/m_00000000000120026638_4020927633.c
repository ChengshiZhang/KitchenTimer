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
static const char *ng0 = "//ad/eng/users/c/h/chz/EC311labs/KitchenTimer/FSM.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {5, 0};
static int ng5[] = {59, 0};
static int ng6[] = {1, 0};
static const char *ng7 = "Error in case statement.";



static void Always_91_0(char *t0)
{
    char t6[8];
    char t23[8];
    char t34[8];
    char t58[8];
    char t77[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    int t22;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4944);
    *((int *)t2) = 1;
    t3 = (t0 + 4408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 1616U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(103, ng0);

LAB10:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = (t0 + 472);
    t7 = *((char **)t5);
    t22 = xsi_vlog_unsigned_case_compare(t4, 2, t7, 32);
    if (t22 == 1)
        goto LAB12;

LAB13:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t22 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t22 == 1)
        goto LAB14;

LAB15:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t22 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t22 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(205, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);

LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(94, ng0);

LAB9:    xsi_set_current_line(95, ng0);
    t20 = (t0 + 472);
    t21 = *((char **)t20);
    t20 = (t0 + 3296);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 2);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3456);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB12:    xsi_set_current_line(107, ng0);

LAB21:    xsi_set_current_line(108, ng0);
    t5 = (t0 + 1936U);
    t14 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t20 = (t14 + 4);
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t20);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    t21 = (t6 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t7 = (t6 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t7 = (t6 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB20;

LAB14:    xsi_set_current_line(116, ng0);

LAB31:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1936U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 9);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 9);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t7 = (t6 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    memset(t23, 0, 8);
    t2 = (t23 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 9);
    t10 = (t9 & 1);
    *((unsigned int *)t23) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 9);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t6, 0, 8);
    t7 = (t23 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t23);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB81;

LAB79:    if (*((unsigned int *)t7) == 0)
        goto LAB78;

LAB80:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;

LAB81:    t20 = (t6 + 4);
    t21 = (t23 + 4);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    *((unsigned int *)t6) = t28;
    *((unsigned int *)t20) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB83;

LAB82:    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & 1U);
    t36 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t36 & 1U);
    t24 = (t6 + 4);
    t37 = *((unsigned int *)t24);
    t38 = (~(t37));
    t39 = *((unsigned int *)t6);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB84;

LAB85:
LAB86:    goto LAB20;

LAB16:    xsi_set_current_line(195, ng0);

LAB143:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 1936U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB144;

LAB145:
LAB146:    goto LAB20;

LAB22:    xsi_set_current_line(109, ng0);
    t24 = (t0 + 1616U);
    t25 = *((char **)t24);
    memset(t23, 0, 8);
    t24 = (t23 + 4);
    t26 = (t25 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (t27 >> 0);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t26);
    t30 = (t29 >> 0);
    *((unsigned int *)t24) = t30;
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 63U);
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 & 63U);
    t33 = (t0 + 2816);
    xsi_vlogvar_assign_value(t33, t23, 0, 0, 6);
    goto LAB24;

LAB25:    xsi_set_current_line(111, ng0);
    t14 = (t0 + 1616U);
    t20 = *((char **)t14);
    memset(t23, 0, 8);
    t14 = (t23 + 4);
    t21 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    t28 = (t27 >> 0);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t21);
    t30 = (t29 >> 0);
    *((unsigned int *)t14) = t30;
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 63U);
    t32 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t32 & 63U);
    t24 = (t0 + 2976);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 6);
    goto LAB27;

LAB28:    xsi_set_current_line(113, ng0);
    t14 = (t0 + 608);
    t20 = *((char **)t14);
    t14 = (t0 + 3296);
    xsi_vlogvar_assign_value(t14, t20, 0, 0, 2);
    goto LAB30;

LAB32:    xsi_set_current_line(118, ng0);
    t20 = (t0 + 744);
    t21 = *((char **)t20);
    t20 = (t0 + 3296);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 2);
    goto LAB34;

LAB35:    xsi_set_current_line(121, ng0);

LAB38:    xsi_set_current_line(124, ng0);
    t14 = (t0 + 1616U);
    t20 = *((char **)t14);
    memset(t34, 0, 8);
    t14 = (t34 + 4);
    t21 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    t28 = (t27 >> 8);
    t29 = (t28 & 1);
    *((unsigned int *)t34) = t29;
    t30 = *((unsigned int *)t21);
    t31 = (t30 >> 8);
    t32 = (t31 & 1);
    *((unsigned int *)t14) = t32;
    memset(t23, 0, 8);
    t24 = (t34 + 4);
    t35 = *((unsigned int *)t24);
    t36 = (~(t35));
    t37 = *((unsigned int *)t34);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB42;

LAB40:    if (*((unsigned int *)t24) == 0)
        goto LAB39;

LAB41:    t25 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t25) = 1;

LAB42:    t26 = (t23 + 4);
    t33 = (t34 + 4);
    t40 = *((unsigned int *)t34);
    t41 = (~(t40));
    *((unsigned int *)t23) = t41;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t33) != 0)
        goto LAB44;

LAB43:    t46 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t46 & 1U);
    t47 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t47 & 1U);
    t48 = (t23 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t23);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 8);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t7 = (t6 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB66;

LAB67:
LAB68:    goto LAB37;

LAB39:    *((unsigned int *)t23) = 1;
    goto LAB42;

LAB44:    t42 = *((unsigned int *)t23);
    t43 = *((unsigned int *)t33);
    *((unsigned int *)t23) = (t42 | t43);
    t44 = *((unsigned int *)t26);
    t45 = *((unsigned int *)t33);
    *((unsigned int *)t26) = (t44 | t45);
    goto LAB43;

LAB45:    xsi_set_current_line(124, ng0);

LAB48:    xsi_set_current_line(125, ng0);
    t54 = (t0 + 3456);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng3)));
    memset(t58, 0, 8);
    xsi_vlog_unsigned_add(t58, 3, t56, 3, t57, 3);
    t59 = (t0 + 3456);
    xsi_vlogvar_assign_value(t59, t58, 0, 0, 3);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t14 = (t5 + 4);
    t20 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t7);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t14);
    t12 = *((unsigned int *)t20);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t27 = (t15 & t19);
    if (t27 != 0)
        goto LAB52;

LAB49:    if (t18 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t6) = 1;

LAB52:    t24 = (t6 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB53;

LAB54:
LAB55:    goto LAB47;

LAB51:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(126, ng0);

LAB56:    xsi_set_current_line(127, ng0);
    t25 = (t0 + 2976);
    t26 = (t25 + 56U);
    t33 = *((char **)t26);
    t48 = ((char*)((ng5)));
    memset(t23, 0, 8);
    t54 = (t33 + 4);
    t55 = (t48 + 4);
    t35 = *((unsigned int *)t33);
    t36 = *((unsigned int *)t48);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t54);
    t39 = *((unsigned int *)t55);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t54);
    t43 = *((unsigned int *)t55);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB60;

LAB57:    if (t44 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t23) = 1;

LAB60:    t57 = (t23 + 4);
    t47 = *((unsigned int *)t57);
    t49 = (~(t47));
    t50 = *((unsigned int *)t23);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(131, ng0);

LAB65:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 6, t5, 6, t7, 6);
    t14 = (t0 + 2976);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 6);

LAB63:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3456);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB55;

LAB59:    t56 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(127, ng0);

LAB64:    xsi_set_current_line(128, ng0);
    t59 = (t0 + 2816);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 6, t61, 6, t62, 6);
    t63 = (t0 + 2816);
    xsi_vlogvar_assign_value(t63, t34, 0, 0, 6);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    goto LAB63;

LAB66:    xsi_set_current_line(139, ng0);

LAB69:    xsi_set_current_line(140, ng0);
    t14 = (t0 + 2976);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    t24 = ((char*)((ng5)));
    memset(t23, 0, 8);
    t25 = (t21 + 4);
    t26 = (t24 + 4);
    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t24);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t35 = (t29 | t32);
    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t26);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB73;

LAB70:    if (t38 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t23) = 1;

LAB73:    t48 = (t23 + 4);
    t41 = *((unsigned int *)t48);
    t42 = (~(t41));
    t43 = *((unsigned int *)t23);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 6, t5, 6, t7, 6);
    t14 = (t0 + 2976);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 6);

LAB76:    goto LAB68;

LAB72:    t33 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(140, ng0);

LAB77:    xsi_set_current_line(141, ng0);
    t54 = (t0 + 2816);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 6, t56, 6, t57, 6);
    t59 = (t0 + 2816);
    xsi_vlogvar_assign_value(t59, t34, 0, 0, 6);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    goto LAB76;

LAB78:    *((unsigned int *)t6) = 1;
    goto LAB81;

LAB83:    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t29 | t30);
    t31 = *((unsigned int *)t20);
    t32 = *((unsigned int *)t21);
    *((unsigned int *)t20) = (t31 | t32);
    goto LAB82;

LAB84:    xsi_set_current_line(150, ng0);

LAB87:    xsi_set_current_line(153, ng0);
    t25 = (t0 + 1616U);
    t26 = *((char **)t25);
    memset(t58, 0, 8);
    t25 = (t58 + 4);
    t33 = (t26 + 4);
    t42 = *((unsigned int *)t26);
    t43 = (t42 >> 8);
    t44 = (t43 & 1);
    *((unsigned int *)t58) = t44;
    t45 = *((unsigned int *)t33);
    t46 = (t45 >> 8);
    t47 = (t46 & 1);
    *((unsigned int *)t25) = t47;
    memset(t34, 0, 8);
    t48 = (t58 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t58);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB91;

LAB89:    if (*((unsigned int *)t48) == 0)
        goto LAB88;

LAB90:    t54 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t54) = 1;

LAB91:    t55 = (t34 + 4);
    t56 = (t58 + 4);
    t64 = *((unsigned int *)t58);
    t65 = (~(t64));
    *((unsigned int *)t34) = t65;
    *((unsigned int *)t55) = 0;
    if (*((unsigned int *)t56) != 0)
        goto LAB93;

LAB92:    t70 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t70 & 1U);
    t71 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t71 & 1U);
    t57 = (t34 + 4);
    t72 = *((unsigned int *)t57);
    t73 = (~(t72));
    t74 = *((unsigned int *)t34);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB94;

LAB95:
LAB96:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 8);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t7 = (t6 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB123;

LAB124:
LAB125:    goto LAB86;

LAB88:    *((unsigned int *)t34) = 1;
    goto LAB91;

LAB93:    t66 = *((unsigned int *)t34);
    t67 = *((unsigned int *)t56);
    *((unsigned int *)t34) = (t66 | t67);
    t68 = *((unsigned int *)t55);
    t69 = *((unsigned int *)t56);
    *((unsigned int *)t55) = (t68 | t69);
    goto LAB92;

LAB94:    xsi_set_current_line(153, ng0);

LAB97:    xsi_set_current_line(154, ng0);
    t59 = (t0 + 3456);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng3)));
    memset(t77, 0, 8);
    xsi_vlog_unsigned_add(t77, 3, t61, 3, t62, 3);
    t63 = (t0 + 3456);
    xsi_vlogvar_assign_value(t63, t77, 0, 0, 3);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t14 = (t5 + 4);
    t20 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t7);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t14);
    t12 = *((unsigned int *)t20);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t27 = (t15 & t19);
    if (t27 != 0)
        goto LAB101;

LAB98:    if (t18 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t6) = 1;

LAB101:    t24 = (t6 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB102;

LAB103:
LAB104:    goto LAB96;

LAB100:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB101;

LAB102:    xsi_set_current_line(155, ng0);

LAB105:    xsi_set_current_line(156, ng0);
    t25 = (t0 + 2976);
    t26 = (t25 + 56U);
    t33 = *((char **)t26);
    t48 = ((char*)((ng1)));
    memset(t23, 0, 8);
    t54 = (t33 + 4);
    t55 = (t48 + 4);
    t35 = *((unsigned int *)t33);
    t36 = *((unsigned int *)t48);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t54);
    t39 = *((unsigned int *)t55);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t54);
    t43 = *((unsigned int *)t55);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB109;

LAB106:    if (t44 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t23) = 1;

LAB109:    t57 = (t23 + 4);
    t47 = *((unsigned int *)t57);
    t49 = (~(t47));
    t50 = *((unsigned int *)t23);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(164, ng0);

LAB122:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 6, t5, 6, t7, 6);
    t14 = (t0 + 2976);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 6);

LAB112:    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3456);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB104;

LAB108:    t56 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB109;

LAB110:    xsi_set_current_line(156, ng0);

LAB113:    xsi_set_current_line(157, ng0);
    t59 = (t0 + 2816);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t63 = (t61 + 4);
    t78 = (t62 + 4);
    t53 = *((unsigned int *)t61);
    t64 = *((unsigned int *)t62);
    t65 = (t53 ^ t64);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t78);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t63);
    t71 = *((unsigned int *)t78);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB117;

LAB114:    if (t72 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t34) = 1;

LAB117:    t80 = (t34 + 4);
    t75 = *((unsigned int *)t80);
    t76 = (~(t75));
    t81 = *((unsigned int *)t34);
    t82 = (t81 & t76);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB118;

LAB119:    xsi_set_current_line(159, ng0);

LAB121:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 2816);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 6, t5, 6, t7, 6);
    t14 = (t0 + 2816);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 6);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB120:    goto LAB112;

LAB116:    t79 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB117;

LAB118:    xsi_set_current_line(158, ng0);
    t84 = ((char*)((ng6)));
    t85 = (t0 + 3136);
    xsi_vlogvar_assign_value(t85, t84, 0, 0, 1);
    goto LAB120;

LAB123:    xsi_set_current_line(172, ng0);

LAB126:    xsi_set_current_line(173, ng0);
    t14 = (t0 + 2976);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    t24 = ((char*)((ng1)));
    memset(t23, 0, 8);
    t25 = (t21 + 4);
    t26 = (t24 + 4);
    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t24);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t35 = (t29 | t32);
    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t26);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB130;

LAB127:    if (t38 != 0)
        goto LAB129;

LAB128:    *((unsigned int *)t23) = 1;

LAB130:    t48 = (t23 + 4);
    t41 = *((unsigned int *)t48);
    t42 = (~(t41));
    t43 = *((unsigned int *)t23);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB131;

LAB132:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 6, t5, 6, t7, 6);
    t14 = (t0 + 2976);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 6);

LAB133:    goto LAB125;

LAB129:    t33 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB130;

LAB131:    xsi_set_current_line(173, ng0);

LAB134:    xsi_set_current_line(174, ng0);
    t54 = (t0 + 2816);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t59 = (t56 + 4);
    t60 = (t57 + 4);
    t46 = *((unsigned int *)t56);
    t47 = *((unsigned int *)t57);
    t49 = (t46 ^ t47);
    t50 = *((unsigned int *)t59);
    t51 = *((unsigned int *)t60);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t64 = *((unsigned int *)t59);
    t65 = *((unsigned int *)t60);
    t66 = (t64 | t65);
    t67 = (~(t66));
    t68 = (t53 & t67);
    if (t68 != 0)
        goto LAB138;

LAB135:    if (t66 != 0)
        goto LAB137;

LAB136:    *((unsigned int *)t34) = 1;

LAB138:    t62 = (t34 + 4);
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t71 = *((unsigned int *)t34);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB139;

LAB140:    xsi_set_current_line(176, ng0);

LAB142:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 2816);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 6, t5, 6, t7, 6);
    t14 = (t0 + 2816);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 6);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB141:    goto LAB133;

LAB137:    t61 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB138;

LAB139:    xsi_set_current_line(175, ng0);
    t63 = ((char*)((ng6)));
    t78 = (t0 + 3136);
    xsi_vlogvar_assign_value(t78, t63, 0, 0, 1);
    goto LAB141;

LAB144:    xsi_set_current_line(197, ng0);
    t20 = (t0 + 608);
    t21 = *((char **)t20);
    t20 = (t0 + 3296);
    xsi_vlogvar_assign_value(t20, t21, 0, 0, 2);
    goto LAB146;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 5024);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000000120026638_4020927633_init()
{
	static char *pe[] = {(void *)Always_91_0,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000120026638_4020927633", "isim/fsm_test_isim_beh.exe.sim/work/m_00000000000120026638_4020927633.didat");
	xsi_register_executes(pe);
}
