#include <stdio.h>

//定义一个结构体
struct student
{
	int num; //学号
	char name[512]; //姓名
	int score;  //成绩
};


int main()
{
	struct student s;
	scanf("%d", &s.num);
	scanf("%s", &s.name);
	scanf("%d", &s.score);
	printf("num=%d,name=%s,score=%d\n", s.num, s.name, s.score);
}

