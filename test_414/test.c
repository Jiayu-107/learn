#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//创建一个结构体类型 - struct Stu
struct Stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	//使用struct Stu 这个类型创建了一个学生对象s1，并初始化
	struct Stu s1 = {"张三",20,"201916180118"};
	struct Stu* p = &s1;

	printf("%s\n", (*p).name);
	printf("%d\n", (*p).age);
	printf("%s\n\n", (*p).id);

	//结构体指针->成员名
	printf("%s\n",p->name);
	printf("%d\n", p->age);
	printf("%s\n\n", p->id);

	//结构体变量.成员名
	printf("%s\n",s1.name);
	printf("%d\n",s1.age);
	printf("%s\n", s1.id);
	return 0;
}