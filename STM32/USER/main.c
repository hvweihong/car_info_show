#include "math.h"
#include "led.h"
#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "lcd.h"
#include "key.h"  
#include "24cxx.h" 
#include "myiic.h"
#include "touch.h"
#include "display.h"

 int main(void)
{ 
	u8 buf[5] = {0, 1, 60, 0x0d, 0x0a};
	int loop_index = 0;
	delay_init();	    	 //延时函数初始化	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(9600);	 	//串口初始化为9600
	LED_Init();		  		//初始化与LED连接的硬件接口
	LCD_Init();			   	//初始化LCD 	
	KEY_Init();				//按键初始化		 	
	tp_dev.init();			//触摸屏初始化
	POINT_COLOR=RED;//设置字体为红色 
	LCD_ShowString(60,50,200,16,16,"project:car info display");	
	LCD_ShowString(60,70,200,16,16,"author: weidi.wang");	
	LCD_ShowString(60,90,200,16,16,"date:   2017/4/4");
	//画表盘
	for(loop_index=0; loop_index < 4; loop_index++)
	{
		LCD_Draw_Circle(lcddev.width/2, lcddev.height*5/6, (lcddev.height/3 + loop_index));
	}
	
	for(loop_index=0; loop_index <= 180; loop_index+=30)
	{
		if(loop_index > 90)
		{
			LCD_ShowNum(380 - 180*cos(loop_index*PI/180.0), 400 - 180*sin(loop_index*PI/180.0), loop_index + 30, 3, 16);
		}else
		{
			LCD_ShowNum(400 - 180*cos(loop_index*PI/180.0), 400 - 180*sin(loop_index*PI/180.0), loop_index + 30, 3, 16);
		}
	}
	//LCD_ShowNum(247, 310, 60, 3, 16);
	gui_fill_circle(lcddev.width/2, lcddev.height*5/6, 8, BLUE);
	
	show_speed(20, 100, BLUE);
	
	//画刻度
	for(loop_index=0; loop_index < lcddev.width; loop_index +=50)
	{
		LCD_DrawLine(loop_index, (lcddev.height - 5), loop_index, lcddev.height);	
	}
	show_bar(100, 450, 50, 100, GREEN , "V");
	show_bar(700, 450, 50, 100, GREEN , "C");
	delay_ms(5000);
	delay_ms(5000);
	while(1)
	{
		//printf("fsdgdfhdhd\r\n");
		Usart_SendGroup(USART1, buf, 5);
		show_speed(buf[2], 100, BLUE);
		buf[2]++;
		delay_ms(200);
	}
//	if(tp_dev.touchtype&0X80)ctp_test();	//电容屏测试
//	else rtp_test(); 						//电阻屏测试
}

