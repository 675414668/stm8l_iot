#include "stm8l15x.h"

static void delay_ms(unsigned int ms)//ÑÓ³Ùº¯Êý£¬MS¼¶±ð
{
  unsigned int x,y;
  for(x = ms;x>0;x--)
    {
      for(y = 405;y>0;y--);
    }
}

void main( void )
{
  GPIO_Init(GPIOB, GPIO_Pin_1, GPIO_Mode_Out_PP_Low_Fast); 
  
  while(1)
  {
    GPIO_SetBits(GPIOB, GPIO_Pin_1);
    delay_ms(500);
    GPIO_ResetBits(GPIOB, GPIO_Pin_1);
    delay_ms(500);
  }
}
