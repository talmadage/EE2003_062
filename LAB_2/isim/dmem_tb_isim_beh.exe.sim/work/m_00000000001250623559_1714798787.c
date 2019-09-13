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

/* This file is designed for use with ISim build 0x12940baa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Students/Downloads/EE17B062/LAB_2/DMEM.v";
static int ng1[] = {0, 0};
static int ng2[] = {4095, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};



static void Initial_11_0(char *t0)
{
    char t5[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;

LAB0:    xsi_set_current_line(11, ng0);

LAB2:    xsi_set_current_line(15, ng0);
    xsi_set_current_line(15, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 12);

LAB3:    t1 = (t0 + 2408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    t6 = (t3 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB4:    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB6;

LAB7:    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:
LAB1:    return;
LAB5:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    xsi_set_current_line(16, ng0);

LAB11:    xsi_set_current_line(17, ng0);
    t15 = ((char*)((ng3)));
    t16 = (t0 + 2088);
    t19 = (t0 + 2088);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2088);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 2408);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 12, 2);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(15, ng0);
    t1 = (t0 + 2408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 12, t4, 32);
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 12);
    goto LAB3;

LAB12:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t18);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t18), t38);
    goto LAB13;

}

static void Always_21_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    int t50;
    char *t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    int t58;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 3896);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2088);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 1208U);
    t32 = *((char **)t29);
    memset(t30, 0, 8);
    t29 = (t30 + 4);
    t33 = (t32 + 4);
    t9 = *((unsigned int *)t32);
    t10 = (t9 >> 2);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t33);
    t12 = (t11 >> 2);
    *((unsigned int *)t29) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 4095U);
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 4095U);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t8, t28, 2, 1, t30, 12, 2);
    t34 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t34, t6, 0, 0, 32, 0LL);
    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(25, ng0);

LAB13:    xsi_set_current_line(26, ng0);
    t28 = (t0 + 1528U);
    t29 = *((char **)t28);
    t28 = (t0 + 2088);
    t32 = (t0 + 2088);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2088);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t39 = (t0 + 1208U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t41 = (t40 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 2);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 2);
    *((unsigned int *)t39) = t45;
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 4095U);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 4095U);
    xsi_vlog_generic_convert_array_indices(t30, t31, t34, t37, 2, 1, t38, 12, 2);
    t48 = (t30 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t31 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    if (t54 == 1)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    t55 = *((unsigned int *)t30);
    t56 = *((unsigned int *)t31);
    t57 = (t55 - t56);
    t58 = (t57 + 1);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, *((unsigned int *)t31), t58, 0LL);
    goto LAB15;

}


extern void work_m_00000000001250623559_1714798787_init()
{
	static char *pe[] = {(void *)Initial_11_0,(void *)Always_21_1};
	xsi_register_didat("work_m_00000000001250623559_1714798787", "isim/dmem_tb_isim_beh.exe.sim/work/m_00000000001250623559_1714798787.didat");
	xsi_register_executes(pe);
}
