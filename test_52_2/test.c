#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//参数是数组的形式
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}

//参数是指针的形式
void print2(int(*parr)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			porintf("%d ", parr[i][j]);
			printf("%d ", parr[i] + j);
			printf("%d ",*(*(parr + i) + j));
			printf("%d ", (*(parr + i))[j]);
		}
		printf("\n");
	}


}

int main()
{
	//数组指针：二维数组传的参数是数组首元素的地址 就是第一行元素的地址
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);
	print2(arr, 3, 5);

	return 0;
}