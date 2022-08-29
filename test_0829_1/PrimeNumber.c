#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for(i = 3; i < 100; i += 2)
	{
		for(j = 2; j < i; j++)
		{
			if(i % j == 0)
			{
				break;
			}
		}
		if(i == j) //证明 i 为质数
		{
			sum += i;
		}
	}
	printf("100以内质数的和为 %d\n", sum + 2);
	return 0;
}