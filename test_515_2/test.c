#define CRE_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return dest;

}
int main()
{
	//Ä£ÄâÊµÏÖstrcat
	char arr1[11] = { "hello" };
	char arr2[] = { "world" };
	
	my_strcat(arr1, arr2);

	printf("%s\n", arr1);

	return 0;
}