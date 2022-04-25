#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;//临时变量存放在栈区，栈区的默认使用：先使用高地址处的空间，再使用地地址处的空间
			 //数组随着下标的增长，地址是由低到高变化的
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for (i = 0; i <= 19; i++)
	{
		printf("hello\n");
		arr[i] = 0;
	}

	system("pause");
	return 0;
}