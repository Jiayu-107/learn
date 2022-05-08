#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1); //把数组的地址转换成 int*类型的地址
	printf("%d %d", *(a + 1), *(ptr - 1));//a数组名表示的首地址 a + 1 再解引用 输出为整型 那就是指向 数组第二个元素 为2
										 //5
	return 0;
}