#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include
using namespace std;
typedef struct stacknode
{
	char data;
	struct stacknode next;
}stacknode, linkstack;
int Initstack(linkstack& s)//��ʼ��ջ��Ԫ��
{
	s = NULL;
	return 1;
}
int Push(linkstack& s, char e)//����ջ��Ԫ��
{
	linkstack p = new stacknode;
	p->data = e;
	p->next = s;
	s = p;
	return 1;
}
int Pop(linkstack& s, char& e)//��ջ����ջ
{
	if (s == NULL)return -1;
	e = s->data;
	linkstack p = s;
	s = s->next;
	delete p;
	return 1;
}
int stackempty(linkstack s)//�п�
{
	if (s == NULL)return -1;
	return 1;
}
void gettop(linkstack s, char& x)//�õ�ջ��Ԫ��
{
	if (stackempty(s) - 1)return;
	x = s->data;
}
int Matching()//�ж������Ƿ�ƥ�䣬���ܣ�
{
	linkstack s;
	Initstack(s);
	char c, x;
	int flag = 1;
	cin >> c;
	while (c != ��#�� && flag)
	{
		switch ?
		{
		case ��)��:
		gettop(s,x);
		if (stackempty(s) != -1 && x��(��)
		Pop(s,x);
		else flag = 0;
		break;
		case��[��:
		case��(�� :
		Push(s, c);
		break;
		case ��]��:
		gettop(s,x);
		if (stackempty(s) != -1 && x == ��[��)
		Pop(s, x);
		else flag = 0;
		break;
			}
		cin >> c;
	}
	if (stackempty(s) && flag)return 1;
	else return -1;
}
int main()
{
	/ linkstack a; char e;
	Initstack(a);
	for (int i = 1; i <= 3; i++)
	{
		cin >> e;
		Push(a, e);
	}
	while (a)
	{
		Pop(a, e);
		cout << e << " ";
	} /
		if (Matching() == 1)cout << ��YES�� << endl;
		else cout << ��NO�� << endl;
}