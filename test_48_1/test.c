#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("###########################\n");
	printf("###   1.play   0.exit   ###\n");
	printf("###########################\n\n");
}

void game()
{
	//1.���������
	int num;
	int guess;
	num = rand()%100+1;
	//printf("%d\n", num);
	//2.������
	while (1)
	{
		printf("������֣�\n");
		scanf("%d", &guess);
		if (guess > num)
		{
			printf("�´��ˣ�\n");
		}
		else if (guess < num)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
	
}

int main()
{
	//������С��Ϸ
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("����Ϸ������ 1 or 0\n");
		scanf("%d", &input);
		switch (input)
		{
			case 0:
				printf("�˳���Ϸ\n");
				break;
			case 1:
				game();
				break;
			default:
				printf("�������\n");
				break;
		}
	} while (input);
	return 0;
}