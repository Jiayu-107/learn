#include<stdio.h>
int main()
{
	//打印9*9乘法表；
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//-2:左对齐，占两位；
		}
		printf("\n");
	}
	return 0;
}