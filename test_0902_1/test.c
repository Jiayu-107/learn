#include <stdio.h>

//����һ���ṹ��
struct student
{
	int num; //ѧ��
	char name[512]; //����
	int score;  //�ɼ�
};


int main()
{
	struct student s;
	scanf("%d", &s.num);
	scanf("%s", &s.name);
	scanf("%d", &s.score);
	printf("num=%d,name=%s,score=%d\n", s.num, s.name, s.score);
}

