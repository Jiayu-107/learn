#define _CRT_SECURE_NO_WARNINGS 1
#define PRINT(X) printf("the value of "#X" is %d\n", X)
//									把 #X 换成所应的字符串

#include<stdio.h>

int main()
{
	/*printf("hello world\n");
	printf("hello" "world\n");
	printf("he" "llo" "world\n");*/

	int a = 10;
	int b = 20;

	PRINT(a);
	//printf("the value of ""a"" is %d\n", a);

	PRINT(b);
	//printf("the value of ""a"" is %d\n", a);

	return 0;
}