/*====================================================================================================*/
/*====================================================================================================*/
#include "drivers\stm32f3_system.h"
#include "modules\module_ssd1331.h"

#include "uMultimeter.h"
#include "uMultimeter_bsp.h"
/*====================================================================================================*/
/*====================================================================================================*/
void UM_Init( void )
{
  SystemInit();
  HAL_InitTick();

  UM_BSP_GPIO_Init();

  SSD1331_Config();
  delay_ms(100);

  SSD1331_Init();
  OLED_TestColoBar();
}
/*====================================================================================================*/
/*====================================================================================================*/
void UM_Loop( void )
{
  while(1) {
    LED_R_Toggle();
    LED_G_Toggle();
    LED_B_Toggle();
    delay_ms(100);
  }
}
/*====================================================================================================*/
/*====================================================================================================*/
