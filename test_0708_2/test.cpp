#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include
using namespace std;
#define maxsize 100//�ɴ�100��
typedef struct
{
	char base;
	char top;
	int stacksize;
}sqstack;
int Initstack(sqstack& s)//��ʼ��˳��ջ
{
	s.base = new char[maxsize];
	if (!s.base)exit(OVERFLOW);
	s.top = s.base;
	s.stacksize = maxsize;
	return 1;
}
int Push(sqstack& s, char e)//����Ԫ��eΪ�µ�ջ��Ԫ��
{
	if (s.top - s.base == s.stacksize)return -1;
	*s.top++ = e;
	return 1;
}
int Pop(sqstack& s, char& e)//��ջ����ջ
{
	if (s.top == s.base)return -1;
	e = �Cs.top;
	return 1;
}
int GetTop(sqstack s, char& e)//��ȡջ��Ԫ��
{
	if (s.top == s.base)return -1;
	e = �Cs.top;
	return 1;
}
int main()
{
	sqstack a; char e;
	Initstack(a);
	for (int i = 1; i <= 3; i++)
	{
		cin >> e;
		Push(a, e);
	}
	Pop(a, e);
	GetTop(a, e);
	cout << e;
}