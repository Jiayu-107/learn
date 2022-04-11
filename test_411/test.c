#include<stdio.h>
int main()
{
	int arr[5][8] = { {1,2,3,4,5},{1,2,3,4,5,6,7,8} };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int j = 0;
		for (j = 0; j < 8; j++)
		{
			printf("arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}