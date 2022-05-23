#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
	////1.对NULL指针解引用操作
	//int* p = malloc(40);//malloc 开辟空间失败返回空指针
	////对p进行相关的判断
	//*p = 10;//对NULL指针解引用

	////2.对动态开辟空间的越界访问
	//int* p = malloc(40);// 10个int
	//if (NULL == p)
	//{
	//	return 0;
	//}
	//int i = 0;
	////越界
	//for (i = 0; i <= 10; i++)
	//{
	//	*(p + i) = i;
	//}

	//free(p);
	//p = NULL;

	////3.对非动态开辟内存使用free释放
	//int a = 10;
	//int* p = &a;
	////....
	//free(p);
	//p = NULL;

	////4.使用free释放一块动态开辟内存的一部分
	//int* p = (int*)malloc(40);
	//if (NULL == p)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p++ = i;//后置++ 先解引用使用 再++
	//}
	////回收空间
	////使用free释放动态开辟内存的一部分
	////p必须指向开辟动态内存位置的起始部分
	//free(p);
	//p = NULL;


	////5.对同一块动态内存多次释放
	//int* p = (int*)malloc(40);
	//if (NULL == p)
	//{
	//	return 0;
	//}
	////使用
	////。。。
	////释放动态开辟的内存
	//free(p);
	//p = NULL;
	////...
	//free(p); // 多次释放 不行的
	////谁申请谁释放
	////P释放完之后 p置为空指针



	//6.动态开辟内存忘记释放（内存泄漏）
	while (1)
	{
		malloc(1);
		sleep(1000);
	}
	return 0;
}