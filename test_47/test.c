#include<stdio.h>
#include<math.h>//sqrt-一个开平方的数学库函数；
int main()
{
	//输出100~200间的素数
	//素数：除了能被自己本身和1整除的数
	int i, j;
	int count = 0;
	for (i = 100; i < 200; i++)
	{
		//for (j = 2; j < i; j++)//算法可以优化；一个数能被小于等于它开平方的数整除，那它就不是素数。
		for(j=2;j<=sqrt(i);j++)
		{
			if (0 == i % j)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ",i);
		}
	}
	printf("\ncount=%d", count);
	return 0;
}