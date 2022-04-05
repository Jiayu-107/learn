#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "I like running!";
	char arr2[] = "###############";
	int left = 0;
	//int righr = sizeof(arr1) / sizeof(arr1[0]) - 2;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s", arr2);
		Sleep(1000);//休息一秒再打印 单位为ms
		system("cls");//执行系统命令的一个函数-cls-清空屏幕（Windows下）
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}