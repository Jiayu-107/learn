#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����һ���ṹ������ - struct Stu
struct Stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	//ʹ��struct Stu ������ʹ�����һ��ѧ������s1������ʼ��
	struct Stu s1 = {"����",20,"201916180118"};
	struct Stu* p = &s1;

	printf("%s\n", (*p).name);
	printf("%d\n", (*p).age);
	printf("%s\n\n", (*p).id);

	//�ṹ��ָ��->��Ա��
	printf("%s\n",p->name);
	printf("%d\n", p->age);
	printf("%s\n\n", p->id);

	//�ṹ�����.��Ա��
	printf("%s\n",s1.name);
	printf("%d\n",s1.age);
	printf("%s\n", s1.id);
	return 0;
}