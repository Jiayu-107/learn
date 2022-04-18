#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
typedef struct Stu
{
	char name[20];
	short age;
	char sex[5];
	char tele[12];
}Stu;

void printf1(Stu tmp)
{
	printf("name: %s\n",tmp.name);
	printf("age: %d\n",tmp.age);
	printf("sex: %s\n",tmp.sex);
	printf("tele: %s\n",tmp.tele);

}


int main()
{
	Stu s = {"ÕÅÈý",18,"ÄÐ","18508402115"};
	printf1(s);
	return 0;
}

