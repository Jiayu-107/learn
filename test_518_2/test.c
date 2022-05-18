#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct S1
{
	char c1;//1
	//3
	int i;//4
	char c2;//1
	//12
};

struct S2
{
	char c1;//1
	char c2;//2
	int i;//4
	//8
};

struct S3
{
	double d;//8
	char c;//9
	int i;//12
	//16
};

struct S4
{
	char c1;//1
	struct S3 s3;//8
	double b;//24
};

int main()
{
	//如何计算结构体的大小？
	//对齐规则：
	//1. 第一个成员在与结构体偏移量为0的地址处
	//2. 其他成员变量要对齐到 对齐数 的整数倍的地址处
	//   对齐数 = 编译器默认的一个对齐数与该成员大小的 较小值
	//   VS 中默认的值为8。GCC中没有默认的对齐数，那就以成员变量的大小为对齐数
	//3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
	//4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是最大对齐数
	//   （含嵌套结构体的的对齐数）的整数倍
	printf("%d\n", sizeof(struct S1)); //12
	printf("%d\n", sizeof(struct S2)); //8
	printf("%d\n", sizeof(struct S3)); //16
	printf("%d\n", sizeof(struct S4)); //32
	return 0;
}