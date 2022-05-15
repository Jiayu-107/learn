#define CRE_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//三种模拟实现strlen的方法
//1.计数器 2.递归 3.指针-指针

size_t my_strlen1(const char* arr)//防止字符串被更改，使用常量指针接收
{
    //防止串入空指针，此处使用断言
    assert(arr != NULL);
    int count = 0;
    //如果没有遇到'\0'就一直循环
    while (*arr != '\0')
    {
        //指针后移
        arr++;
        //计数器自增
        count++;
    }
    return count;
}


size_t my_strlen2(const char* arr)//防止字符串被更改，使用常量指针接收
{
    //防止串入空指针，此处使用断言
    assert(arr != NULL);
    //如果当前不是'\0'，则长度+1，然后递归判断下一个位置是否为'\0'，直至遇到'\0'结束递归；
    if (*arr != '\0')
    {
        return 1 + my_strlen2(arr + 1);
    }
    else
    {
        return 0;
    }
}

size_t my_strlen3(const char* arr)//防止字符串被更改，使用常量指针接收
{
    //防止串入空指针，此处使用断言
    assert(arr != NULL);
    //首先将初始地址保存
    const char* start = arr;
    //如果没有遇到'\0'就一直循环
    while (*arr != '\0')
    {
        //指针后移
        arr++;
    }
    //结束地址减去开始地址就是元素个数
    return arr - start;
}


int main()
{
	int len0 = strlen("abcdef");
	int len1 = my_strlen1("abcdef");
	int len2 = my_strlen2("abcdef");
	int len3 = my_strlen3("abcdef");

	printf("%d\n", len0);
    printf("%d\n", len1);
    printf("%d\n", len2);
    printf("%d\n", len3);

	return 0;
}