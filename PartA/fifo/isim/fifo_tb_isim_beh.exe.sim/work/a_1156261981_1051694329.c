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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Xilinx/42254/fifo/fifo.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1156261981_1051694329_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    int t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;

LAB0:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2276);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(24, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t5 = t1;
    t6 = (t0 + 4136);
    memcpy(t5, t6, 8U);
    t5 = (t5 + 8U);
    t8 = (t0 + 4144);
    memcpy(t5, t8, 8U);
    t5 = (t5 + 8U);
    t10 = (t0 + 4152);
    memcpy(t5, t10, 8U);
    t5 = (t5 + 8U);
    t12 = (t0 + 4160);
    memcpy(t5, t12, 8U);
    t14 = (t0 + 2320);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 32U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 4168);
    t5 = (t0 + 2356);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 2428);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 2464);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 2500);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 868U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t19 = (t4 == (unsigned char)3);
    if (t19 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB19;

LAB21:    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t21 = *((int *)t2);
    t3 = (t21 == 3);
    if (t3 != 0)
        goto LAB22;

LAB23:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 1328U);
    t5 = *((char **)t1);
    t21 = *((int *)t5);
    t25 = (t21 - 0);
    t26 = (t25 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t21);
    t27 = (8U * t26);
    t28 = (0 + t27);
    t1 = (t2 + t28);
    t6 = (t0 + 2356);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t21 = *((int *)t2);
    t25 = (t21 + 1);
    t1 = (t0 + 2464);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = t25;
    xsi_driver_first_trans_fast(t1);

LAB20:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1420U);
    t6 = *((char **)t2);
    t21 = *((int *)t6);
    t22 = (t21 > 3);
    if (t22 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1144U);
    t7 = *((char **)t2);
    t23 = *((unsigned char *)t7);
    t24 = (t23 == (unsigned char)3);
    t20 = t24;

LAB15:    if (t20 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 1420U);
    t5 = *((char **)t1);
    t21 = *((int *)t5);
    t25 = (t21 - 0);
    t26 = (t25 * 1);
    t27 = (8U * t26);
    t28 = (0U + t27);
    t1 = (t0 + 2320);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_delta(t1, t28, 8U, 0LL);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t21 = *((int *)t2);
    t25 = (t21 + 1);
    t1 = (t0 + 2500);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = t25;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2392);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t21 = *((int *)t2);
    t3 = (t21 >= 3);
    if (t3 != 0)
        goto LAB16;

LAB18:
LAB17:
LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2428);
    t8 = (t2 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB11;

LAB13:    t20 = (unsigned char)1;
    goto LAB15;

LAB16:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2428);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2392);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB20;

LAB22:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1236U);
    t5 = *((char **)t1);
    t1 = (t0 + 1328U);
    t6 = *((char **)t1);
    t25 = *((int *)t6);
    t29 = (t25 - 0);
    t26 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t25);
    t27 = (8U * t26);
    t28 = (0 + t27);
    t1 = (t5 + t28);
    t7 = (t0 + 2356);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB20;

}


extern void work_a_1156261981_1051694329_init()
{
	static char *pe[] = {(void *)work_a_1156261981_1051694329_p_0};
	xsi_register_didat("work_a_1156261981_1051694329", "isim/fifo_tb_isim_beh.exe.sim/work/a_1156261981_1051694329.didat");
	xsi_register_executes(pe);
}
