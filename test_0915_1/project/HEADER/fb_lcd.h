#ifndef FB_LCD_H
#define FB_LCD_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h> 
#include <sys/mman.h>
#include <stdlib.h>

#define FB_PATH "/dev/fb0"

void *Init_Lcd(int *fd);
int Uninit_Lcd(int fd,int *plcd);
int Lcd_Draw_point(int* plcd,int x,int y,int color);
int Bmp_display(const char *bmp_file,int x0,int y0,int *plcd);
int Matrix_Display(int x,int y,int w,int h,int color,int *plcd);
#endif 