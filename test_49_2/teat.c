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
	//˳���ӡ����ÿһλ�������ݹ飩
	int num, answer;
	printf("������һ���������ݣ�");
	scanf("%d", &num);
	answer = print(num);

	return 0;
}