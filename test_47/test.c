#include<stdio.h>
#include<math.h>//sqrt-һ����ƽ������ѧ�⺯����
int main()
{
	//���100~200�������
	//�����������ܱ��Լ������1��������
	int i, j;
	int count = 0;
	for (i = 100; i < 200; i++)
	{
		//for (j = 2; j < i; j++)//�㷨�����Ż���һ�����ܱ�С�ڵ�������ƽ�����������������Ͳ���������
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