#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int a[4][4];
int i, j, k;

int move_up()
{
    int f = 0;//���ƶ�������f=1��û�ƶ�����Ϊ0
    for (j = 0; j < 4; j++)
    {
        for (i = 1; i < 4; i++)
        {
            if (a[i][j] != 0)//�ҵ�����0����
            {
                for (k = 0; k < i; k++)
                {
                    if (a[k][j] == 0)//���ϵĵ�һ��0
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
    int f = 0;//�ϲ�����f=1��û�Ͳ�����Ϊ0
    //�ƶ�
    int f1 = move_up();//�ƶ���f1=1
    //�ϲ�
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
    if (f == 1)//���ϲ�����ܲ����Ŀ�λ�����ƶ�
        move_up();
    return (f || f1);//�ƶ�����ϲ������򷵻�1�����򷵻�0
}

int down()
{
    int f = 0;
    //�ƶ�
    int f1 = move_down();
    //�ϲ�
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
    if (f == 1)//���ϲ�������Ŀ�λ��
        move_down();
    return (f || f1);
}

int left()
{
    int f = 0;
    //�ƶ�
    int f1 = move_left();
    //�ϲ�
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
    if (f == 1)//���ϲ�������Ŀ�λ��
        move_left();
    return (f || f1);
}

int right()
{
    int f = 0;
    //�ƶ�
    int f1 = move_right();
    //�ϲ�
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
    if (f == 1)//���ϲ�������Ŀ�λ��
        move_right();
    return (f || f1);
}


int ran()//�����
{
    int z[8] = { 2,2,2,2,2,2,2,4 };//����2�ĸ��ʱȳ���4�ĸ��ʴ�
    srand(time(NULL));
lb:
    i = rand() % 4;
    j = rand() % 4;
    //���λ�õ�ֵΪ0���������ֵ2��4��������������λ��
    if (a[i][j] == 0)
        a[i][j] = z[rand() % 8];
    else
        goto lb;
}


int fail()//ʧ��
{
    int count = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == a[i][j + 1])//�����������--����û��
            {
                return 0;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] == a[i + 1][j])//�����������--����û��
            {
                return 0;
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] == 0)//ͳ�ƿո�ĸ���
            {
                count++;
            }
        }
    }
    if (count == 0)//û�пո�
    {
        printf("\n���ź�������ɹ��Ͳ�һ���ˣ�\n");
        return 1;
    }
    return 0;
}



int main()
{
    char n;//w,s,a,d-->��������
    system("stty -icanon");//�رջ������������ַ�����س�ֱ�ӽ���
    ran();
    while (1)
    {
        //���������
        ran();
        //��ʾ
        system("clear");//����
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
        printf("\n\nw,s,a,d-->�������ң�ESC�˳���Ϸ��\n");

    lab:
        n = getchar();
        switch (n)
        {
        case 'w': //��
            if (0 == up())//���Ȳ��ƶ��ֲ��ϲ�
            {
                if (1 == fail())//�ж��ǲ�����Ϸʧ��
                    return -1;
                else
                    goto lab;
            }
            break;
        case 's': //��
            if (0 == down())
            {
                if (1 == fail())
                    return -1;
                else
                    goto lab;
            }
            break;
        case 'a': //��
            if (0 == left())
            {
                if (1 == fail())
                    return -1;
                else
                    goto lab;
            }
            break;
        case 'd': //��
            if (0 == right())
            {
                if (1 == fail())
                    return -1;
                else
                    goto lab;
            }
            break;
        case 27: //ESC
            printf("\n�˳���Ϸ��\n");
            return 0;
        default:
            goto lab;
        }
        //�ж��Ƿ�ʤ��
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if (a[i][j] == 2048)//��ֵΪ2048����Ϸʤ��
                {
                    printf("\n��ϲ�㣡��Ϸʤ����\n");
                    return 1;//�˳�
                }
            }
        }
    }

    return 0;
}