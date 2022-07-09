#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<iostream>
using namespace std;
int m = 0;
void Hanoi(int n, char A, char B, char C)//A要上到下盘子由小变大，将A上的盘子移到C上（要上到下由小变大）
{
	if (n == 1)
		m++;//最后一个盘子
	else
	{
		Hanoi(n - 1, A, C, B);//前n-1个移到B上
		m++;//将第n个盘子移到C上；
		Hanoi(n - 1, B, A, C);
	}
}
int main()
{
	char A = 'a', B = 'b', C = 'c';
	Hanoi(4, A, B, C);
	cout << m;
	return 0;
}