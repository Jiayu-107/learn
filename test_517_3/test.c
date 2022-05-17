#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>


//C语言标准
//memcpy 只要处理 不重叠的内存拷贝就可以
//memmove 处理重叠的内存拷贝

void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest != NULL && src != NULL);
	void* ret =dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest; //后置++会出现错误 表达式必须是指向完整对象类型的指针。所以必须前置++
		++(char*)src; //强制类型转化 比 ++优先级要高
	}
	return ret;
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest != NULL && src != NULL);
	void* ret = dest;
	if (dest < src)
	{
		//从前向后拷贝
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest; //后置++会出现错误 表达式必须是指向完整对象类型的指针。所以必须前置++
			++(char*)src;
		}
	}
	else
	{	//从后向前
		*((char*)dest + num) = *((char*)src + num);
	}
	return ret;
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr1[10] = { 0 };
	int i = 0;
	//my_memcpy(arr1, arr, 20);
	my_memmove(arr, arr + 2, 20);


	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}


}