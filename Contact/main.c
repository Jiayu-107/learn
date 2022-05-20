#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con 就是通讯录
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();

		printf("请做出你的选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			ShowContact(&con);
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			printf("退出通讯录。");
			break;
		default:
			printf("选择错误，请重新选择！");
			break;
		}
			

	} while (input);


}