#include<stdio.h>
add(int* p)
{
	(* p)++;
} 
int main()
{
	int num = 0;
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);
	add(&num);
	add(&num);
	printf("%d\n", num);
	add(&num);
	add(&num);
	add(&num);
	printf("%d\n", num);
	return 0;
}