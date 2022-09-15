#include "fb_lcd.h"
//#include "font.h"
/*
	字符显示的区域的大小 w h  如：楷体48;  此字体下对应的点阵为：宽x高=64x64 单位是像素点
	字符在屏幕什么地方显示 字符显示区域的左上角在屏幕的什么位置（坐标） x y
	字符的颜色color 
	字符的编码 字符编码存储在一个一维数组中(字符数组)
*/
void  Draw_word(int x,int y,int w,int h,int color,char s[],int* plcd)
{
    //1.遍历该字符数组
    int i,j,x0,y0;
    for(i=0;i<(w*h/8);i++)
    {
        for(j=7;j>=0;j--)//遍历每个元素的每一个位 从高到低
        {
            //判断该位是不是1
            if((s[i]>>j)&1)// 0010 0000 >> 5 0000 0001 & 1 == 1 
            {
                x0 = (i%(w/8))*8 +7-j+x;
                y0 = y+i/(w/8);
                //LCD_Draw_point(x0,y0,color);
                Lcd_Draw_point(plcd,x0,y0,color);
            }
        }
    }
}





