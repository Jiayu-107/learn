#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
print(int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);

}
int main()
{
	//顺序打印整型每一位（函数递归）
	int num, answer;
	printf("请输入一个整形数据：");
	scanf("%d", &num);
	answer = print(num);

	return 0;
}