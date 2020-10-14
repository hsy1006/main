/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* 文件名  ： led
* 作者    ： HuangShuyi
* 版本    ： V1.0.0
* 时间    ： 2020/10/14
* 简要    ： Led驱动文件  
********************************************************************
* 副本
*
*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* 头文件 ----------------------------------------------------------------*/
#include "led.h"
/* 宏定义 ----------------------------------------------------------------*/
#define LED1 P1_0
#define LED2 P1_1
#define LED3 P1_4
#define LED_ON 0
#define LED_OFF 1
/* 结构体或枚举 ----------------------------------------------------------*/
/* 内部函数声明 ----------------------------------------------------------*/



/* 函数 ------------------------------------------------------------------*/
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：LedInit
* 参数：void
* 返回：void
* 描述：Led初始化
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void LedInit(void)
{
    //P1SEL对应位设置为通用IO（清0）
    P1SEL &= 0xEC;
    //P1DIR对应位设置为输出（置1）
    P1DIR |= 0x13;
    //P1对应位设置为灭灯状态（置1）
    P1 |= 0x13;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：LedOn
* 参数：unsigned char ucLedNum
* 返回：void
* 描述：开灯
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
//0 所有灯亮；1 D1亮；2 D2亮；3 D3亮
void LedOn(unsigned char ucLedNum)
{
    switch(ucLedNum)
    {
        case 0:
            LED1 = LED_ON;
            LED2 = LED_ON;
            LED3 = LED_ON;
            break;
        case 1:
            LED1 = LED_ON;
            break;
        case 2:
            LED2 = LED_ON;
            break;
        case 3:
            LED3 = LED_ON;
            break;
        default:
            break;
    }  
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：LedOff
* 参数：unsigned char ucLedNum
* 返回：void
* 描述：关灯
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
//0 所有灯灭；1 D1灭；2 D2灭；3 D3灭
void LedOff(unsigned char ucLedNum)
{
    switch(ucLedNum)
    {
        case 0:
            LED1 = LED_OFF;
            LED2 = LED_OFF;
            LED3 = LED_OFF;
            break;
        case 1:
            LED1 = LED_OFF;
            break;
        case 2:
            LED2 = LED_OFF;
            break;
        case 3:
            LED3 = LED_OFF;
            break;
        default:
            break;
    } 
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：LedToggle
* 参数：unsigned char ucLedNum
* 返回：void
* 描述：函数说明
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void LedToggle(unsigned char ucLedNum)
{
  
}

