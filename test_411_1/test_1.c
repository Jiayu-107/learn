#include<stdio.h>

void bubble_sort(int arr[], int sz)
//void bubble_sort(int* arr,int sz) It is fine too.
{
	//确定冒泡排序的趟数；

	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//确定冒泡排序的每趟比较的次数；
		int flag = 1;//假设这一趟排序的数据已经有序；
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				flag = 0;//本躺排序的数据其实不完全有序；

			}
		}
		if (1 == flag)
		{
			break;
		}
	}
	
}
int main()
{
	//实现冒泡排序法；

	int i = 0;
	int arr[] = {9,10,7,6,4,5,3,2,1,8,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，排成升序；
	//arr是数组，我们对数组进行传参，实际上传过去的是数组首元素的地址 &arr[0];

	bubble_sort(arr, sz);//冒泡排序函数
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}