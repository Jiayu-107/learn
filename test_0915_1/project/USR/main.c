#include "fb_lcd.h"
#include "touch_lcd.h"
#include "fb_lcd.h"
#include <stdio.h>

int main()
{
    int fb_fd;
    int *plcd;
    if((plcd = Init_Lcd(&fb_fd)) == NULL)//初始化失败
    {
        return -1;
    }
    #if 0
    //全屏实现成绿色
    int i,j;
    for(j=0;j<480;j++)
    {
        for(i=0;i<800;i++)
        {
            if(Lcd_Draw_point(plcd,i,j,0xff00)==-1)
            {
                printf("Draw %d %d fail\n",i,j);
                return -1;
            }
        }
    }
    #endif

    Matrix_Display(0,0,800,480,0xFF00,plcd);
    //Bmp_display("2.bmp",0,0,plcd);//相对路径
    

    //测试一下 触摸屏 当用户点击的时候就把x y的信息打印出来
    Touch Usr_touch;
    int touch_fd = Init_Touch();
    while(1)
    {
        Get_Usr_Touch_Input(touch_fd,&Usr_touch);
        printf("touch x:%d y:%d\n",Usr_touch.x,Usr_touch.y);
    }
    //解除初始化屏幕
    Uninit_Lcd(fb_fd,plcd);
    Unint_Touch(touch_fd);
    return 0;
}