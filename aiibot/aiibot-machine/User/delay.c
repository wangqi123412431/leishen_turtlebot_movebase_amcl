/**
  ******************************************************************************
  * @file    delay.c
  * @author  liu.c
  * @version V1.0
  * @date    2015��8��5��09:58:24
  * @brief   all delay code
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:stm32Board
  * ��̳    :http://www.aiiage.com
  *
  ******************************************************************************
  */
	
#include "delay.h"
//nCount=6ʱ����Լ1us,nCount=5900ʱ����Լ1ms;nCount=5900000,Ϊ1��
void Delay(__IO uint32_t nCount)	 //�򵥵���ʱ����
{
 	for(; nCount != 0; nCount--);
}