#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		if (0 == i % 3)
		{
			printf("%d ", i);
		}
	}
	return 0;
}