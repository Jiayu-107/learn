#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<iostream>
using namespace std;
int m = 0;
void Hanoi(int n, char A, char B, char C)//AҪ�ϵ���������С��󣬽�A�ϵ������Ƶ�C�ϣ�Ҫ�ϵ�����С���
{
	if (n == 1)
		m++;//���һ������
	else
	{
		Hanoi(n - 1, A, C, B);//ǰn-1���Ƶ�B��
		m++;//����n�������Ƶ�C�ϣ�
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