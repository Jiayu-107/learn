#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int a[4][4];
int i, j, k;

int move_up()
{
    int f = 0;//有移动过，则f=1，没移动过则为0
    for (j = 0; j < 4; j++)
    {
        for (i = 1; i < 4; i++)
        {
            if (a[i][j] != 0)//找到不是0的数
            {
                for (k = 0; k < i; k++)
                {
                    if (a[k][j] == 0)//其上的第一个0
                    {
                        a[k][j] = a[i][j];
                        a[i][j] = 0;
                        f = 1;
                        break;
                    }
                }
            }
        }
    }
    return f;
}

int move_down()
{
    int f = 0;
    for (j = 0; j < 4; j++)
    {
        for (i = 2; i >= 0; i--)
        {
            if (a[i][j] != 0)
            {
                for (k = 3; k > i; k--)
                {
                    if (a[k][j] == 0)
                    {
                        a[k][j] = a[i][j];
                        a[i][j] = 0;
                        f = 1;
                        break;
                    }
                }
            }
        }
    }
    return f;
}

int move_left()
{
    int f = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 1; j < 4; j++)
        {
            if (a[i][j] != 0)
            {
                for (k = 0; k < j; k++)
                {
                    if (a[i][k] == 0)
                    {
                        a[i][k] = a[i][j];
                        a[i][j] = 0;
                        f = 1;
                        break;
                    }
                }
            }
        }
    }
    return f;
}

int move_right()
{
    int f = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 2; j >= 0; j--)
        {
            if (a[i][j] != 0)
            {
                for (k = 3; k > j; k--)
                {
                    if (a[i][k] == 0)
                    {
                        a[i][k] = a[i][j];
                        a[i][j] = 0;
                        f = 1;
                        break;
                    }
                }
            }
        }
    }
    return f;
}


int up()
{
    int f = 0;//合并过，f=1，没和并过则为0
    //移动
    int f1 = move_up();//移动过f1=1
    //合并
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 3; i++)
        {
            if (a[i][j] == a[i + 1][j] && a[i][j] != 0)
            {
                a[i][j] = 2 * a[i][j];
                a[i + 1][j] = 0;
                f = 1;
            }
        }
    }
    if (f == 1)//若合并后可能产生的空位，再移动
        move_up();
    return (f || f1);//移动过或合并过，则返回1；否则返回0
}

int down()
{
    int f = 0;
    //移动
    int f1 = move_down();
    //合并
    for (j = 0; j < 4; j++)
    {
        for (i = 3; i > 0; i--)
        {
            if (a[i][j] == a[i - 1][j] && a[i][j] != 0)
            {
                a[i][j] = 2 * a[i][j];
                a[i - 1][j] = 0;
                f = 1;
            }
        }
    }
    if (f == 1)//若合并后产生的空位，
        move_down();
    return (f || f1);
}

int left()
{
    int f = 0;
    //移动
    int f1 = move_left();
    //合并
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == a[i][j + 1] && a[i][j] != 0)
            {
                a[i][j] = 2 * a[i][j];
                a[i][j + 1] = 0;
                f = 1;
            }
        }
    }
    if (f == 1)//若合并后产生的空位，
        move_left();
    return (f || f1);
}

int right()
{
    int f = 0;
    //移动
    int f1 = move_right();
    //合并
    for (i = 3; i >= 0; i--)
    {
        for (j = 3; j > 0; j--)
        {
            if (a[i][j] == a[i][j - 1] && a[i][j] != 0)
            {
                a[i][j] = 2 * a[i][j];
                a[i][j - 1] = 0;
                f = 1;
            }
        }
    }
    if (f == 1)//若合并后产生的空位，
        move_right();
    return (f || f1);
}


int ran()//随机数
{
    int z[8] = { 2,2,2,2,2,2,2,4 };//出现2的概率比出现4的概率大
    srand(time(NULL));
lb:
    i = rand() % 4;
    j = rand() % 4;
    //随机位置的值为0，则随机赋值2或4；否则继续找随机位置
    if (a[i][j] == 0)
        a[i][j] = z[rand() % 8];
    else
        goto lb;
}


int fail()//失败
{
    int count = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == a[i][j + 1])//左右相邻相等--》还没输
            {
                return 0;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] == a[i + 1][j])//上下相邻相等--》还没输
            {
                return 0;
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] == 0)//统计空格的个数
            {
                count++;
            }
        }
    }
    if (count == 0)//没有空格
    {
        printf("\n很遗憾！你离成功就差一点了！\n");
        return 1;
    }
    return 0;
}



int main()
{
    char n;//w,s,a,d-->上下左右
    system("stty -icanon");//关闭缓冲区，输入字符无需回车直接接受
    ran();
    while (1)
    {
        //产生随机数
        ran();
        //显示
        system("clear");//清屏
        printf("\n---------------------------------\n");
        for (i = 0; i < 4; i++)
        {
            printf("|");
            for (j = 0; j < 4; j++)
            {
                if (a[i][j] == 0)
                    printf("       |");
                else
                    printf("%5d  |", a[i][j]);
            }
            printf("\n---------------------------------\n");
        }
        printf("\n\nw,s,a,d-->上下左右；ESC退出游戏！\n");

    lab:
        n = getchar();
        switch (n)
        {
        case 'w': //上
            if (0 == up())//若既不移动又不合并
            {
                if (1 == fail())//判断是不是游戏失败
                    return -1;
                else
                    goto lab;
            }
            break;
        case 's': //下
            if (0 == down())
            {
                if (1 == fail())
                    return -1;
                else
                    goto lab;
            }
            break;
        case 'a': //左
            if (0 == left())
            {
                if (1 == fail())
                    return -1;
                else
                    goto lab;
            }
            break;
        case 'd': //右
            if (0 == right())
            {
                if (1 == fail())
                    return -1;
                else
                    goto lab;
            }
            break;
        case 27: //ESC
            printf("\n退出游戏！\n");
            return 0;
        default:
            goto lab;
        }
        //判断是否胜利
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if (a[i][j] == 2048)//数值为2048，游戏胜利
                {
                    printf("\n恭喜你！游戏胜利！\n");
                    return 1;//退出
                }
            }
        }
    }

    return 0;
}