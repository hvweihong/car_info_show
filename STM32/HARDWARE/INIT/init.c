#include "init.h"
void init_sys(void)
{
	delay_init();	    	 														//延时函数初始化	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(9600);	 															//串口初始化为9600
	LED_Init();		  																//初始化与LED连接的硬件接口
	LCD_Init();			   															//初始化LCD 	
	KEY_Init();																			//按键初始化		 	
	tp_dev.init();																	//触摸屏初始化
	init_display();																	//初始化显示界面
}
