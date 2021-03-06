/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief
 *
 * \internal
 * \par Modification history
 * - 1.00 19-12-23  cds, first implementation
 * \endinternal
 */

#ifndef __AMHW_HC32F460_RCC_H
#define __AMHW_HC32F460_RCC_H

#ifdef __cplusplus
extern "C" {
#endif

#include "am_types.h"
#include "am_clk.h"
#include "hc32f460_regbase.h"
#include "hc32f460_clk.h"

/*
 * \brief 匿名结构体段的开始
 */
#if defined(__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined(__ICCARM__)
  #pragma language=extended
#elif defined(__GNUC__)
#elif defined(__TMS470__)
#elif defined(__TASKING__)
  #pragma warning 586
#else
  #warning Not supported compiler t
#endif

/**
 * \addtogroup amhw_hc32f460_if_cmu
 * \copydoc amhw_hc32f460_cmu.h
 * @{
 */

/**
 * \brief sysc寄存器块结构体
 */
typedef struct hc32f460_sysc_regs {
         uint8_t  RESERVED0[12];
    __IO uint16_t PWR_STPMCR;
         uint8_t  RESERVED1[2];
    __IO uint16_t CMU_PERICKSEL;  /**< \brief CMU AD/TRNG时钟配置寄存器 */
    __IO uint16_t CMU_I2SCKSEL;   /**< \brief CMU I2S时钟配置寄存器 */
    __IO uint32_t PWR_RAMPC0;
    __IO uint32_t PWR_RAMOPM;
    __IO uint32_t MPU_IPPR;
    __IO uint32_t CMU_SCFGR;      /**< \brief CMU 时钟分频配置寄存器 */
    __IO uint8_t  CMU_UFSCKCFGR;  /**< \brief CMU USBFS时钟分频配置寄存器 */
         uint8_t  RESERVED8[1];
    __IO uint8_t  CMU_CKSWR;      /**< \brief CMU 系统时钟源切换寄存器 */
         uint8_t  RESERVED9[3];
    __IO uint8_t  CMU_PLLCR;      /**< \brief CMU MPLL控制寄存器 */
         uint8_t  RESERVED10[3];
    __IO uint8_t  CMU_UPLLCR;     /**< \brief CMU UPLL控制寄存器 */
         uint8_t  RESERVED11[3];
    __IO uint8_t  CMU_XTALCR;     /**< \brief CMU XTAL控制寄存器 */
         uint8_t  RESERVED12[3];
    __IO uint8_t  CMU_HRCCR;      /**< \brief CMU HRC控制寄存器 */
         uint8_t  RESERVED13[1];
    __IO uint8_t  CMU_MRCCR;      /**< \brief CMU MRC控制寄存器 */
         uint8_t  RESERVED14[3];
    __IO uint8_t  CMU_OSCSTBSR;   /**< \brief CMU 时钟源稳定状态寄存器 */
    __IO uint8_t  CMU_MCO1CFGR;   /**< \brief CMU MCO1配置寄存器 */
    __IO uint8_t  CMU_MCO2CFGR;   /**< \brief CMU MCO2配置寄存器 */
    __IO uint8_t  CMU_TPIUCKCFGR; /**< \brief CMU 调试时钟配置寄存器 */
    __IO uint8_t  CMU_XTALSTDCR;  /**< \brief CMU XTAL振荡故障控制寄存器 */
    __IO uint8_t  CMU_XTALSTDSR;  /**< \brief CMU XTAL振荡故障状态寄存器 */
         uint8_t  RESERVED20[31];
    __IO uint8_t  CMU_MRCTRM;     /**< \brief CMU MRC校准寄存器 */
    __IO uint8_t  CMU_HRCTRM;     /**< \brief CMU HRC校准寄存器 */
         uint8_t  RESERVED22[63];
    __IO uint8_t  CMU_XTALSTBCR;  /**< \brief CMU XTAL稳定时间配置寄存器 */
         uint8_t  RESERVED23[29];
    __IO uint16_t RMU_RSTF0;
         uint8_t  RESERVED24[30];
    __IO uint8_t  PWR_PVDICR;
    __IO uint8_t  PWR_PVDDSR;
         uint8_t  RESERVED26[30];
    __IO uint32_t CMU_PLLCFGR;     /**< \brief CMU MPLL配置寄存器 */
    __IO uint32_t CMU_UPLLCFGR;    /**< \brief CMU UPLL控制寄存器 */
         uint8_t  RESERVED28[758];
    __IO uint16_t PWR_FPRC;
    __IO uint8_t  PWR_PWRC0;
    __IO uint8_t  PWR_PWRC1;
    __IO uint8_t  PWR_PWRC2;
    __IO uint8_t  PWR_PWRC3;
    __IO uint8_t  PWR_PDWKE0;
    __IO uint8_t  PWR_PDWKE1;
    __IO uint8_t  PWR_PDWKE2;
    __IO uint8_t  PWR_PDWKES;
    __IO uint8_t  PWR_PDWKF0;
    __IO uint8_t  PWR_PDWKF1;
    __IO uint8_t  PWR_PWCMR;
         uint8_t  RESERVED40[4];
    __IO uint8_t  PWR_MDSWCR;
    __IO uint8_t  CMU_XTALCFGR;  /**< \brief CMU XTAL配置寄存器 */
         uint8_t  RESERVED42[1];
    __IO uint8_t  PWR_PVDCR0;
    __IO uint8_t  PWR_PVDCR1;
    __IO uint8_t  PWR_PVDFCR;
    __IO uint8_t  PWR_PVDLCR;
         uint8_t  RESERVED46[10];
    __IO uint8_t  CMU_XTAL32CR;  /**< \brief CMU XTAL32控制寄存器 */
    __IO uint8_t  CMU_XTAL32CFGR;/**< \brief CMU XTAL32配置寄存器 */
         uint8_t  RESERVED48[3];
    __IO uint8_t  CMU_XTAL32NFR; /**< \brief CMU XTAL32滤波寄存器 */
         uint8_t  RESERVED49[1];
    __IO uint8_t  CMU_LRCCR;     /**< \brief CMU LRC控制寄存器 */
         uint8_t  RESERVED50[1];
    __IO uint8_t  CMU_LRCTRM;    /**< \brief CMU LRC校准寄存器 */
         uint8_t  RESERVED51[1];
    __IO uint8_t  PWR_XTAL32CS;
} hc32f460_sysc_regs_t;

#define HC32F460_SYSCREG            ((hc32f460_sysc_regs_t *)HC32F460_SYSC_BASE)

typedef struct hc32f460_mstp_regs {

    __IO uint32_t FCG0;
    __IO uint32_t FCG1;
    __IO uint32_t FCG2;
    __IO uint32_t FCG3;

} hc32f460_mstp_regs_t;

#define HC32F460_MSTP        ((hc32f460_mstp_regs_t *)HC32F460_MSTP_BASE)

/**
 * \brief 外设枚举
 */
typedef enum {
    AMHW_HC32F460_HRC_16M = 0,
    AMHW_HC32F460_HRC_20M = 1,
}amhw_hc32f460_clk_hrc_freq;


/**
 * \brief 系统时钟源
 */
typedef enum {
    AMHW_HC32F460_SYSCLK_HRC = 0,   /**< \brief 内部高速振荡器作为系统时钟 */
    AMHW_HC32F460_SYSCLK_MRC,       /**< \brief 外部中速振荡器作为系统时钟 */
    AMHW_HC32F460_SYSCLK_LRC,       /**< \brief 内部低速振荡器作为系统时钟 */
    AMHW_HC32F460_SYSCLK_XTAL,      /**< \brief 外部高速振荡器作为系统时钟 */
    AMHW_HC32F460_SYSCLK_XTAL32,    /**< \brief 外部低速振荡器作为系统时钟 */
    AMHW_HC32F460_SYSCLK_MPLL = 5,  /**< \brief MPLL作为系统时钟 */
}amhw_hc32f460_sys_clk_src;

/**
 * \brief 系统时钟分频系数(输出到各工作时钟)
 */
typedef enum {
    AMHW_HC32F460_SYSCLK_DIV_1 = 1,  /**< \brief 系统时钟的1分频 */
    AMHW_HC32F460_SYSCLK_DIV_2 = 2,      /**< \brief 系统时钟的2分频 */
    AMHW_HC32F460_SYSCLK_DIV_4 = 4,      /**< \brief 系统时钟的4分频 */
    AMHW_HC32F460_SYSCLK_DIV_8 = 8,      /**< \brief 系统时钟的8分频 */
    AMHW_HC32F460_SYSCLK_DIV_16 = 16,     /**< \brief 系统时钟的16分频 */
    AMHW_HC32F460_SYSCLK_DIV_32 = 32,     /**< \brief 系统时钟的32分频 */
    AMHW_HC32F460_SYSCLK_DIV_64 =64     /**< \brief 系统时钟的64分频 */
}amhw_hc32f460_sys_clk_div;

typedef enum {
    AMHW_HC32F460_CMU_XTAL_SUPDRV_DISABLE = 0,/**< \brief 禁止超高速驱动*/
    AMHW_HC32F460_CMU_XTAL_SUPDRV_ENABLE,     /**< \brief 允许超高速驱动 */
}amhw_hc32f460_cmu_xtalcfgr_supdrv;

typedef enum {
    AMHW_HC32F460_CMU_XTAL_MODE_OSC    = 0,/**< \brief 振荡器模式 */
    AMHW_HC32F460_CMU_XTAL_MODE_INPUT,     /**< \brief 外部时钟输入模式 */
}amhw_hc32f460_cmu_xtalcfgr_mode;

typedef enum {
    AMHW_HC32F460_CMU_XTAL_DRV_HIGH = 0,   /**< \brief 高驱动能力 */
    AMHW_HC32F460_CMU_XTAL_DRV_MIDDLER,    /**< \brief 中驱动能力 */
    AMHW_HC32F460_CMU_XTAL_DRV_LOW,        /**< \brief 小驱动能力 */
    AMHW_HC32F460_CMU_XTAL_DRV_SUPERLOW,   /**< \brief 超小驱动能力 */
}amhw_hc32f460_cmu_xtalcfgr_drv;

typedef struct {
    amhw_hc32f460_cmu_xtalcfgr_supdrv supdrv;
    amhw_hc32f460_cmu_xtalcfgr_mode   mode;
    amhw_hc32f460_cmu_xtalcfgr_drv    drv;
}amhw_hc32f460_cmu_xtalcfg_t;

typedef enum {
    AMHW_HC32F460_CLK_PLLSRC_XTAL = 0,   /**< \brief 选择外部高速振荡器作为输入时钟 */
    AMHW_HC32F460_CLK_PLLSRC_HRC,        /**< \brief 选择内部高速振荡器作为输入时钟 */
}amhw_hc32f460_clk_pll_src;

typedef struct amhw_hc32f460_clk_pll_cfg{
    uint32_t         PllpDiv;       ///< Pllp clk, division factor of VCO out.
    uint32_t         PllqDiv;       ///< Pllq clk, division factor of VCO out.
    uint32_t         PllrDiv;       ///< Pllr clk, division factor of VCO out.
    uint32_t         plln;          ///< Multiplication factor of vco out, ensure between 240M~480M
    uint32_t         pllmDiv;       ///< Division factor of VCO in, ensure between 1M~12M.
}amhw_hc32f460_clk_pll_cfg_t;

/**
 * \brief 外设枚举
 */
typedef enum {
    /* PWR_CFG0寄存器控制的外设使能位  */
    AMHW_HC32F460_RCC_RAMHS = 0,
    AMHW_HC32F460_RCC_RAM0 = 4,
    AMHW_HC32F460_RCC_ECCRAM = 8,
    AMHW_HC32F460_RCC_RETRAM = 10,
    AMHW_HC32F460_RCC_DMA1 = 14,
    AMHW_HC32F460_RCC_DMA2 = 15,
    AMHW_HC32F460_RCC_FCM = 16,
    AMHW_HC32F460_RCC_PTDIS = 17,
    AMHW_HC32F460_RCC_AES = 20,
    AMHW_HC32F460_RCC_HASH = 21,
    AMHW_HC32F460_RCC_TRNG = 22,
    AMHW_HC32F460_RCC_CRC = 23,
    AMHW_HC32F460_RCC_DCU1 = 24,
    AMHW_HC32F460_RCC_DCU2 = 25,
    AMHW_HC32F460_RCC_DCU3 = 26,
    AMHW_HC32F460_RCC_DCU4 = 27,
    AMHW_HC32F460_RCC_KEY = 31,

    /* PWR_CFG1寄存器控制的外设使能位  */
    AMHW_HC32F460_RCC_CAN  = 0 + 32,
    AMHW_HC32F460_RCC_QSPI = 3 + 32,
    AMHW_HC32F460_RCC_IIC1 = 4 + 32,
    AMHW_HC32F460_RCC_IIC2 = 5 + 32,
    AMHW_HC32F460_RCC_IIC3 = 6 + 32,
    AMHW_HC32F460_RCC_USBFS = 8 + 32,
    AMHW_HC32F460_RCC_SDIOC1 = 10 + 32,
    AMHW_HC32F460_RCC_SDIOC2 = 11 + 32,
    AMHW_HC32F460_RCC_I2S1 = 12 + 32,
    AMHW_HC32F460_RCC_I2S2 = 13 + 32,
    AMHW_HC32F460_RCC_I2S3 = 14 + 32,
    AMHW_HC32F460_RCC_I2S4 = 15 + 32,
    AMHW_HC32F460_RCC_SPI1 = 16 + 32,
    AMHW_HC32F460_RCC_SPI2 = 17 + 32,
    AMHW_HC32F460_RCC_SPI3 = 18 + 32,
    AMHW_HC32F460_RCC_SPI4 = 19 + 32,
    AMHW_HC32F460_RCC_USART1 = 24 + 32,
    AMHW_HC32F460_RCC_USART2 = 25 + 32,
    AMHW_HC32F460_RCC_USART3 = 26 + 32,
    AMHW_HC32F460_RCC_USART4 = 27 + 32,

    /* PWR_CFG2寄存器控制的外设时钟使能位  */
    AMHW_HC32F460_RCC_TIMER0_1 = 0 + 64,
    AMHW_HC32F460_RCC_TIMER0_2 = 1 + 64,
    AMHW_HC32F460_RCC_TIMERA_1 = 2 + 64,
    AMHW_HC32F460_RCC_TIMERA_2 = 3 + 64,
    AMHW_HC32F460_RCC_TIMERA_3 = 4 + 64,
    AMHW_HC32F460_RCC_TIMERA_4 = 5 + 64,
    AMHW_HC32F460_RCC_TIMERA_5 = 6 + 64,
    AMHW_HC32F460_RCC_TIMERA_6 = 7 + 64,
    AMHW_HC32F460_RCC_TIMER4_1 = 8 + 64,
    AMHW_HC32F460_RCC_TIMER4_2 = 9 + 64,
    AMHW_HC32F460_RCC_TIMER4_3 = 10 + 64,
    AMHW_HC32F460_RCC_EMB      = 15 + 64,
    AMHW_HC32F460_RCC_TIMER6_1 = 16 + 64,
    AMHW_HC32F460_RCC_TIMER6_2 = 17 + 64,
    AMHW_HC32F460_RCC_TIMER6_3 = 18 + 64,

    /* PWR_CFG3寄存器控制的外设时钟使能位  */
    AMHW_HC32F460_RCC_ADC1 = 0 + 96,
    AMHW_HC32F460_RCC_ADC2 = 1 + 96,
    AMHW_HC32F460_RCC_DAC  = 4 + 96,
    AMHW_HC32F460_RCC_CMP  = 8 + 96,
    AMHW_HC32F460_RCC_OTS  = 12 + 96,
} amhw_hc32f460_peripheral;




/* 获取当前系统时钟源 */
am_static_inline
amhw_hc32f460_sys_clk_src amhw_hc32f460_clk_get_sysclk_src(void) {
    return (HC32F460_SYSCREG->CMU_CKSWR & 0x7);
}

/* 允许时钟寄存器写（关掉写保护） */
am_static_inline
void amhw_hc32f460_clk_reg_write_enable (void) {
    HC32F460_SYSCREG->PWR_FPRC = 0xa501;
}

/* 禁止时钟寄存器写（开启写保护） */
am_static_inline
void amhw_hc32f460_clk_reg_write_disable (void) {
    HC32F460_SYSCREG->PWR_FPRC = 0xa500;
}

/* 允许时钟寄存器写（关掉写保护） */
am_static_inline
void amhw_hc32f460_clk1_reg_write_enable (void) {
    HC32F460_SYSCREG->PWR_FPRC = 0xa502;
}

/* 禁止时钟寄存器写（开启写保护） */
am_static_inline
void amhw_hc32f460_clk1_reg_write_disable (void) {
    HC32F460_SYSCREG->PWR_FPRC = 0xa500;
}

/* 系统时钟分频配置 */
am_static_inline
void amhw_hc32f460_sysclk_cfg (uint32_t                         clk_id,
                               uint32_t                         clk_div)
{
    uint8_t reg_val = 0;

    switch (clk_div) {

    case 1:
        reg_val = 0;
        break;
    case 2:
        reg_val = 1;
        break;
    case 4:
        reg_val = 2;
        break;
    case 8:
        reg_val = 3;
        break;
    case 16:
        reg_val = 4;
        break;
    case 32:
        reg_val = 5;
        break;
    case 64:
        reg_val = 6;
        break;
    }

    switch (clk_id) {

    case CLK_HCLK :
        HC32F460_SYSCREG->CMU_SCFGR |= (reg_val << 24);
        break;
    case CLK_PCLK0:
        HC32F460_SYSCREG->CMU_SCFGR |= (reg_val << 0);
        break;
    case CLK_PCLK1:
        HC32F460_SYSCREG->CMU_SCFGR |= (reg_val << 4);
        break;
    case CLK_PCLK2:
        HC32F460_SYSCREG->CMU_SCFGR |= (reg_val << 8);
        break;
    case CLK_PCLK3:
        HC32F460_SYSCREG->CMU_SCFGR |= (reg_val << 12);
        break;
    case CLK_PCLK4:
        HC32F460_SYSCREG->CMU_SCFGR |= (reg_val << 16);
        break;
    case CLK_EXCLK:
        HC32F460_SYSCREG->CMU_SCFGR |= (reg_val << 20);
        break;
    }
}

/* 复位功能时钟控制寄存器 */
am_static_inline
void amhw_hc32f460_clk_reset_mstb_fcg (void) {
    HC32F460_MSTP->FCG0 = 0XFFFFFAEE;
    HC32F460_MSTP->FCG1 = 0XF7FFFFFF;
    HC32F460_MSTP->FCG2 = 0XFFFFFFFF;
    HC32F460_MSTP->FCG3 = 0XFFFFFFFF;
}
/* 读取当前FCG寄存器的值 */
am_static_inline
void amhw_hc32f460_clk_get_mstb_fcg (uint32_t* value_reg)
{
    value_reg[0] = HC32F460_MSTP->FCG0;
    value_reg[1] = HC32F460_MSTP->FCG1;
    value_reg[2] = HC32F460_MSTP->FCG2;
    value_reg[3] = HC32F460_MSTP->FCG3;
}

/* 重新写入FCG寄存器的值 */
am_static_inline
void amhw_hc32f460_clk_set_mstb_fcg (uint32_t* value_reg)
{
    HC32F460_MSTP->FCG0 = value_reg[0];
    HC32F460_MSTP->FCG1 = value_reg[1];
    HC32F460_MSTP->FCG2 = value_reg[2];
    HC32F460_MSTP->FCG3 = value_reg[3];
}

/* 系统时钟源设置 */
am_static_inline
void amhw_hc32f460_clk_set_sysclk_src(amhw_hc32f460_sys_clk_src  clk_src)
{
	amhw_hc32f460_clk_reg_write_enable();
    HC32F460_SYSCREG->CMU_CKSWR = clk_src;
    amhw_hc32f460_clk_reg_write_disable();
}




/* XTAL配置 */
am_static_inline
void amhw_hc32f460_clk_xtal_cfg (amhw_hc32f460_cmu_xtalcfg_t xtal_cfg)
{
	amhw_hc32f460_clk_reg_write_enable();
    HC32F460_SYSCREG->CMU_XTALCFGR = (xtal_cfg.drv    << 4) |
                                     (xtal_cfg.mode   << 6) |
                                     (xtal_cfg.supdrv << 7);
    amhw_hc32f460_clk_reg_write_disable();

}

/* XTAL振荡器振荡 */
am_static_inline
void amhw_hc32f460_clk_xtal_cfg_enable(void)
{
	amhw_hc32f460_clk_reg_write_enable();
    HC32F460_SYSCREG->CMU_XTALCR &= ~(0x1ul);
    amhw_hc32f460_clk_reg_write_disable();
}

/* XTAL振荡器停止 */
am_static_inline
void amhw_hc32f460_clk_xtal_cfg_disable(void)
{
    HC32F460_SYSCREG->CMU_XTALCR |=  (0x1ul);
}

/* HRC振荡器振荡 */
am_static_inline
void amhw_hc32f460_clk_hrc_cfg_enable(void)
{
    HC32F460_SYSCREG->CMU_HRCCR &= ~(0x1ul);
}

/* HRC振荡器停止 */
am_static_inline
void amhw_hc32f460_clk_hrc_cfg_disable(void)
{
    HC32F460_SYSCREG->CMU_HRCCR |=  (0x1ul);
}

/* PLL时钟源设置 */
am_static_inline
void amhw_hc32f460_clk_pll_src_set(amhw_hc32f460_clk_pll_src pll_src)
{
	amhw_hc32f460_clk_reg_write_enable();
    if (pll_src == AMHW_HC32F460_CLK_PLLSRC_XTAL) {
        HC32F460_SYSCREG->CMU_PLLCFGR &=  ~(1 << 7);
    } else {
        HC32F460_SYSCREG->CMU_PLLCFGR |=  (1 << 7);
    }
    amhw_hc32f460_clk_reg_write_disable();
}

/* MPLL时钟设置 */
am_static_inline
void amhw_hc32f460_clk_mpll_cfg(amhw_hc32f460_clk_pll_cfg_t mpll_cfg)
{
	amhw_hc32f460_clk_reg_write_enable();

    HC32F460_SYSCREG->CMU_PLLCFGR &= (1 << 7);

    HC32F460_SYSCREG->CMU_PLLCFGR |= (mpll_cfg.pllmDiv - 1)         |
                                     ((mpll_cfg.plln - 1)    << 8)  |
                                     ((mpll_cfg.PllrDiv - 1) << 20) |
                                     ((mpll_cfg.PllqDiv - 1) << 24) |
                                     ((mpll_cfg.PllqDiv - 1) << 28);

    amhw_hc32f460_clk_reg_write_disable();
}

/* MPLL时钟使能 */
am_static_inline
void amhw_hc32f460_clk_upll_enable(void)
{
	amhw_hc32f460_clk_reg_write_enable();
    HC32F460_SYSCREG->CMU_UPLLCR &= ~(1ul);
    amhw_hc32f460_clk_reg_write_disable();
}

/* MPLL时钟设置 */
am_static_inline
void amhw_hc32f460_clk_upll_cfg(amhw_hc32f460_clk_pll_cfg_t upll_cfg)
{
	amhw_hc32f460_clk_reg_write_enable();

    HC32F460_SYSCREG->CMU_UPLLCFGR &= (1 << 7);

    HC32F460_SYSCREG->CMU_UPLLCFGR |= (upll_cfg.pllmDiv)       |
                                      (upll_cfg.plln << 8)     |
                                      (upll_cfg.PllrDiv << 20) |
                                      (upll_cfg.PllqDiv << 24) |
                                      (upll_cfg.PllqDiv << 28);

    amhw_hc32f460_clk_reg_write_disable();
}

/* MPLL时钟使能 */
am_static_inline
void amhw_hc32f460_clk_mpll_enable(void)
{
	amhw_hc32f460_clk_reg_write_enable();
    HC32F460_SYSCREG->CMU_PLLCR &= ~(1ul);
    amhw_hc32f460_clk_reg_write_disable();
}



/* 获取时钟源稳定状态 */
am_static_inline
int amhw_hc32f460_clk_status_get(uint32_t clk_src_id)
{
    switch (clk_src_id) {

    case CLK_XTAL:
        if ((HC32F460_SYSCREG->CMU_OSCSTBSR & (1 << 3)) != 0) {
            return 1;/*稳定*/
        } else {
            return 0;
        }
    case CLK_MPLL:
        if ((HC32F460_SYSCREG->CMU_OSCSTBSR & (1 << 5)) != 0) {
            return 1;/*稳定*/
        } else {
            return 0;
        }
    case CLK_UPLL:
        if ((HC32F460_SYSCREG->CMU_OSCSTBSR & (1 << 6)) != 0) {
            return 1;/*稳定*/
        } else {
            return 0;
        }
    case CLK_HRC:
        if ((HC32F460_SYSCREG->CMU_OSCSTBSR & (1 << 3)) != 0) {
            return 1;/*稳定*/
        } else {
            return 0;
        }
    default:
        return AM_ERROR;
    }
}

/* MPLL时钟停止 */
am_static_inline
void amhw_hc32f460_clk_mpll_disable(void)
{
    HC32F460_SYSCREG->CMU_PLLCR |= (1ul);
}

/* 系统时钟分频获取 */
am_static_inline
uint8_t amhw_hc32f460_clk_cmu_scfgr_div_get(am_clk_id_t clk_id)
{
    uint8_t clk_div = 1;
    uint8_t reg_val = 0;

    switch (clk_id) {

    case CLK_HCLK:
        reg_val = (HC32F460_SYSCREG->CMU_SCFGR >> 24) & 0X7;
        break;
    case CLK_EXCLK:
        reg_val = (HC32F460_SYSCREG->CMU_SCFGR >> 20) & 0X7;
        break;
    case CLK_PCLK4:
        reg_val = (HC32F460_SYSCREG->CMU_SCFGR >> 16) & 0X7;
        break;
    case CLK_PCLK3:
        reg_val = (HC32F460_SYSCREG->CMU_SCFGR >> 12) & 0X7;
        break;
    case CLK_PCLK2:
        reg_val = (HC32F460_SYSCREG->CMU_SCFGR >> 8) & 0X7;
        break;
    case CLK_PCLK1:
        reg_val = (HC32F460_SYSCREG->CMU_SCFGR >> 4) & 0X7;
        break;
    case CLK_PCLK0:
        reg_val = (HC32F460_SYSCREG->CMU_SCFGR >> 0) & 0X7;
        break;
    default :
        return AM_ERROR;
    }

    while(reg_val--){
        clk_div *= 2;
    }

    return clk_div;
}

/* usb时钟源获取 */
am_static_inline
am_clk_id_t amhw_hc32f460_clk_cmu_usbcks_get(void)
{
    uint32_t reg_val = 0;
    am_clk_id_t clk_id = 0;

    reg_val = (HC32F460_SYSCREG->CMU_UFSCKCFGR >> 4) &(0xF);

    switch (reg_val){

    case 2:
        clk_id = CLK_SYSCLK_DIV2;
        break;
    case 3:
        clk_id = CLK_SYSCLK_DIV3;
        break;
    case 4:
        clk_id = CLK_SYSCLK_DIV4;
        break;
    case 8:
        clk_id = CLK_MPLLP;
        break;
    case 9:
        clk_id = CLK_MPLLQ;
        break;
    case 10:
        clk_id = CLK_MPLLR;
        break;
    case 11:
        clk_id = CLK_UPLLP;
        break;
    case 12:
        clk_id = CLK_UPLLQ;
        break;
    case 13:
        clk_id = CLK_UPLLR;
        break;
    }
    return clk_id;
}

/* TPIU时钟源获取 */
am_static_inline
am_clk_id_t amhw_hc32f460_clk_cmu_tpiu_src_get(void)
{
    uint8_t reg_val = 0;

    if ((HC32F460_SYSCREG->CMU_TPIUCKCFGR & (1<<7)) == 0) {
        return AM_ERROR;
    }

    reg_val = (HC32F460_SYSCREG->CMU_TPIUCKCFGR) & (0x3ul);

    switch (reg_val) {

    case 0:
        return CLK_SYSCLK_DIV1;
    case 1:
        return CLK_SYSCLK_DIV2;
    case 2:
        return CLK_SYSCLK_DIV4;
    default:
        return AM_ERROR;
    }
}

/* I2S时钟源获取 */
am_static_inline
am_clk_id_t amhw_hc32f460_clk_i2s_src_get(am_clk_id_t clk_id)
{
    am_clk_id_t clk_src_id = 0;
    uint32_t reg_val = 0;

    reg_val = HC32F460_SYSCREG->CMU_I2SCKSEL;

    switch (clk_id) {

    case CLK_I2S1CLK:
        reg_val = (reg_val >> 0) & 0xF;
        break;
    case CLK_I2S2CLK:
        reg_val = (reg_val >> 4) & 0xF;
        break;
    case CLK_I2S3CLK:
        reg_val = (reg_val >> 8) & 0xF;
        break;
    case CLK_I2S4CLK:
        reg_val = (reg_val >> 12) & 0xF;
        break;
    default:
        return AM_ERROR;
    }

    switch (reg_val) {
        case 0:
            clk_src_id = CLK_PCLK3;
            break;
        case 8:
            clk_src_id = CLK_MPLLP;
            break;
        case 9:
            clk_src_id = CLK_MPLLQ;
            break;
        case 10:
            clk_src_id = CLK_MPLLR;
            break;
        case 11:
            clk_src_id = CLK_UPLLP;
            break;
        case 12:
            clk_src_id = CLK_UPLLQ;
            break;
        case 13:
            clk_src_id = CLK_UPLLR;
            break;
        default :
            return AM_ERROR;
    }

    return clk_src_id;
}

/**
 * \brief 使能外设
 *
 * \param[in]  peri ：需要使能的外设
 *
 * \return 无
 *
 */
void amhw_hc32f460_rcc_peripheral_enable (amhw_hc32f460_peripheral peri);

/**
 * \brief 检查某外设时钟是否使能
 *
 * \param[in]  peri ：需要使能的外设
 *
 * \return 1: 当前外设时钟已使能，无需再次使能
 *         0: 当前外设时钟未使能
 *
 */
int amhw_hc32f460_rcc_peripheral_enable_check (amhw_hc32f460_peripheral peri);

/**
 * \brief 禁能外设
 *
 * \param[in]  peri ：需要禁能的外设
 *
 * \return 无
 *
 */
void amhw_hc32f460_rcc_peripheral_disable (amhw_hc32f460_peripheral peri);


/*
 * \brief 匿名结构体段的结束
 */

#if defined(__CC_ARM)
  #pragma pop
#elif defined(__ICCARM__)
#elif defined(__GNUC__)
#elif defined(__TMS470__)
#elif defined(__TASKING__)
  #pragma warning restore
#else
  #warning Not supported compiler t
#endif

#ifdef __cplusplus
}
#endif /* __HC32F460_RCC_H */

#endif

/* end of file */
