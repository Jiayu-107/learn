#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*1.公元1年1月1日，是星期日
  2.累加至输入年份之前的所有年的天数
  3.总天数模7，0(星期日)---6(星期六)
*/



int check_year(int year) {//检查平年闰年函数
	if (year % 400 == 0) {
		return 1;//闰年返回1 
	}
	else {
		if (year % 4 == 0) {
			return 1;//闰年返回1 
		}
		else {
			return 0;//平年返回0 
		}
	}
}

int week_f(int year) {//返回xx年1月1日是星期几 
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




///闰年输出函数 
void run(int week) {
	int enter = 0;//记录换行 
	int wee = week;
	for (int i = 1; i <= 12; i++) {//最外层遍历12个月 

		printf("------>%d月<------\n", i);
		printf("日	一	二	三	四	五	六\n");//输出星期标头 


		for (int k = 0; k < wee; k++) {//输出空格 
			printf("	");
			enter++;
		}


		for (int j = 1; j <= month_run(i); j++) {//输出每月的天 
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


///平年输出函数
void ping(int week) {
	int enter = 0;//记录换行 
	int wee = week;
	for (int i = 1; i <= 12; i++) {//最外层遍历12个月 
		printf("------>%d月<------\n", i);
		printf("日	一	二	三	四	五	六\n");//输出星期标头 


		for (int k = 0; k < wee; k++) {//输出空格 
			printf("	");
			enter++;
		}


		for (int j = 1; j <= month_ping(i); j++) {//输出每月的天 
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
	printf("请输入年份：");
	scanf("%d", &year);
	week = week_f(year);
	if (check_year(year) == 1) {
		run(week);
	}
	else {
		ping(week);
	}
}
