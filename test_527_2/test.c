#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>

int main()
{
	while (1)
	{
		Sleep(10000);//睡眠函数 windows下单位为ms Sleep（）
					 //        linux下单位为s   sleep（）
		printf("hehe");

	}
	
	return 0;
}
