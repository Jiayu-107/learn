#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;

}
int main()
{
	int year = 1;
	int answer;
	printf("亲，请输入年份！\n");
	scanf("%d", &year);
	answer = is_leap_year(year);
	if (1 == answer)
		printf("%d是闰年！\n", year);
	else
		printf("%d不是闰年！\n", year);
	return 0;
}


//printf leap year from 1000~2000
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//			printf("%d ", i);
//	}
//	return 0;
//}