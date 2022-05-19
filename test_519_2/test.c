#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

enum Day //枚举类型
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};

enum Color //枚举类型
{
	RED,
	GREEN,
	BLUE   //枚举类型的可能取值，也叫枚举常量
};

int main()
{
	enum Color clr = GREEN;//只能拿枚举常量给枚举变量赋值，才不会出现类型的差异。

}

//枚举相对 #define 的优点