#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int i;//全局变量不初始化 默认是0；
      //局部变量不初始化 默认是随机值；
int main()
{
	i--;
	if (i > sizeof(i))//sizeof() - 计算变量/类型所占内存的大小 >=0 无符号数
	{                 //有符号数和无符号数比较时 会把有符号数转换成无符号数
		printf(">\n");//-1转换成无符号数
	}				 //11111111111111111111111111111111 
	else             //
	{
		printf("<\n");
	}
	return 0;
}