#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "init.h"
#include "display.h"

 int main(void)
{ 
	u8 buf[5] = {0, 1, 60, 0x0d, 0x0a};
	init_sys();
	delay_ms(5000);
	while(1)
	{
		Usart_SendGroup(USART1, buf, 5);
		show_speed(buf[2], 100, BLUE);
		buf[2]++;
		delay_ms(200);
	}
	//ctp_test();	//µÁ»›∆¡≤‚ ‘
}

