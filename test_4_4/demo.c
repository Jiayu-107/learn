#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	default:
		printf("mistake");
		break;
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("work day\n");
		break;
	case 6:
	case 7:
		printf("relax day\n");
		break;
	}

	return 0;
}