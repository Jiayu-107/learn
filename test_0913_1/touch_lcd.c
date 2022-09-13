#include "touch_lcd.h"
/*
    Init_Touch:初始化触摸屏
*/
int Init_Touch(void)
{
    int fd = open(TOUCH_PATH,O_RDONLY);//触摸屏是只读的
    if(-1 == fd)
    {
        perror("open touch fail");
        return -1;
    }
    return fd;
}

/*关闭触摸屏*/
int Unint_Touch(int fd)
{
    close(fd);
}

/*
    Get_Usr_Touch_Input:获取用户在触摸屏按下的坐标值 x  y
    @fd:触摸屏描述符
    @touch_struct:结构体指针 指向的结构体是用来保存用户的输入的
    返回值:
        
*/
int Get_Usr_Touch_Input(int fd,Touch *touch_struct)
{
    if(fd < 0 || touch_struct == NULL) return -1;
    //轮询等待用户输入
    struct input_event ev;//用来保存读取出来的信息
    int flag_x = 0,flag_y = 0;
    while(1)
    {
        int res = read(fd,&ev,sizeof(ev));
        //假设我读出来的字节不是ev的大小 那就重新读
        if(res<0 || res != sizeof(ev)) continue;
        //获取x轴坐标的值
        if(ev.type == EV_ABS && ev.code == ABS_X)
        {
            touch_struct->x = ev.value*(1.0*800/1024);
            flag_x = 1;
            if(flag_y) break;
        }
        //获取y轴坐标的值
        if(ev.type == EV_ABS && ev.code == ABS_Y)
        {
            touch_struct->y = ev.value*(1.0*480/600);
            flag_y = 1;
            if(flag_x) break;
        }
        //当x y当获取完了之后就可以退出了
    }
    return 0;
}