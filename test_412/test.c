<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1

//������������Ϸ

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"game.h"

void menu()
{
	printf("**********************************\n");
	printf("*********1.play    0.exit*********\n");
	printf("**********************************\n");
}

//��Ϸ������ʵ��
void game()
{
	char ret = 0;
	//���� �� ����߳���������Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW, COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if ('C' != ret)
		{
			break;
		}

		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if ('C' != ret)
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("���Ӯ��\n");
	}
	if ('#' == ret)
	{
		printf("����Ӯ��\n");
	}
	if ('Q' == ret)
	{
		printf("ƽ�֣�\n");
	}

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("����������������룡\n");
				break;
		}

	} while (input);

}

int main()
{
	test();
	return 0;
=======
#define _CRT_SECURE_NO_WARNINGS 1

//������������Ϸ

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"game.h"

void menu()
{
	printf("**********************************\n");
	printf("*********1.play    0.exit*********\n");
	printf("**********************************\n");
}

//��Ϸ������ʵ��
void game()
{
	char ret = 0;
	//���� �� ����߳���������Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW, COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if ('C' != ret)
		{
			break;
		}

		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if ('C' != ret)
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("���Ӯ��\n");
	}
	if ('#' == ret)
	{
		printf("����Ӯ��\n");
	}
	if ('Q' == ret)
	{
		printf("ƽ�֣�\n");
	}

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("����������������룡\n");
				break;
		}

	} while (input);

}

int main()
{
	test();
	return 0;
>>>>>>> d58d1781fcda3d8dff36efb1453a4e680bdf3c64
}