/* $Id: $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 * search for 'sw_state_cbs_t' for the root of the struct
 */

#ifndef _SHR_SW_STATE_DPP_SOC_ARAD_TM_INTERRUPTS_ACCESS_H_
#define _SHR_SW_STATE_DPP_SOC_ARAD_TM_INTERRUPTS_ACCESS_H_

/********************************* access calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the access calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the access struct by 'sw_state_access_cb_init'.                  */
/***************************************************************************************************/

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_alloc */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_alloc_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_is_allocated */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_is_allocated_cb)(
    int unit, uint8 *is_allocated);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_free */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_free_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_verify */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_verify_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_cmc_irq2_mask_set */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_cmc_irq2_mask_set_cb)(
    int unit, int cmc_irq2_mask_idx_0, uint32 cmc_irq2_mask);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_cmc_irq2_mask_get */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_cmc_irq2_mask_get_cb)(
    int unit, int cmc_irq2_mask_idx_0, uint32 *cmc_irq2_mask);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_cmc_irq2_mask_verify */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_cmc_irq2_mask_verify_cb)(
    int unit, int cmc_irq2_mask_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_cmc_irq3_mask_set */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_cmc_irq3_mask_set_cb)(
    int unit, int cmc_irq3_mask_idx_0, uint32 cmc_irq3_mask);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_cmc_irq3_mask_get */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_cmc_irq3_mask_get_cb)(
    int unit, int cmc_irq3_mask_idx_0, uint32 *cmc_irq3_mask);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_cmc_irq3_mask_verify */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_cmc_irq3_mask_verify_cb)(
    int unit, int cmc_irq3_mask_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_cmc_irq4_mask_set */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_cmc_irq4_mask_set_cb)(
    int unit, int cmc_irq4_mask_idx_0, uint32 cmc_irq4_mask);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_cmc_irq4_mask_get */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_cmc_irq4_mask_get_cb)(
    int unit, int cmc_irq4_mask_idx_0, uint32 *cmc_irq4_mask);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_cmc_irq4_mask_verify */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_cmc_irq4_mask_verify_cb)(
    int unit, int cmc_irq4_mask_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_set */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_set_cb)(
    int unit, int interrupt_data_idx_0, CONST ARAD_INTERRUPT_DATA *interrupt_data);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_get */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_get_cb)(
    int unit, int interrupt_data_idx_0, ARAD_INTERRUPT_DATA *interrupt_data);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_alloc */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_alloc_cb)(
    int unit, int nof_instances_to_alloc);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_is_allocated */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_is_allocated_cb)(
    int unit, uint8 *is_allocated);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_free */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_free_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_verify */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_verify_cb)(
    int unit, int interrupt_data_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_flags_set */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_flags_set_cb)(
    int unit, int interrupt_data_idx_0, uint32 flags);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_flags_get */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_flags_get_cb)(
    int unit, int interrupt_data_idx_0, uint32 *flags);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_flags_verify */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_flags_verify_cb)(
    int unit, int interrupt_data_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_count_set */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_count_set_cb)(
    int unit, int interrupt_data_idx_0, uint32 storm_timed_count);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_count_get */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_count_get_cb)(
    int unit, int interrupt_data_idx_0, uint32 *storm_timed_count);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_count_verify */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_count_verify_cb)(
    int unit, int interrupt_data_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_period_set */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_period_set_cb)(
    int unit, int interrupt_data_idx_0, uint32 storm_timed_period);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_period_get */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_period_get_cb)(
    int unit, int interrupt_data_idx_0, uint32 *storm_timed_period);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_period_verify */
typedef int (*sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_period_verify_cb)(
    int unit, int interrupt_data_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

/*********************************** access calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the access layer for the entire SW state.*/
/* use this tree to alloc/free/set/get fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_tm_interrupts_cmc_irq2_mask_cbs_s {
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_cmc_irq2_mask_set_cb set;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_cmc_irq2_mask_get_cb get;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_cmc_irq2_mask_verify_cb verify;
#endif /* BCM_PETRA_SUPPORT*/ 
} sw_state_dpp_soc_arad_tm_interrupts_cmc_irq2_mask_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_tm_interrupts_cmc_irq3_mask_cbs_s {
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_cmc_irq3_mask_set_cb set;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_cmc_irq3_mask_get_cb get;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_cmc_irq3_mask_verify_cb verify;
#endif /* BCM_PETRA_SUPPORT*/ 
} sw_state_dpp_soc_arad_tm_interrupts_cmc_irq3_mask_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_tm_interrupts_cmc_irq4_mask_cbs_s {
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_cmc_irq4_mask_set_cb set;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_cmc_irq4_mask_get_cb get;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_cmc_irq4_mask_verify_cb verify;
#endif /* BCM_PETRA_SUPPORT*/ 
} sw_state_dpp_soc_arad_tm_interrupts_cmc_irq4_mask_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_flags_cbs_s {
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_flags_set_cb set;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_flags_get_cb get;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_flags_verify_cb verify;
#endif /* BCM_PETRA_SUPPORT*/ 
} sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_flags_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_count_cbs_s {
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_count_set_cb set;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_count_get_cb get;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_count_verify_cb verify;
#endif /* BCM_PETRA_SUPPORT*/ 
} sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_count_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_period_cbs_s {
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_period_set_cb set;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_period_get_cb get;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_period_verify_cb verify;
#endif /* BCM_PETRA_SUPPORT*/ 
} sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_period_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_cbs_s {
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_set_cb set;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_get_cb get;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_alloc_cb alloc;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_is_allocated_cb is_allocated;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_free_cb free;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_verify_cb verify;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_flags_cbs_t flags;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_count_cbs_t storm_timed_count;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_storm_timed_period_cbs_t storm_timed_period;
#endif /* BCM_PETRA_SUPPORT*/ 
} sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_cbs_t;

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_tm_interrupts_cbs_s {
    sw_state_dpp_soc_arad_tm_interrupts_alloc_cb alloc;
    sw_state_dpp_soc_arad_tm_interrupts_is_allocated_cb is_allocated;
    sw_state_dpp_soc_arad_tm_interrupts_free_cb free;
    sw_state_dpp_soc_arad_tm_interrupts_verify_cb verify;
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_cmc_irq2_mask_cbs_t cmc_irq2_mask;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_cmc_irq3_mask_cbs_t cmc_irq3_mask;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_cmc_irq4_mask_cbs_t cmc_irq4_mask;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_soc_arad_tm_interrupts_interrupt_data_cbs_t interrupt_data;
#endif /* BCM_PETRA_SUPPORT*/ 
} sw_state_dpp_soc_arad_tm_interrupts_cbs_t;

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

int sw_state_dpp_soc_arad_tm_interrupts_access_cb_init(int unit);

#endif /* _SHR_SW_STATE_DPP_SOC_ARAD_TM_INTERRUPTS_ACCESS_H_ */