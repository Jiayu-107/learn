#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include
using namespace std;
typedef struct lnode
{
	char data;
	struct lnode next;
}lnode, * linklist;
void Initlst(linklist& L)//��ʼ��������
{
	L = new lnode;
	L->next = NULL;
}
int getelem(linklist L, int i, char& e)//�ҵ��ڵ������е�i��Ԫ�ز�����e���
{
	linklist p = L->next;
	int j = 1;
	while (p && j < i)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i)return -1;
	e = p->data;
	return 1;
}
lnode Locateelem(linklist L, char e)//�ҵ���������dataΪe�ĵ�ַ��
{
	linklist p = L->next;
	while (p && p->data != e)
		p = p->next;
	return p;
}
int Insertelem(linklist& L, int i, char e)//�ڵڵ������е�i��λ�ò���һ��dataΪe�ĵ�λ
{
	linklist p = L; int j = 0;
	while (p && j < i - 1)
	{
		p = p->next;
		++j;
	}
	if (!p || j > i - 1)return -1;
	linklist s = new lnode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return 1;
}
int Deletelist(linklist& L, int i, char& e)//ɾ���������е�i��Ԫ��
{
	linklist p = L;
	int j = 0;
	while (p->next && j < i - 1)
	{
		p = p->next;
		++j;
	}
	if (!(p->next) || j > i - 1)return -1;
	linklist q = p->next;
	p->next = q->next;
	e = q->data;
	delete q;
	return 1;
}
void Displist(linklist L)//��ӡ������
{
	linklist p = L->next;
	while ��
	{
	cout << p->data << " ";
	p = p->next;
	}
	cout << endl;
	delete p;
}
void Creatlist_F(linklist& L, int n)//ǰ�巨��������
{
	Initlst(L);
	for (int i = 0; i < n; i++)
	{
		linklist p = new lnode;
		cin >> p->data;
		p->next = L->next;
		L->next = p;
	}
}
void Creatlist_L(linklist& L, int n)//��巨��������
{
	Initlst(L);
	linklist r = L;
	for (int i = 0; i < n; i++)
	{
		linklist p = new lnode;
		cin >> p->data;
		p->next = NULL;
		r->next = p;
		r = p;
	}
}
void mergelist(linklist& la, linklist& lb, linklist& lc)//�ϲ�������������ǰ��la��lb������
{
	linklist pa = la->next; linklist pb = lb->next; linklist pc = lc;
	while (pa && pb)
	{
		if (pa->data <= pb->data)
		{
			pc->next = pa; pc = pa; pa = pa->next;
		}
		else
		{
			pc->next = pb; pc = pb; pb = pb->next;
		}
	}
	pc->next = pa ? pa : pb;//pa?Ϊ�ж�pa�Ƿ�Ϊ��
	delete la, lb;
}
int main()
{
	linklist F, L, C;
	Initlst?;
	//Creatlist_F(F, 4);
	Creatlist_L(F, 4);
	Displist(F);
	Creatlist_L(L, 4);
	Displist(L);
	mergelist(L, F, C);
	Displist?;
	return 0;
}
