#define CRE_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

char* my_strstr(const char* str1, const char* str2)
{
	assert(*str1 != '\0' && *str2 != '\0');
	const char* start = str1;
	const char* tmp = str2;
	const char* check = start;

	while (*start)
	{
		check = start;
		while (*check == *tmp && *check != '\0' && tmp != '\0')
		{
			check++;
			tmp++;
		}
		if (*tmp == '\0')
		{
			return start;
		}
		start++;
		tmp = str2;
	}
	return NULL;
}

int main()
{
	const char* str1 = "abcdef";
	const char* str2 = "def";
	printf("%s\n", my_strstr(str1, str2));

	return 0;
}

