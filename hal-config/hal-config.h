#ifndef HAL_CONFIG_H
#define HAL_CONFIG_H

#include "em_device.h"
#include "hal-config-types.h"

// This file is auto-generated by Hardware Configurator in Simplicity Studio.
// Any content between $[ and ]$ will be replaced whenever the file is regenerated.
// Content outside these regions will be preserved.

// $[ANTDIV]
// [ANTDIV]$

// $[BTL_BUTTON]
// [BTL_BUTTON]$

// $[BUTTON]
// [BUTTON]$

// $[CMU]
#define HAL_CLK_HFCLK_SOURCE               (HAL_CLK_HFCLK_SOURCE_HFRCODPLL)
#define HAL_CLK_PLL_CONFIGURATION          (HAL_CLK_PLL_CONFIGURATION_76_8MHZ)
#define HAL_CLK_EM01CLK_SOURCE             (HAL_CLK_HFCLK_SOURCE_HFRCODPLL)
#define HAL_CLK_EM23CLK_SOURCE             (HAL_CLK_LFCLK_SOURCE_DISABLED)
#define HAL_CLK_EM4CLK_SOURCE              (HAL_CLK_LFCLK_SOURCE_DISABLED)
#define HAL_CLK_RTCCCLK_SOURCE             (HAL_CLK_LFCLK_SOURCE_DISABLED)
#define HAL_CLK_WDOGCLK_SOURCE             (HAL_CLK_LFCLK_SOURCE_LFRCO)
#define BSP_CLK_HFXO_CTUNE                 (-1)
#define BSP_CLK_LFXO_PRESENT               (0)
#define BSP_CLK_LFXO_INIT                   CMU_LFXOINIT_DEFAULT
#define BSP_CLK_LFXO_FREQ                  (32768U)
#define BSP_CLK_LFXO_CTUNE                 (0U)
#define HAL_CLK_LFXO_PRECISION             (500UL)
#define HAL_CLK_LFRCO_PRECISION            (0)
// [CMU]$

// $[COEX]
// [COEX]$

// $[DCDC]
#define HAL_DCDC_BYPASS                    (0)
// [DCDC]$

// $[EMU]
// [EMU]$

// $[EUART0]
// [EUART0]$

// $[EXTFLASH]
// [EXTFLASH]$

// $[EZRADIOPRO]
// [EZRADIOPRO]$

// $[FEM]
// [FEM]$

// $[GPIO]
// [GPIO]$

// $[I2C0]
// [I2C0]$

// $[I2C1]
#define PORTIO_I2C1_SCL_PIN                (3U)
#define PORTIO_I2C1_SCL_PORT               (gpioPortC)

#define PORTIO_I2C1_SDA_PIN                (2U)
#define PORTIO_I2C1_SDA_PORT               (gpioPortC)

#define HAL_I2C1_ENABLE                    (1)

#define BSP_I2C1_SCL_PIN                   (3U)
#define BSP_I2C1_SCL_PORT                  (gpioPortC)

#define BSP_I2C1_SDA_PIN                   (2U)
#define BSP_I2C1_SDA_PORT                  (gpioPortC)

#define HAL_I2C1_INIT_ENABLE               (0)
// [I2C1]$

// $[I2CSENSOR]
// [I2CSENSOR]$

// $[IADC0]
// [IADC0]$

// $[IOEXP]
// [IOEXP]$

// $[LED]
// [LED]$

// $[LETIMER0]
// [LETIMER0]$

// $[LFXO]
// [LFXO]$

// $[MODEM]
// [MODEM]$

// $[PA]
// [PA]$

// $[PDM]
// [PDM]$

// $[PORTIO]
// [PORTIO]$

// $[PRS]
// [PRS]$

// $[PTI]
#define PORTIO_PTI_DFRAME_PIN              (5U)
#define PORTIO_PTI_DFRAME_PORT             (gpioPortC)

#define PORTIO_PTI_DOUT_PIN                (4U)
#define PORTIO_PTI_DOUT_PORT               (gpioPortC)

#define HAL_PTI_ENABLE                     (1)

#define BSP_PTI_DFRAME_PIN                 (5U)
#define BSP_PTI_DFRAME_PORT                (gpioPortC)

#define BSP_PTI_DOUT_PIN                   (4U)
#define BSP_PTI_DOUT_PORT                  (gpioPortC)

#define HAL_PTI_MODE                       (HAL_PTI_MODE_UART)
#define HAL_PTI_BAUD_RATE                  (1600000UL)
// [PTI]$

// $[RSSI]
// [RSSI]$

// $[SERIAL]
// [SERIAL]$

// $[SPIDISPLAY]
// [SPIDISPLAY]$

// $[SPINCP]
// [SPINCP]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[TIMER2]
// [TIMER2]$

// $[TIMER3]
// [TIMER3]$

// $[TIMER4]
// [TIMER4]$

// $[UARTNCP]
// [UARTNCP]$

// $[USART0]
// [USART0]$

// $[USART1]
// [USART1]$

// $[VCOM]
// [VCOM]$

// $[VUART]
// [VUART]$

// $[WDOG]
// [WDOG]$

#if defined(_SILICON_LABS_MODULE)
#include "sl_module.h"
#endif

#endif /* HAL_CONFIG_H */

