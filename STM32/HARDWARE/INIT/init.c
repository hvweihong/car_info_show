#include "init.h"
void init_sys(void)
{
	delay_init();	    	 														//��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(9600);	 															//���ڳ�ʼ��Ϊ9600
	LED_Init();		  																//��ʼ����LED���ӵ�Ӳ���ӿ�
	LCD_Init();			   															//��ʼ��LCD 	
	KEY_Init();																			//������ʼ��		 	
	tp_dev.init();																	//��������ʼ��
	init_display();																	//��ʼ����ʾ����
}
