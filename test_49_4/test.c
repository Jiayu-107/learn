#include<stdio.h>
int binary_search(int arr[], int k,int sz)
{
	int left = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(arr)算的是指针的大小，64位平台为8个字节；
	                                        //sizeof(srr[0])算的是int类型的大小，为4个字节；
                                            //所以说应该在主函数内算出数组的元素的个数，以便算出数组右下标；
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			left = mid + 1;
		}
		else if (arr[mid] < k)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
	return -1;
	
}
int main()
{
	//创建一个二分查找函数；
	//在一个有序数组中查找具体的某个数
	//如果找到了返回这个数的下标和这个数；找不到返回-1；
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 5;
	int ret = binary_search(arr, k,sz);//传过去的数组arr首元素的地址；
	if (-1 == ret)
		printf("找不到指定的数字！");
	else
		printf("找到了!下标是%d; 数字是%d\n", ret,arr[ret]);
	return 0;
}