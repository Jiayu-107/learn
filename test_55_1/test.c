#define _CRT_SECURE_NO_WARNINGS 1

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	//指针数组
	int* arr[10];

	//数组指针
	int* (*pa)[10] = &arr;

	//函数指针
	int(*pAdd)(int, int) = Add;//&Add
	//int sum = (*pAdd)(2, 3);
	//int sum = pAdd(2, 3);
	//int sum = Add(2, 3); //这两个函数指针的使用都是欧克的

	//函数指针数组
	int (*parr[10]) (int, int);
	//指向函数指针数组的指针
	int (*(*parr)[10]) (int, int) = &parr;


	//每个指针必须都得初始化，不能出现野指针；可以赋空值
	return 0;
}