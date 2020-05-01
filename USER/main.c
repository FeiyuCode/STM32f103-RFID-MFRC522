#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "rc522.h"
#include "led.h"
#include "beep.h"

/**
*   连线说明：
*   1--SDA  <----->PA4
*   2--SCK  <----->PA5
*   3--MOSI <----->PA7
*   4--MISO <----->PA6
*   5--悬空
*   6--GND <----->GND
*   7--RST <----->PB0
*   8--VCC <----->VCC
**/

int main(void)
{
    delay_init();	    	 //延时函数初始化
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置中断优先级分组为组2：2位抢占优先级，2位响应优先级
    uart_init(115200);	 	//串口初始化为115200
    RC522_Init();       //初始化射频卡模块
    LED_Init();
    BEEP_Init();
	
    while(1)
    {
        RC522_Handel();
    }
}

