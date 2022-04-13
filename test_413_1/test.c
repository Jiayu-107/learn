#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//给定一个非空整数数组，除了某个元素只出现过一次，其余每个元素均出现两次。
//	//找出那个只出现了一次的元素
//	int i = 0;
//	int arr[] = {4,1,2,1,2};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//				count++;
//		}
//		if (1 == count)
//		{
//			printf("%d\n",arr[i]);
//		}
//	}
//	return 0;
//}



int main()
{
	int i = 0;
	int ret = 0;
	int arr[] = {4,1,2,1,2};
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("%d", ret);

	return 0;
}