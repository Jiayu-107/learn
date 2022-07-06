#define _CRT_SECURE_NO_WARNINGS 1

#include
#include<stdio.h>
using namespace std;
#define MAXSIZE 100
typedef struct {
	char* elem;
	int length;
}sqlist, * sqlistp;
void Initlist(sqlist& L)//�������Ա�
{
	L.elem = new char[MAXSIZE];
	if (!L.elem)exit(OVERFLOW);//�ڴ治�㵯������
	L.length = 0;
}
int Locateelem(sqlist L, char e)//��λԪ��
{
	for (int i = 0; i < L.length; i++)
	{
		if (L.elem[i] == e)return i + 1;//�ҵ������±�
	}
	return -1;//δ�ҵ�����-1
}
int Insertelem(sqlist& L, int i, char e)//����Ԫ��,��e���뵽��i��λ����
{
	if (i<1 || i>L.length + 1)return 0;
	if (L.length == MAXSIZE)return 0;
	for (int j = L.length - 1; j >= i - 1; j�C)
		L.elem[j + 1] = L.elem[j];
	L.elem[i - 1] = e;
	++L.length;
	return 1;
}
int Deleteelem(sqlist& L, int i, char& e)//ɾ����i��Ԫ�أ�����e���ص�i��Ԫ�ص�ֵ
{
	if (i<1 || i>L.length)return -1;
	e = L.elem[i - 1];
	for (int j = i; j <= L.length; j++)
		L.elem[j - 1] = L.elem[j];
	�CL.length;
	return 1;
}
void getelem(sqlist L, int i, char& e)//���ص�i��Ԫ��
{
	e = L.elem[i - 1];
}
void Displist(sqlist L)//������Ա�
{
	for (int i = 1; i <= L.length; i++)
		printf("%c ��, L.elem[i - 1]);
			printf(��\n");
}
void Union(sqlist& la, sqlist lb)//��B������A������
{
	char e;
	for (int i = 1; i <= lb.length; i++)
	{
		getelem(lb, i, e);
		if (Locateelem(la, e) == -1)
		{
			int i = la.length;
			Insertelem(la, ++i, e);
		}
	}
}
void mergelist(sqlist la, sqlist lb, sqlist& lc)//˳���ĺϲ���ǰ����la��lbΪ˳���
{
	char* pa = la.elem; char* pb = lb.elem; char* pa_end = pa + la.length - 1; char* pb_end = pb + lb.length - 1;
	lc.length = la.length + lb.length;
	lc.elem = new char[lc.length];
	char* pc = lc.elem;
	while (pa <= pa_end && pb <= pb_end)
	{
		if (*pa <= *pb)
			*pc++ = *pa++;
		else *pc++ = pb++;
	}
	while (pa <= pa_end)
	{
		pc++ = pa++;
	}
	while (pb <= pb_end)
	{
		pc++ = pb++;
	}
}
int main()
{
	sqlist LA, LB, LC; int n; char e;
	cin >> n;
	Initlist(LA);
	Initlist(LC);
	Initlist(LB);
	for (int i = 1; i <= n; i++)
	{
		cin >> e;
		Insertelem(LA, i, e);
	}
	Displist(LA);
	for (int i = 1; i <= n; i++)
	{
		cin >> e;
		Insertelem(LB, i, e);
	}
	Displist(LB);
	// Union(LA, LB);
	mergelist(LA, LB, LC);
	Displist(LC);
	return 0;
}