#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//con ����ͨѶ¼
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();

		printf("���������ѡ��:>");
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
			printf("�˳�ͨѶ¼��");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
			

	} while (input);


}