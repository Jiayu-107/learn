#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Init(int* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d \n", arr[i]);
	}
}

void reverse(int arr[], int sz)
{
	int i, tmp = 0;
	for (i = 0; i < sz; i++)
	{
		tmp = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = tmp;
		if (i > sz - 1 - i)
		{
			break;
		}
	}


}

int main()
{
	int i = 0;
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]);
	Init(arr,sz);
	print(arr, sz);
	reverse(arr, sz);
	print(arr, sz);
	return 0;
}