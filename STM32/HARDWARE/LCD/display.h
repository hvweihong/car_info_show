#ifndef __DISPLAY_H
#define __DISPLAY_H	

#include "sys.h"
#include "lcd.h"
#include "key.h" 
#include "touch.h"
#include "led.h"
#include "delay.h"
#include "math.h"
#define PI 3.14159
void Load_Drow_Dialog(void);
void gui_draw_hline(u16 x0,u16 y0,u16 len,u16 color);
void gui_fill_circle(u16 x0,u16 y0,u16 r,u16 color);
u16 my_abs(u16 x1,u16 x2);
void lcd_draw_bline(u16 x1, u16 y1, u16 x2, u16 y2,u8 size,u16 color);
void show_bar(u16 x0, u16 y0, u8 size, u16 value, u16 color, char *descri);
void show_speed(u8 speed, u16 length, u16 color);
void rtp_test(void);
void ctp_test(void);

#endif
