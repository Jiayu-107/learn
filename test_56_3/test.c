#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void swap(char* e1, char* e2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}


//模拟qsort函数
//实现 bubble_sort 函数 的程序员，他是否知道未来排序的数据类型 - 不知道
//那程序员也不知道，待比较的两个元素的类型
void bubble_sort(void* base, int sz, int width,int(*cmp)(void*e1, void*e2))
{
	int i = 0;
	//确定趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for(j = 0; j < sz - 1 -i; j++)
		{
			//两个元素的比较
			if (cmp((char*)base + j * width,(char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}

	}
}

int cmp_int(void* e1, void* e2)
{
	return (int*)e1-(int*)e2;
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//使用 bubble_sort 函数 的程序员一定知道自己排序的是什么数据
	//就应该知道如何比较排序数组中的元素

	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	return 0;
}