#ifndef __Test_H__
#define __Test_H__

#include<stdio.h>
#include<Windows.h>
#include <stdlib.h>
#include <time.h>
#define WHAT '*'
#define NUM  20
#define COL  10
#define ROW  10
void Game();
#pragma warning(disable:4996)
#endif       //���϶���ͷ�ļ�

int main()
{
	int quit = 0;
	int select = 0;
	while (!quit) {
		Menu();
		printf("������ ");
		scanf("%d", &select);
		switch (select) {
		case 1:
			Game();
			break;
		case 0:
			quit = 1;
			break;
		default:
			printf("������������ԣ�\n");
			break;
		}
	}

	printf("byebye!\n");

	system("pause");
	return 0;
}


void Game()
{
	srand((unsigned long)time(NULL)); //�������������

	char show_board[ROW][COL];
	char mines_board[ROW][COL];

	memset(show_board, WHAT, sizeof(show_board));
	memset(mines_board, '0', sizeof(mines_board));

	SetMines(mines_board, ROW, COL);

	int count = (ROW - 2) * (COL - 2) - NUM;    //��ɨ����Щ�� ��������ʤ��

	while (count) {
		system("cls");
		ShowBoard(show_board, ROW, COL);
		printf("��ѡ����Ҫɨ����������� ");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		if (x < 1 || x > ROW - 2 || y < 1 || y > COL - 2) { //�Ƿ��������ж�
			printf("�������\n");
			continue;
		}
		if (show_board[x][y] != WHAT) {
			printf("�˴��Ѿ���ɨ���ˣ���������\n");
			continue;
		}
		if (mines_board[x][y] == '1') {
			system("cls");
			ShowBoard(mines_board, ROW, COL);
			printf("������!��Ϸ����!\n");
			break;
		}

		show_board[x][y] = CountMines(mines_board, x, y);
		count--;
	}
}


CountMines(char board[][COL], int x, int y) { //ͳ����Χ�׵ĸ���
	return board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1] + \
		board[x][y + 1] + board[x + 1][y + 1] + board[x + 1][y] + \
		board[x + 1][y - 1] + board[x][y - 1] - 7 * '0';//�������˸��㣬��������ת�ַ���һ����0'
}

void ShowBoard(char board[][COL], int row, int col) {//ɨ��չʾ���
	printf("     ");
	for (int i = 1; i <= (col - 2); i++) {
		printf("%d   ", i);
	}
	printf("\n");
	ShowLine(col);//��ʾ����
	for (int i = 1; i <= (row - 2); i++) {
		printf("%-3d|", i);
		for (int j = 1; j <= (col - 2); j++) {
			printf(" %c |", board[i][j]);
		}
		printf("\n");
		ShowLine(col);
	}
}

oid SetMines(char board[][COL], int row, int col) { //���׺���
	int count = NUM;
	while (count) {
		int x = rand() % (row - 2) + 1;
		int y = rand() % (col - 2) + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
	}
}
void ShowLine(int col) {

	for (int i = 0; i <= (col - 2); i++) {
		printf("----");
	}
	printf("\n");
}

Menu() {   //�û���������
	printf("########################\n");
	printf("# 1. Play       0.Exit #\n");
	printf("########################\n");
}