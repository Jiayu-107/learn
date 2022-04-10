//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr1[10] = {1,2,3};//不完全初始化，剩下得元素默认初始化为0；
//	char arr2[5] = { 'a',98 };//三个0；
//	char arr3[5] = "ab";//ok得，'a','b','\0'；三个0 ，但是第一个0不一样。
//	char arr4[] = "abcdef";
//
//	printf("%zd\n", sizeof(arr4));
//	//sizeof 计算 arr4所占空间的大小
//	//七个元素- char 7*1 = 7
//
//	printf("%zd", strlen(arr4));//7 6 
//	//strlen 求字符串的长度 - '\0'之前的字符个数；
//	//[a b c d e f \0]
//	// 6
//
//
//	//1.strlen 和 sizeof 没有什么关联
//	//2.strlen 是求字符串长度的 - 只能针对字符串长度 - 库函数 - 使用得引用头文件
//	//3.sizeof 计算变量，数组，类型的大小 - 单位是字节 - 操作符
//
//	return 0;
//}





//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%zd\n", sizeof(arr1));
//	printf("%zd\n", sizeof(arr2));
//	printf("%zd\n", strlen(arr1));
//	printf("%zd\n", strlen(arr2));//随机值
//
//	return 0;
//}


#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char arr1[] = { "abcdef" };
	//printf("%c\n", arr1[3]);//打印d，d是第四位，数组下标为3；
	//打印数组arr1所有的元素；
	
	int len = strlen(arr1);
	for(i = 0; 1 < len; i++)
	//for (i = 0;i < (int)strlen(arr1); i++)//strlen 返回一个无符号整型,(int)强制类型转换；
	{
		printf("%c ", arr1[i]);//   \0 不会被打印
	}
	return 0;
}