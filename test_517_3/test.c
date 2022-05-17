#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>


//C���Ա�׼
//memcpy ֻҪ���� ���ص����ڴ濽���Ϳ���
//memmove �����ص����ڴ濽��

void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest != NULL && src != NULL);
	void* ret =dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest; //����++����ִ��� ���ʽ������ָ�������������͵�ָ�롣���Ա���ǰ��++
		++(char*)src; //ǿ������ת�� �� ++���ȼ�Ҫ��
	}
	return ret;
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest != NULL && src != NULL);
	void* ret = dest;
	if (dest < src)
	{
		//��ǰ��󿽱�
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest; //����++����ִ��� ���ʽ������ָ�������������͵�ָ�롣���Ա���ǰ��++
			++(char*)src;
		}
	}
	else
	{	//�Ӻ���ǰ
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