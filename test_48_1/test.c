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
	//1.生成随机数
	int num;
	int guess;
	num = rand()%100+1;
	//printf("%d\n", num);
	//2.猜数字
	while (1)
	{
		printf("请猜数字：\n");
		scanf("%d", &guess);
		if (guess > num)
		{
			printf("猜大了！\n");
		}
		else if (guess < num)
		{
			printf("猜小了！\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
	
}

int main()
{
	//猜数字小游戏
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("玩游戏请输入 1 or 0\n");
		scanf("%d", &input);
		switch (input)
		{
			case 0:
				printf("退出游戏\n");
				break;
			case 1:
				game();
				break;
			default:
				printf("输入错误\n");
				break;
		}
	} while (input);
	return 0;
}