#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//����һ���ǿ��������飬����ĳ��Ԫ��ֻ���ֹ�һ�Σ�����ÿ��Ԫ�ؾ��������Ρ�
//	//�ҳ��Ǹ�ֻ������һ�ε�Ԫ��
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