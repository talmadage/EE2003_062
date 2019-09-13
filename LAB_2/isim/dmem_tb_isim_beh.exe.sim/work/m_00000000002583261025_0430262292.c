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
static const char *ng0 = "C:/Users/Students/Downloads/EE17B062/LAB_2/DMEM_tb.v";
static int ng1[] = {4, 0};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static const char *ng4 = "";
static const char *ng5 = " Pass outdata=%08x expected data=%08x iter=%d";
static const char *ng6 = " Fail outdata=%08x expected data=%08x iter=%d";
static const char *ng7 = "yet_to_add.txt";
static int ng8[] = {1024, 0};
static const char *ng9 = "Failed %d out of %d test cases";
static const char *ng10 = "Passed all %d test cases";



static int sp_check_write(char *t1, char *t2)
{
    char t9[8];
    char t35[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 3320);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_multiply(t9, 32, t5, 32, t8, 32);
    t10 = (t1 + 1880);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 32, 0LL);
    xsi_set_current_line(30, ng0);
    t4 = (t1 + 2520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2520);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = (t1 + 2520);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 3320);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t9, 32, t6, t10, t13, 2, 1, t16, 32, 1);
    t17 = (t1 + 2040);
    xsi_vlogvar_wait_assign_value(t17, t9, 0, 0, 32, 0LL);
    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2200);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t4 = (t1 + 2520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2520);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = (t1 + 2520);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 3320);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t9, 32, t6, t10, t13, 2, 1, t16, 32, 1);
    t17 = (t1 + 2360);
    xsi_vlogvar_wait_assign_value(t17, t9, 0, 0, 32, 0LL);
    xsi_set_current_line(33, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(36, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(37, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 2200);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(41, ng0);
    t7 = (t2 + 88U);
    t8 = *((char **)t7);
    t10 = (t8 + 48U);
    xsi_wp_set_status(t10, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(43, ng0);
    t4 = (t1 + 1480U);
    t5 = *((char **)t4);
    t4 = (t1 + 2360);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t10);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t8);
    t26 = *((unsigned int *)t10);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB13;

LAB10:    if (t27 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t9) = 1;

LAB13:    t12 = (t9 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t9);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(48, ng0);

LAB18:    xsi_set_current_line(49, ng0);
    t4 = xsi_vlog_time(t35, 1000.0000000000000, 1.0000000000000000);
    t5 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 0, ng4, 2, t5, (char)118, t35, 64);
    t6 = (t1 + 1480U);
    t7 = *((char **)t6);
    t6 = (t1 + 2360);
    t8 = (t6 + 56U);
    t10 = *((char **)t8);
    t11 = (t1 + 3320);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng6, 4, t14, (char)118, t7, 32, (char)118, t10, 32, (char)119, t13, 32);
    xsi_set_current_line(50, ng0);
    t4 = (t1 + 3160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 3160);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB16:    xsi_set_current_line(52, ng0);
    t4 = (t1 + 3000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 3000);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB4;

LAB12:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(44, ng0);

LAB17:    xsi_set_current_line(45, ng0);
    t13 = xsi_vlog_time(t35, 1000.0000000000000, 1.0000000000000000);
    t14 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 0, ng4, 2, t14, (char)118, t35, 64);
    t15 = (t1 + 1480U);
    t16 = *((char **)t15);
    t15 = (t1 + 2360);
    t17 = (t15 + 56U);
    t36 = *((char **)t17);
    t37 = (t1 + 3320);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t40, (char)118, t16, 32, (char)118, t36, 32, (char)119, t39, 32);
    goto LAB16;

}

static void Always_24_0(char *t0)
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

LAB0:    t1 = (t0 + 4240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 2680);
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

LAB8:    t14 = (t0 + 2680);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void Initial_56_1(char *t0)
{
    char t6[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 4488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);

LAB4:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2520);
    xsi_vlogfile_readmemh(ng7, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(66, ng0);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(72, ng0);

LAB19:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng10, 2, t0, (char)119, t4, 32);

LAB17:
LAB1:    return;
LAB6:    xsi_set_current_line(66, ng0);

LAB8:    xsi_set_current_line(67, ng0);
    t13 = (t0 + 2840);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 4296);
    t17 = (t0 + 848);
    t18 = xsi_create_subprogram_invocation(t16, 0, t0, t17, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t0 + 3320);
    xsi_vlogvar_assign_value(t19, t15, 0, 0, 32);

LAB11:    t20 = (t0 + 4392);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t23 = *((char **)t22);
    t24 = (t23 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t28 = ((int  (*)(char *, char *))t27)(t0, t21);

LAB13:    if (t28 != 0)
        goto LAB14;

LAB9:    t21 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t21);

LAB10:    t29 = (t0 + 4392);
    t30 = *((char **)t29);
    t29 = (t0 + 848);
    t31 = (t0 + 4296);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2840);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB12:;
LAB14:    t20 = (t0 + 4488U);
    *((char **)t20) = &&LAB11;
    goto LAB1;

LAB15:    xsi_set_current_line(70, ng0);

LAB18:    xsi_set_current_line(71, ng0);
    t13 = (t0 + 3160);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 3000);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlogfile_write(1, 0, 0, ng9, 3, t0, (char)119, t15, 32, (char)119, t18, 32);
    goto LAB17;

}


extern void work_m_00000000002583261025_0430262292_init()
{
	static char *pe[] = {(void *)Always_24_0,(void *)Initial_56_1};
	static char *se[] = {(void *)sp_check_write};
	xsi_register_didat("work_m_00000000002583261025_0430262292", "isim/dmem_tb_isim_beh.exe.sim/work/m_00000000002583261025_0430262292.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
