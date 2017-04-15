/*
 * Copyright (c) 2014, The Linux Foundation. All rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _DT_BINDINGS_CLK_GCC_IPQ806X_H
#define _DT_BINDINGS_CLK_GCC_IPQ806X_H

#define AFAB_CLK_SRC				0
#define QDSS_STM_CLK				1
#define SCSS_A_CLK				2
#define SCSS_H_CLK				3
#define AFAB_CORE_CLK				4
#define SCSS_XO_SRC_CLK				5
#define AFAB_EBI1_CH0_A_CLK			6
#define AFAB_EBI1_CH1_A_CLK			7
#define AFAB_AXI_S0_FCLK			8
#define AFAB_AXI_S1_FCLK			9
#define AFAB_AXI_S2_FCLK			10
#define AFAB_AXI_S3_FCLK			11
#define AFAB_AXI_S4_FCLK			12
#define SFAB_CORE_CLK				13
#define SFAB_AXI_S0_FCLK			14
#define SFAB_AXI_S1_FCLK			15
#define SFAB_AXI_S2_FCLK			16
#define SFAB_AXI_S3_FCLK			17
#define SFAB_AXI_S4_FCLK			18
#define SFAB_AXI_S5_FCLK			19
#define SFAB_AHB_S0_FCLK			20
#define SFAB_AHB_S1_FCLK			21
#define SFAB_AHB_S2_FCLK			22
#define SFAB_AHB_S3_FCLK			23
#define SFAB_AHB_S4_FCLK			24
#define SFAB_AHB_S5_FCLK			25
#define SFAB_AHB_S6_FCLK			26
#define SFAB_AHB_S7_FCLK			27
#define QDSS_AT_CLK_SRC				28
#define QDSS_AT_CLK				29
#define QDSS_TRACECLKIN_CLK_SRC			30
#define QDSS_TRACECLKIN_CLK			31
#define QDSS_TSCTR_CLK_SRC			32
#define QDSS_TSCTR_CLK				33
#define SFAB_ADM0_M0_A_CLK			34
#define SFAB_ADM0_M1_A_CLK			35
#define SFAB_ADM0_M2_H_CLK			36
#define ADM0_CLK				37
#define ADM0_PBUS_CLK				38
#define IMEM0_A_CLK				39
#define QDSS_H_CLK				40
#define PCIE_A_CLK				41
#define PCIE_AUX_CLK				42
#define PCIE_H_CLK				43
#define PCIE_PHY_CLK				44
#define SFAB_CLK_SRC				45
#define SFAB_LPASS_Q6_A_CLK			46
#define SFAB_AFAB_M_A_CLK			47
#define AFAB_SFAB_M0_A_CLK			48
#define AFAB_SFAB_M1_A_CLK			49
#define SFAB_SATA_S_H_CLK			50
#define DFAB_CLK_SRC				51
#define DFAB_CLK				52
#define SFAB_DFAB_M_A_CLK			53
#define DFAB_SFAB_M_A_CLK			54
#define DFAB_SWAY0_H_CLK			55
#define DFAB_SWAY1_H_CLK			56
#define DFAB_ARB0_H_CLK				57
#define DFAB_ARB1_H_CLK				58
#define PPSS_H_CLK				59
#define PPSS_PROC_CLK				60
#define PPSS_TIMER0_CLK				61
#define PPSS_TIMER1_CLK				62
#define PMEM_A_CLK				63
#define DMA_BAM_H_CLK				64
#define SIC_H_CLK				65
#define SPS_TIC_H_CLK				66
#define CFPB_2X_CLK_SRC				67
#define CFPB_CLK				68
#define CFPB0_H_CLK				69
#define CFPB1_H_CLK				70
#define CFPB2_H_CLK				71
#define SFAB_CFPB_M_H_CLK			72
#define CFPB_MASTER_H_CLK			73
#define SFAB_CFPB_S_H_CLK			74
#define CFPB_SPLITTER_H_CLK			75
#define TSIF_H_CLK				76
#define TSIF_INACTIVITY_TIMERS_CLK		77
#define TSIF_REF_SRC				78
#define TSIF_REF_CLK				79
#define CE1_H_CLK				80
#define CE1_CORE_CLK				81
#define CE1_SLEEP_CLK				82
#define CE2_H_CLK				83
#define CE2_CORE_CLK				84
#define SFPB_H_CLK_SRC				85
#define SFPB_H_CLK				86
#define SFAB_SFPB_M_H_CLK			87
#define SFAB_SFPB_S_H_CLK			88
#define RPM_PROC_CLK				89
#define RPM_BUS_H_CLK				90
#define RPM_SLEEP_CLK				91
#define RPM_TIMER_CLK				92
#define RPM_MSG_RAM_H_CLK			93
#define PMIC_ARB0_H_CLK				94
#define PMIC_ARB1_H_CLK				95
#define PMIC_SSBI2_SRC				96
#define PMIC_SSBI2_CLK				97
#define SDC1_H_CLK				98
#define SDC2_H_CLK				99
#define SDC3_H_CLK				100
#define SDC4_H_CLK				101
#define SDC1_SRC				102
#define SDC1_CLK				103
#define SDC2_SRC				104
#define SDC2_CLK				105
#define SDC3_SRC				106
#define SDC3_CLK				107
#define SDC4_SRC				108
#define SDC4_CLK				109
#define USB_HS1_H_CLK				110
#define USB_HS1_XCVR_SRC			111
#define USB_HS1_XCVR_CLK			112
#define USB_HSIC_H_CLK				113
#define USB_HSIC_XCVR_SRC			114
#define USB_HSIC_XCVR_CLK			115
#define USB_HSIC_SYSTEM_CLK_SRC			116
#define USB_HSIC_SYSTEM_CLK			117
#define CFPB0_C0_H_CLK				118
#define CFPB0_D0_H_CLK				119
#define CFPB0_C1_H_CLK				120
#define CFPB0_D1_H_CLK				121
#define USB_FS1_H_CLK				122
#define USB_FS1_XCVR_SRC			123
#define USB_FS1_XCVR_CLK			124
#define USB_FS1_SYSTEM_CLK			125
#define GSBI_COMMON_SIM_SRC			126
#define GSBI1_H_CLK				127
#define GSBI2_H_CLK				128
#define GSBI3_H_CLK				129
#define GSBI4_H_CLK				130
#define GSBI5_H_CLK				131
#define GSBI6_H_CLK				132
#define GSBI7_H_CLK				133
#define GSBI1_QUP_SRC				134
#define GSBI1_QUP_CLK				135
#define GSBI2_QUP_SRC				136
#define GSBI2_QUP_CLK				137
#define GSBI3_QUP_SRC				138
#define GSBI3_QUP_CLK				139
#define GSBI4_QUP_SRC				140
#define GSBI4_QUP_CLK				141
#define GSBI5_QUP_SRC				142
#define GSBI5_QUP_CLK				143
#define GSBI6_QUP_SRC				144
#define GSBI6_QUP_CLK				145
#define GSBI7_QUP_SRC				146
#define GSBI7_QUP_CLK				147
#define GSBI1_UART_SRC				148
#define GSBI1_UART_CLK				149
#define GSBI2_UART_SRC				150
#define GSBI2_UART_CLK				151
#define GSBI3_UART_SRC				152
#define GSBI3_UART_CLK				153
#define GSBI4_UART_SRC				154
#define GSBI4_UART_CLK				155
#define GSBI5_UART_SRC				156
#define GSBI5_UART_CLK				157
#define GSBI6_UART_SRC				158
#define GSBI6_UART_CLK				159
#define GSBI7_UART_SRC				160
#define GSBI7_UART_CLK				161
#define GSBI1_SIM_CLK				162
#define GSBI2_SIM_CLK				163
#define GSBI3_SIM_CLK				164
#define GSBI4_SIM_CLK				165
#define GSBI5_SIM_CLK				166
#define GSBI6_SIM_CLK				167
#define GSBI7_SIM_CLK				168
#define USB_HSIC_HSIC_CLK_SRC			169
#define USB_HSIC_HSIC_CLK			170
#define USB_HSIC_HSIO_CAL_CLK			171
#define SPDM_CFG_H_CLK				172
#define SPDM_MSTR_H_CLK				173
#define SPDM_FF_CLK_SRC				174
#define SPDM_FF_CLK				175
#define SEC_CTRL_CLK				176
#define SEC_CTRL_ACC_CLK_SRC			177
#define SEC_CTRL_ACC_CLK			178
#define TLMM_H_CLK				179
#define TLMM_CLK				180
#define SATA_H_CLK				181
#define SATA_CLK_SRC				182
#define SATA_RXOOB_CLK				183
#define SATA_PMALIVE_CLK			184
#define SATA_PHY_REF_CLK			185
#define SATA_A_CLK				186
#define SATA_PHY_CFG_CLK			187
#define TSSC_CLK_SRC				188
#define TSSC_CLK				189
#define PDM_SRC					190
#define PDM_CLK					191
#define GP0_SRC					192
#define GP0_CLK					193
#define GP1_SRC					194
#define GP1_CLK					195
#define GP2_SRC					196
#define GP2_CLK					197
#define MPM_CLK					198
#define EBI1_CLK_SRC				199
#define EBI1_CH0_CLK				200
#define EBI1_CH1_CLK				201
#define EBI1_2X_CLK				202
#define EBI1_CH0_DQ_CLK				203
#define EBI1_CH1_DQ_CLK				204
#define EBI1_CH0_CA_CLK				205
#define EBI1_CH1_CA_CLK				206
#define EBI1_XO_CLK				207
#define SFAB_SMPSS_S_H_CLK			208
#define PRNG_SRC				209
#define PRNG_CLK				210
#define PXO_SRC					211
#define SPDM_CY_PORT0_CLK			212
#define SPDM_CY_PORT1_CLK			213
#define SPDM_CY_PORT2_CLK			214
#define SPDM_CY_PORT3_CLK			215
#define SPDM_CY_PORT4_CLK			216
#define SPDM_CY_PORT5_CLK			217
#define SPDM_CY_PORT6_CLK			218
#define SPDM_CY_PORT7_CLK			219
#define PLL0					220
#define PLL0_VOTE				221
#define PLL3					222
#define PLL3_VOTE				223
#define PLL4					224
#define PLL4_VOTE				225
#define PLL8					226
#define PLL8_VOTE				227
#define PLL9					228
#define PLL10					229
#define PLL11					230
#define PLL12					231
#define PLL14					232
#define PLL14_VOTE				233
#define PLL18					234
#define CE5_SRC					235
#define CE5_H_CLK				236
#define CE5_CORE_CLK				237
#define CE3_SLEEP_CLK				238
#define SFAB_AHB_S8_FCLK			239
#define SPDM_CY_PORT8_CLK			246
#define PCIE_ALT_REF_SRC			247
#define PCIE_ALT_REF_CLK			248
#define PCIE_1_A_CLK				249
#define PCIE_1_AUX_CLK				250
#define PCIE_1_H_CLK				251
#define PCIE_1_PHY_CLK				252
#define PCIE_1_ALT_REF_SRC			253
#define PCIE_1_ALT_REF_CLK			254
#define PCIE_2_A_CLK				255
#define PCIE_2_AUX_CLK				256
#define PCIE_2_H_CLK				257
#define PCIE_2_PHY_CLK				258
#define PCIE_2_ALT_REF_SRC			259
#define PCIE_2_ALT_REF_CLK			260
#define EBI2_CLK				261
#define USB30_SLEEP_CLK				262
#define USB30_UTMI_SRC				263
#define USB30_0_UTMI_CLK			264
#define USB30_1_UTMI_CLK			265
#define USB30_MASTER_SRC			266
#define USB30_0_MASTER_CLK			267
#define USB30_1_MASTER_CLK			268
#define GMAC_CORE1_CLK_SRC			269
#define GMAC_CORE2_CLK_SRC			270
#define GMAC_CORE3_CLK_SRC			271
#define GMAC_CORE4_CLK_SRC			272
#define GMAC_CORE1_CLK				273
#define GMAC_CORE2_CLK				274
#define GMAC_CORE3_CLK				275
#define GMAC_CORE4_CLK				276
#define UBI32_CORE1_CLK_SRC			277
#define UBI32_CORE2_CLK_SRC			278
#define UBI32_CORE1_CLK				279
#define UBI32_CORE2_CLK				280

#endif
