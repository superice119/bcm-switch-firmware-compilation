/*
 * $Id: shmoo_and28.h,v 1.1 Broadcom SDK $
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 *
 * 28nm PHY Support
 */

/* BEGIN: TEMPORARY */
/* END: TEMPORARY */

#ifndef _SHMOO_AND28_H
#define _SHMOO_AND28_H

#include <sal/types.h>
#include <soc/defs.h>
#include <shared/types.h>

/**
 * ddr34 register access
 * m = memory, c = core, r = register, f = field, d = data.
 */

#define DDR34_REG_READ(_unit, _pc, flags, _reg_addr, _val) \
            soc_and28_phy_reg_read((_unit), (_pc), (_reg_addr), (_val))
#define DDR34_REG_WRITE(_unit, _pc, _flags, _reg_addr, _val) \
            soc_and28_phy_reg_write((_unit), (_pc), (_reg_addr), (_val))
#define DDR34_REG_MODIFY(_unit, _pc, _flags, _reg_addr, _val, _mask) \
            soc_and28_phy_reg_modify((_unit), (_pc), (_reg_addr), (_val), (_mask))
#define DDR34_GET_FIELD(m,c,r,f) \
            GET_FIELD(m,c,r,f)
#define DDR34_SET_FIELD(m,c,r,f,d) \
            SET_FIELD(m,c,r,f,d)

#define SET_ADDR_VDL_FORCE(v)                       ( 0x10000 | ( (v) & 0x011FF ) )
#define SET_VREF_DAC_CONTROL(v)                     ( (v) & 0xFFFFF ) 
#define SET_WR_VDL_FORCE(v)                         ( 0x10000 | ( (v) & 0x011FF ) )
#define SET_WR_CHAN_DLY_CYC_FORCE(v)                ( 0x10000 | ( (v) & 0x000F7 ) )
#define SET_RD_VDL_FORCE(v)                         ( 0x10000 | ( (v) & 0x010FF ) )
#define SET_RD_EN_DLY_CYC_FORCE(v)                  ( 0x10000 | ( (v) & 0x001FF ) )
#define SET_RD_CONTROL(v)                           ( (v) & 0x0001F )

#define SHMOO_AND28_PHY_TYPE_RSVP                   0
#define SHMOO_AND28_PHY_TYPE_E0                     0xE0
#define SHMOO_AND28_PHY_TYPE_F0                     0xF0

#define SHMOO_AND28_CTL_TYPE_RSVP                   0
#define SHMOO_AND28_CTL_TYPE_RSVP_STR               "t0"
#define SHMOO_AND28_CTL_TYPE_1                      1
#define SHMOO_AND28_CTL_TYPE_1_STR                  "t1"

#define SHMOO_AND28_DRAM_TYPE_RSVP                  0
#define SHMOO_AND28_DRAM_TYPE_DDR3                  3
#define SHMOO_AND28_DRAM_TYPE_DDR3L                 31
#define SHMOO_AND28_DRAM_TYPE_DDR4                  4
#define SHMOO_AND28_DRAM_TYPE_GDDR5                 5

#define SHMOO_AND28_BIT                             1
#define SHMOO_AND28_BYTE                            (SHMOO_AND28_BIT << 3)
#define SHMOO_AND28_HALFWORD                        (SHMOO_AND28_BYTE << 1)
#define SHMOO_AND28_WORD                            (SHMOO_AND28_HALFWORD << 1)
#define SHMOO_AND28_DOUBLEWORD                      (SHMOO_AND28_WORD << 1)
#define SHMOO_AND28_QUADWORD                        (SHMOO_AND28_DOUBLEWORD << 1)

#define SHMOO_AND28_SHORT_SLEEP                     1
#define SHMOO_AND28_LONG_SLEEP                      10
#define SHMOO_AND28_DEEP_SLEEP                      100
#define SHMOO_AND28_HIBERNATION                     1000
#define SHMOO_AND28_STASIS                          1000000

#define SHMOO_AND28_SHMOO_RSVP                      -1
#define SHMOO_AND28_RD_EN                           23
#define SHMOO_AND28_RD_EXTENDED                     50
#define SHMOO_AND28_WR_EXTENDED                     60
#define SHMOO_AND28_ADDR_EXTENDED                   71
#define SHMOO_AND28_CTRL_EXTENDED                   72
#define SHMOO_AND28_DDR3_SEQUENCE_COUNT             5
#define SHMOO_AND28_DDR3L_SEQUENCE_COUNT            5
#define SHMOO_AND28_DDR4_SEQUENCE_COUNT             5
/* BEGIN: EXTRA */
/* END: EXTRA */

#define SHMOO_AND28_QUICK_SHMOO_CTRL_EXTENDED       1

#define SHMOO_AND28_REPEAT                          9
#define SHMOO_AND28_REPEAT_HALF                     (SHMOO_AND28_REPEAT >> 1)

#define SHMOO_AND28_SEQUENTIAL                      0
#define SHMOO_AND28_SINGLE                          1

#define SHMOO_AND28_ACTION_RSVP                     -1
#define SHMOO_AND28_ACTION_RESTORE                  0
#define SHMOO_AND28_ACTION_RUN                      1
#define SHMOO_AND28_ACTION_SAVE                     2
#define SHMOO_AND28_ACTION_RUN_AND_SAVE             3

#define SHMOO_AND28_CTL_FLAGS_STAT_BIT              0x1
#define SHMOO_AND28_CTL_FLAGS_PLOT_BIT              0x2
#define SHMOO_AND28_CTL_FLAGS_EXT_VREF_RANGE_BIT    0x4
#define SHMOO_AND28_DEBUG_MODE_FLAG_BITS            SHMOO_AND28_CTL_FLAGS_EXT_VREF_RANGE_BIT

#define SHMOO_AND28_MAX_INTERFACES                  8
#define SHMOO_AND28_INTERFACE_RSVP                  -1
#define SHMOO_AND28_BYTES_PER_INTERFACE             4

#define SHMOO_AND28_BIST_NOF_PATTERNS               8
#define SHMOO_AND28_BIST_MPR_NOF_PATTERNS           4

#define SHMOO_AND28_MAX_VISIBLE_UI_COUNT            4
#define SHMOO_AND28_MAX_EFFECTIVE_UI_COUNT          4
#define SHMOO_AND28_LAST_EFFECTIVE_UI               (SHMOO_AND28_MAX_EFFECTIVE_UI_COUNT - 1)
#define SHMOO_AND28_MAX_VDL_LENGTH                  256
#define SHMOO_AND28_MAX_VREF_RANGE                  64
#define SHMOO_AND28_MAX_ZQ_CAL_RANGE                32

#define SHMOO_AND28_RESULT2D_X                      SHMOO_AND28_MAX_VDL_LENGTH
#define SHMOO_AND28_RESULT2D_Y                      SHMOO_AND28_MAX_VREF_RANGE

#define SHMOO_AND28_STRING_LENGTH                   (SHMOO_AND28_RESULT2D_X + 1)
#define SHMOO_AND28_ERROR_ARRAY_LENGTH              4

#define SHMOO_AND28_CALIB_CENTER_PASS               111
#define SHMOO_AND28_CALIB_RISING_EDGE               011
#define SHMOO_AND28_CALIB_FALLING_EDGE              100
#define SHMOO_AND28_CALIB_PASS_START                001
#define SHMOO_AND28_CALIB_FAIL_START                110
#define SHMOO_AND28_CALIB_VDL_ZERO                  000

#define SHMOO_AND28_VDL_TFIX                        18

#define SHMOO_AND28_RD_DATA_DLY_INIT                7

#define SHMOO_AND28_RD_EN_CYC_INIT                  2

#define SHMOO_AND28_RD_EN_VDL_INIT                  0

#define SHMOO_AND28_RD_DQ_VDL_INIT                  0
#define SHMOO_AND28_RD_DQ_FAIL_CAP                  5

#define SHMOO_AND28_RD_DQS_VDL_OFFSET               SHMOO_AND28_RD_DQ_VDL_INIT

#define SHMOO_AND28_WR_CYC_INIT                     0

#define SHMOO_AND28_PHY_NOF_AD                      16
#define SHMOO_AND28_PHY_NOF_BA                      3
#define SHMOO_AND28_PHY_NOF_AUX                     3
#define SHMOO_AND28_PHY_NOF_CS                      2

typedef struct and28_shmoo_dram_info_s
{ 
    uint32 ctl_type;
    uint32 dram_type;
    uint32 dram_bitmap;
    uint32 interface_bitwidth;
    uint32 split_bus;
    int    num_columns;
    int    num_rows;
    int    num_banks;
    int    num_bank_groups;
    int    data_rate_mbps;
    int    ref_clk_mhz; 
    uint32 refi;
    uint32 command_parity_latency;
    int sim_system_mode;
} and28_shmoo_dram_info_t;

typedef struct and28_shmoo_config_param_s
{
    uint16  control_regs_ad[SHMOO_AND28_PHY_NOF_AD];
    uint16  control_regs_ba[SHMOO_AND28_PHY_NOF_BA];
    uint16  control_regs_aux[SHMOO_AND28_PHY_NOF_AUX];
    uint16  control_regs_cs[SHMOO_AND28_PHY_NOF_CS];
    uint16  control_regs_par;
    uint16  control_regs_ras_n;
    uint16  control_regs_cas_n;
    uint16  control_regs_cke;
    uint16  control_regs_rst_n;
    uint16  control_regs_odt;
    uint16  control_regs_we_n;
    uint32  control_regs_vref_dac_control;
    
    uint16  wr_vdl_dqsp[SHMOO_AND28_BYTES_PER_INTERFACE];
    uint16  wr_vdl_dqsn[SHMOO_AND28_BYTES_PER_INTERFACE];
    uint16  wr_vdl_dq[SHMOO_AND28_BYTES_PER_INTERFACE][SHMOO_AND28_BYTE];
    uint16  wr_vdl_dm[SHMOO_AND28_BYTES_PER_INTERFACE];
    uint16  wr_vdl_edc[SHMOO_AND28_BYTES_PER_INTERFACE];
    uint8   wr_chan_dly_cyc[SHMOO_AND28_BYTES_PER_INTERFACE];
    
    uint16  rd_vdl_dqsp[SHMOO_AND28_BYTES_PER_INTERFACE];
    uint16  rd_vdl_dqsn[SHMOO_AND28_BYTES_PER_INTERFACE];
    uint16  rd_vdl_dqp[SHMOO_AND28_BYTES_PER_INTERFACE][SHMOO_AND28_BYTE];
    uint16  rd_vdl_dqn[SHMOO_AND28_BYTES_PER_INTERFACE][SHMOO_AND28_BYTE];
    uint16  rd_vdl_dmp[SHMOO_AND28_BYTES_PER_INTERFACE];
    uint16  rd_vdl_dmn[SHMOO_AND28_BYTES_PER_INTERFACE];
    uint16  rd_en_vdl_cs[SHMOO_AND28_BYTES_PER_INTERFACE][SHMOO_AND28_PHY_NOF_CS];
    uint16  rd_en_dly_cyc[SHMOO_AND28_BYTES_PER_INTERFACE];
    uint8   rd_control[SHMOO_AND28_BYTES_PER_INTERFACE];
} and28_shmoo_config_param_t;

typedef struct and28_bist_info_s
{ 
    uint32 write_weight;
    uint32 read_weight;
    uint32 bist_timer_us;        /* if bist_timer_us != 0, ignore bist_num_actions and wait bist_timer_us before stoping bist */
    uint32 bist_num_actions;
    uint32 bist_start_address;
    uint32 bist_end_address;
    uint32 prbs_mode;
    uint32 mpr_mode;
    uint32 data_pattern[SHMOO_AND28_BIST_NOF_PATTERNS];
    uint8  mpr_pattern[SHMOO_AND28_BIST_MPR_NOF_PATTERNS];
} and28_bist_info_t;

typedef struct and28_bist_err_cnt_s
{ 
    uint32 bist_err_occur;
    uint32 bist_full_err_cnt;
    uint32 bist_single_err_cnt;
    uint32 bist_global_err_cnt;
} and28_bist_err_cnt_t;

typedef struct and28_vendor_info_s { 
    uint32 dram_density;
    uint32 fifo_depth;
    uint32 revision_id;        
    uint32 manufacture_id;
} and28_vendor_info_t;

typedef struct and28_shmoo_container_s
{
    uint32 sizeX;
    uint32 sizeY;
    uint32 yCapMin;
    uint32 yCapMax;
    uint32 yJump;
    uint32 calibMode;
    uint32 calibPos;
    uint32 calibStart;
    uint32 result2D[(SHMOO_AND28_RESULT2D_X)*(SHMOO_AND28_RESULT2D_Y)];
    uint32 resultData[SHMOO_AND28_DOUBLEWORD];
    uint32 shmooType;
    uint32 dramType;
    uint32 ctlType;
    uint32 trefi;
    uint32 step1000;
    uint32 size1000UI;
    uint32 endUI[SHMOO_AND28_MAX_VISIBLE_UI_COUNT];
    uint32 engageUIshift;
    uint32 wckInv;
    uint32 restore;
    uint32 debugMode;
} and28_shmoo_container_t;

typedef struct and28_step_size_s
{
    uint32 step1000;
    uint32 size1000UI;
} and28_step_size_t;

typedef struct and28_ui_position_s
{
    uint32 ui;
    uint32 position;
} and28_ui_position_t;

typedef uint32 and28_shmoo_error_array_t[SHMOO_AND28_ERROR_ARRAY_LENGTH];

typedef struct and28_shmoo_cbi_s { 
    /* PHY register Read */
    int (*and28_phy_reg_read)(int unit, int drc_ndx, uint32 addr, uint32 *data);
    /* PHY register write */
    int (*and28_phy_reg_write)(int unit, int drc_ndx, uint32 addr, uint32 data);
    /* PHY register Modify */
    int (*and28_phy_reg_modify)(int unit, int drc_ndx, uint32 addr, uint32 data, uint32 mask);
    /* BIST Configuration */
    int (*and28_drc_bist_conf_set)(int unit, int drc_ndx, and28_bist_info_t info);
    /* Get BIST error count */
    int (*and28_drc_bist_err_cnt)(int unit, int drc_ndx, and28_bist_err_cnt_t *info);
    /* Set Dram Init Phase (First - 1/Second - 2) */
    int (*and28_drc_dram_init)(int unit, int drc_ndx, int phase);
} and28_shmoo_cbi_t;

typedef int (*soc_and28_phy_reg_read_t)(int unit, int drc_ndx, uint32 addr, uint32 *data);
typedef int (*soc_and28_phy_reg_write_t)(int unit, int drc_ndx, uint32 addr, uint32 data);
typedef int (*soc_and28_phy_reg_modify_t)(int unit, int drc_ndx, uint32 addr, uint32 data, uint32 mask);
typedef int (*_shmoo_and28_drc_bist_conf_set_t)(int unit, int drc_ndx, and28_bist_info_t info);
typedef int (*_shmoo_and28_drc_bist_err_cnt_t)(int unit, int drc_ndx, and28_bist_err_cnt_t *info);
typedef int (*_shmoo_and28_drc_dram_init_t)(int unit, int drc_ndx, int phase);

extern soc_and28_phy_reg_read_t soc_and28_phy_reg_read;
extern soc_and28_phy_reg_write_t soc_and28_phy_reg_write;
extern soc_and28_phy_reg_modify_t soc_and28_phy_reg_modify;
extern int soc_and28_shmoo_interface_cb_register(int unit, and28_shmoo_cbi_t shmoo_cbi);
extern int soc_and28_shmoo_dram_info_set(int unit, CONST and28_shmoo_dram_info_t *sdi);
extern int soc_and28_shmoo_phy_init(int unit, int drc_ndx);
extern int soc_and28_shmoo_ctl(int unit, int drc_ndx, int shmoo_type, uint32 flags, int action, and28_shmoo_config_param_t *config_param);

#endif /* _SHMOO_AND28_H */