#include<stdio.h>

void bubble_sort(int arr[], int sz)
//void bubble_sort(int* arr,int sz) It is fine too.
{
	//ȷ��ð�������������

	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//ȷ��ð�������ÿ�˱ȽϵĴ�����
		int flag = 1;//������һ������������Ѿ�����
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				flag = 0;//���������������ʵ����ȫ����

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
	//ʵ��ð�����򷨣�

	int i = 0;
	int arr[] = {9,10,7,6,4,5,3,2,1,8,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��arr���������ų�����
	//arr�����飬���Ƕ�������д��Σ�ʵ���ϴ���ȥ����������Ԫ�صĵ�ַ &arr[0];

	bubble_sort(arr, sz);//ð��������
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}