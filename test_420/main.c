#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>   //_getch����ͷ�ļ�
#include <time.h>
#include "head.h"
void FirstPage() {
    printf("\n\n\n\n\t\t\t   <<���¿ո�ʼ��Ϸ>>\n");
}
void TestSpace() {
    char ch;
    //������Ϊ�ո񣬾ͽ�����Ϸ
    while (ch = _getch()) {   //_getch�������Ƕ���һ���ַ������ð��س�
        if (ch == ' ') break;
    }
}
void ShowBackground() {
    for (int i = 0; i < 20; i++) {
        printf(g_strGameBack[i]);    //��ӡg_strGameBack����20��
    }
}
//���ߣ��������úõ����齫�߻���������
void DrawSnake() {
    strncpy(&g_strGameBack[g_arrsnake[0][0]][g_arrsnake[0][1]], "��", 2);
    for (int i = 1; g_arrsnake[i][0] != 0; i++) {   //����ѭ��3�Σ��ѷ��鿽�����հ׵�ͼ����
        strncpy(&g_strGameBack[g_arrsnake[i][0]][g_arrsnake[i][1]], "��", 2);
    }
}
//ɾ���߲���
void DestroySnake() {
    for (int i = 0; g_arrsnake[i][0] != 0; i++) {   //����ѭ��3�Σ��ѷ��鿽�����հ׵�ͼ����
        strncpy(&g_strGameBack[g_arrsnake[i][0]][g_arrsnake[i][1]], "  ", 2);
    }
}
//�����ߵĿ�ʼλ��
void SetSnakeRandPos() {
    int nX = -1, nY = -1;
    srand((unsigned int)time(NULL));   //�������������
    nX = rand() % 19 + 1;    //��Ϊ��ʼ������3�����һ��22��ǽ�����Ե�һ���߷���������19
    nY = rand() % 18 + 1;    //��Ϊ���һ��19��ǽ������������18
    // printf("%d %d\n", nX, nY);
    g_arrsnake[0][0] = nY;   //��
    g_arrsnake[0][1] = nX * 2;
    g_arrsnake[0][2] = to_west;

    g_arrsnake[1][0] = nY;   //��
    g_arrsnake[1][1] = nX * 2 + 2;
    g_arrsnake[1][2] = to_west;

    g_arrsnake[2][0] = nY;   //��
    g_arrsnake[2][1] = nX * 2 + 4;
    g_arrsnake[2][2] = to_west;
    DrawSnake();
}
//�߶�����
void SnakeMove() {
    //�ȴӱ���ɾ��ԭ������
    DestroySnake();

    int i = SNAKE_LONG - 1;  //�����±�0��19
    for (i; i >= 1; i--) {
        //���˵��Ƿ�����
        if (g_arrsnake[i][1] == 0) continue;
        //��ǰһ������ֵ��������ǰ���
        g_arrsnake[i][0] = g_arrsnake[i - 1][0];
        g_arrsnake[i][1] = g_arrsnake[i - 1][1];
        g_arrsnake[i][2] = g_arrsnake[i - 1][2];
    }
    //������ͷ
    g_arrsnake[0][2] = g_nSnakeDir;  //��ʼ������Ϊ����
    //����Ƕ�������
    if (g_arrsnake[0][2] == to_west || g_arrsnake[0][2] == to_east) {
        g_arrsnake[0][1] += g_arrsnake[0][2];
    }
    else {  //����Ƕ�������
        g_arrsnake[0][0] += g_arrsnake[0][2];
    }
    for (int j = SNAKE_LONG - 1; j >= 1; j--) {
        if (g_arrsnake[j][1] == 0) continue;
        //g_arrsnake[0][0]��g_arrsnake[0][1]Ϊ��ͷ����
        //�ж���ͷ�ı䷽���Ժ�᲻��ҧ���Լ�
        if (g_arrsnake[0][0] == g_arrsnake[j][0] && g_arrsnake[0][1] == g_arrsnake[j][1]) {
            printf("Snake Die!\n");
            printf("Ending Scores: %d\n", g_Score);
            system("pause");
        }
    }
}
//���淽������
void ChangeDir() {
    //��������_getch(),�ú�����ȴ��û����룬������������߲��ƶ���ͬ����⣩
    //GetAsyncKeystate()�첽��⺯��
    //GetAsyncKeyState('W'); //�������W���ͷ���һ����0ֵ
    if (GetAsyncKeyState('W')) {
        if (g_arrsnake[0][2] != to_south) {  //�������෴�ķ�����
            g_nSnakeDir = to_north;
        }
    }
    else if (GetAsyncKeyState('S')) {
        if (g_arrsnake[0][2] != to_north) {
            g_nSnakeDir = to_south;
        }
    }
    else if (GetAsyncKeyState('A')) {
        if (g_arrsnake[0][2] != to_east) {
            g_nSnakeDir = to_west;
        }
    }
    else if (GetAsyncKeyState('D')) {
        if (g_arrsnake[0][2] != to_west) {
            g_nSnakeDir = to_east;
        }

    }
}
//�ж����Ƿ�����
bool SnakeDie() {
    //�����ͷ����һ��λ���Ƿ��飬�ͷ���0
    //if (g_arrsnake[0][2] == to_west || g_arrsnake[0][2] == to_east) {
        // if (!strncmp(&g_strGameBack[g_arrsnake[0][0]][g_arrsnake[0][1] + g_arrsnake[0][2]], "��", 2))
        //if (!strncmp(&g_strGameBack[g_arrsnake[0][0]][g_arrsnake[0][1]], "��", 2))
            //return false;
    //} else if (g_arrsnake[0][2] == to_north || g_arrsnake[0][2] == to_south)
        // if (!strncmp(&g_strGameBack[g_arrsnake[0][0] + g_arrsnake[0][2]][g_arrsnake[0][1]], "��", 2))
    if (!strncmp(&g_strGameBack[g_arrsnake[0][0]][g_arrsnake[0][1]], "��", 2)) {
        return false;
    }
    return true;
}
//��������µ�ʳ��
void ProduceFood() {
    //�ж��Ƿ��б�Ҫ�����µ�ʳ��
    if (g_ProFood == false)
        return;
    bool flag = true;
    srand((unsigned int)time(NULL));
    while (1) {
        g_Row = rand() % 18 + 1;
        g_Col = rand() % 20 + 1;
        //��������������������������������������漴����
        for (int i = 0; g_arrsnake[i][0] != 0; i++)
            if (g_arrsnake[i][0] == g_Row && g_arrsnake[i][1] == g_Col)
                flag = false;
        if (flag == true)
            break;
    }
    //���껭ʳ��
    strncpy(&g_strGameBack[g_Row][g_Col * 2], "��", 2);
    g_ProFood = false;
}
//�߱䳤
void SnakeGrow() {
    //���ʳ���������ͷ�������
    if (g_arrsnake[0][0] == g_Row && g_arrsnake[0][1] == g_Col * 2) {
        if (g_arrsnake[0][2] == to_east) {  //�ж�β������ĸ�������
            g_arrsnake[g_SnakeLen + 1][0] = g_arrsnake[g_SnakeLen][0];
            g_arrsnake[g_SnakeLen + 1][1] = g_arrsnake[g_SnakeLen][1] - 2;
            g_arrsnake[g_SnakeLen + 1][2] = g_arrsnake[g_SnakeLen][2];
        }
        else if (g_arrsnake[0][2] == to_west) {
            g_arrsnake[g_SnakeLen + 1][0] = g_arrsnake[g_SnakeLen][0];
            g_arrsnake[g_SnakeLen + 1][1] = g_arrsnake[g_SnakeLen][1] + 2;
            g_arrsnake[g_SnakeLen + 1][2] = g_arrsnake[g_SnakeLen][2];
        }
        else if (g_arrsnake[0][2] == to_north) {
            g_arrsnake[g_SnakeLen + 1][0] = g_arrsnake[g_SnakeLen][0] + 1;
            g_arrsnake[g_SnakeLen + 1][1] = g_arrsnake[g_SnakeLen][1];
            g_arrsnake[g_SnakeLen + 1][2] = g_arrsnake[g_SnakeLen][2];
        }
        else if (g_arrsnake[0][2] == to_south) {
            g_arrsnake[g_SnakeLen + 1][0] = g_arrsnake[g_SnakeLen][0] - 1;
            g_arrsnake[g_SnakeLen + 1][1] = g_arrsnake[g_SnakeLen][1];
            g_arrsnake[g_SnakeLen + 1][2] = g_arrsnake[g_SnakeLen][2];
        }
        g_SnakeLen++;
        g_ProFood = true;
        g_Score++;
    }
}
void Score() {
    //COORD��Windows API�ж����һ�ֽṹ����ʾһ���ַ��ڿ���̨��Ļ�ϵ����ꡣ
    COORD rd;
    rd.X = 56;
    rd.Y = 8;
    //���ù��λ��
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), rd);
    //��ӡ
    printf("Score: ");

    rd.X = 64;
    rd.Y = 8;
    //���ù��λ��
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), rd);
    //��ӡ
    printf("%d", g_Score);

}
int main()
{
    //��ҳ
    FirstPage();
    //���¿ո�
    TestSpace();
    // �����Ļ
    system("cls");
    //�����ߵ�λ��
    SetSnakeRandPos();
    //��ӡ��Ϸ����
    while (1) {
        system("cls");
        //�ı䷽��
        ChangeDir();
        //�߱䳤
        SnakeGrow();
        //����ʳ��
        ProduceFood();
        //���ƶ�
        SnakeMove();
        //�ж����Ƿ�����
        if (SnakeDie() == false) {
            printf("Snake Die!\n");
            printf("Ending Scores: %d\n", g_Score);
            break;
        }
        //�ڱ�������ʾ��
        DrawSnake();
        //��ӡ����
        ShowBackground();
        //��ӡ����
        Score();
        Sleep(150);     //ÿ150����ˢ��ˢ�´�ӡһ�Σ���windows.hͷ�ļ���
    }
    system("pause");
    return 0;
}