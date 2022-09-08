#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
typedef struct stu
{
    char name[64];
    int score;
    char date[64];
}STU;

void func(STU mate[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (mate[j].score < mate[j + 1].score)
            {
                STU tmp = mate[j];
                mate[j] = mate[j + 1];
                mate[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %s\n", mate[i].name, mate[i].score, mate[i].date);
    }
}

int main()
{
    STU mate[3] = { {"Áõ±¸",99,"2010 09 01"},{"¹ØÓð",100,"2008 10 01"},{"ÕÅ·É",98,"2020 08 01"} };
    func(mate, 3);
    return 0;
}