#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include
using namespace std;
typedef struct pnode
{
	float coef;//ϵ��
	int expn;//ָ��
	struct pnode next;
}pnode, polyn;
void creatpolyn(polyn& p, int n)//��������ʽ����Ĵ�������
{
	p = new pnode;
	p->next = NULL;
	for (int i = 1; i <= n; i++)
	{
		polyn s = new pnode;
		cin >> s->coef >> s->expn;
		polyn pre = p;
		polyn q = p->next;
		while (q && q->expn < s->expn)
		{
			pre = q;
			q = q->next;
		}
		s->next = q;
		pre->next = s;
	}
}
void addpolyn(polyn& pa, polyn& pb)
{
	polyn p1 = pa->next; polyn p2 = pb->next;
	polyn p3 = pa;
	while (p1 && p2)
	{
		if (p1->expn == p2->expn)
		{
			float sum = p1->coef + p2->coef;
			if (sum != 0)//�η���ͬ����Ӳ�Ϊ0
			{
				p1->coef = sum;
				p3->next = p1; p3 = p1;
				p1 = p1->next;
				polyn r = p2; p2 = p2->next; delete r;
			}
			else //�η���ͬ���Ϊ0
			{
				polyn r = p2; p2 = p2->next; delete r;
				r = p1; p1 = p1->next; delete r;
			}
		}
		else if (p1->expn < p2->expn)//p1�Ĵη�С��p2��
		{
			p3->next = p1;
			p3 = p1;
			p1 = p1->next;
		}
		else//p2�Ĵη�С��p1��
		{
			p3->next = p2;
			p3 = p2;
			p2 = p2->next;
		}
	}
	p3->next = p1 ? p1 : p2;
	delete pb;
}
void Displist(polyn L)//��ӡ����
{
	polyn p = L->next;
	while ��
	{
	cout << ��ϵ��:�� << p->coef << ���η� : �� < expn << " ";
	p = p->next;
	}
	cout << endl;
	delete p;
}
int main()
{
	polyn a, b;
	creatpolyn(a, 4);
	Displist(a);
	creatpolyn(b, 4);
	Displist(b);
	addpolyn(a, b);
	Displist(a);
	return 0;
}