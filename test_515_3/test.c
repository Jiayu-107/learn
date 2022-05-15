#define CRE_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);

	while (*str1 == *str2)
	{
		if (str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}


}

int main()
{
	//Ä£ÄâÊµÏÖstrcmp

	const char* arr1 = "abcd";
	const char* arr2 = "abc";
	int ret = my_strcmp(arr1, arr2);
	printf("%d\n", ret);

	return 0;
}