/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2018-2019 SiFive, Inc.
 * Wesley Terpstra
 * Paul Walmsley
 */

#ifndef __DT_BINDINGS_CLOCK_SIFIVE_FU540_PRCI_H
#define __DT_BINDINGS_CLOCK_SIFIVE_FU540_PRCI_H

/* Clock indexes for use by Device Tree data and the PRCI driver */

#define PRCI_CLK_COREPLL	       0
#define PRCI_CLK_DDRPLL		       1
#define PRCI_CLK_GEMGXLPLL	       2
#define PRCI_CLK_TLCLK		       3

/* Reset bit indexes to be used by driver */
#define PRCI_RST_DDR_CTRL_N	0
#define PRCI_RST_DDR_AXI_N	1
#define PRCI_RST_DDR_AHB_N	2
#define PRCI_RST_DDR_PHY_N	3
/* bit 4 is reserved bit */
#define PRCI_RST_RSVD_N		4
#define PRCI_RST_GEMGXL_N	5
#endif
