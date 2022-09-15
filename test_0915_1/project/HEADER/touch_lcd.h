#ifndef TOUCH_LCD_H
#define TOUCH_LCD_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <linux/input.h>

#define TOUCH_PATH "/dev/input/event0"

typedef struct//定义一个结构体 用户获取用户输入
{
    int x;
    int y;
}Touch;

int Init_Touch(void);
int Unint_Touch(int fd);
int Get_Usr_Touch_Input(int fd,Touch *touch_struct);

#endif 