#include<stdio.h>
int main()
{
	//��ӡ9*9�˷���
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//-2:����룬ռ��λ��
		}
		printf("\n");
	}
	return 0;
}