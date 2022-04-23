#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*1.��Ԫ1��1��1�գ���������
  2.�ۼ����������֮ǰ�������������
  3.������ģ7��0(������)---6(������)
*/



int check_year(int year) {//���ƽ�����꺯��
	if (year % 400 == 0) {
		return 1;//���귵��1 
	}
	else {
		if (year % 4 == 0) {
			return 1;//���귵��1 
		}
		else {
			return 0;//ƽ�귵��0 
		}
	}
}

int week_f(int year) {//����xx��1��1�������ڼ� 
	int sum = 0;
	for (int i = 1; i < year; i++) {
		if (check_year(i) == 1) {
			sum = sum + 366;
		}
		else {
			sum = sum + 365;
		}
	}
	return sum % 7;
}


int month_run(int n) {
	switch (n) {
	case 1:return 31;
	case 2:return 29;
	case 3:return 31;
	case 4:return 30;
	case 5:return 31;
	case 6:return 30;
	case 7:return 31;
	case 8:return 31;
	case 9:return 30;
	case 10:return 31;
	case 11:return 30;
	case 12:return 31;
	}
}

int month_ping(int n) {
	switch (n) {
	case 1:return 31;
	case 2:return 28;
	case 3:return 31;
	case 4:return 30;
	case 5:return 31;
	case 6:return 30;
	case 7:return 31;
	case 8:return 31;
	case 9:return 30;
	case 10:return 31;
	case 11:return 30;
	case 12:return 31;
	}
}




///����������� 
void run(int week) {
	int enter = 0;//��¼���� 
	int wee = week;
	for (int i = 1; i <= 12; i++) {//��������12���� 

		printf("------>%d��<------\n", i);
		printf("��	һ	��	��	��	��	��\n");//������ڱ�ͷ 


		for (int k = 0; k < wee; k++) {//����ո� 
			printf("	");
			enter++;
		}


		for (int j = 1; j <= month_run(i); j++) {//���ÿ�µ��� 
			if (enter % 7 == 0) {

				printf("\n");
			}
			printf("%d	", j);
			enter++;
		}

		wee = (wee + month_run(i)) % 7;
		enter = enter - wee;

		printf("\n\n\n");

	}
}


///ƽ���������
void ping(int week) {
	int enter = 0;//��¼���� 
	int wee = week;
	for (int i = 1; i <= 12; i++) {//��������12���� 
		printf("------>%d��<------\n", i);
		printf("��	һ	��	��	��	��	��\n");//������ڱ�ͷ 


		for (int k = 0; k < wee; k++) {//����ո� 
			printf("	");
			enter++;
		}


		for (int j = 1; j <= month_ping(i); j++) {//���ÿ�µ��� 
			if (enter % 7 == 0) {
				printf("\n");
			}
			printf("%d	", j);
			enter++;
		}

		wee = (wee + month_ping(i)) % 7;
		enter = enter - wee;

		printf("\n\n\n");

	}
}
int main() {
	int year;
	int week = 0;
	int sum = 0;
	printf("��������ݣ�");
	scanf("%d", &year);
	week = week_f(year);
	if (check_year(year) == 1) {
		run(week);
	}
	else {
		ping(week);
	}
}
