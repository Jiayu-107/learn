#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct stu
{
    int ID;
    char name[64];
    float score;
};

char* func(struct stu arr[], int n)
{
    int best_score = arr[0].score;
    for (int i = 0; i < n; i++)
    {
        if (best_score < arr[i].score)
        {
            best_score = arr[i].score;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (best_score == arr[i].score)
        {
            return arr[i].name;
        }
    }
}
int main()
{
    struct stu arr[10] = { {0, "xiaoming", 79},
                          {1, "xiaohong", 98},
                          {2, "xiaoliang", 76},
                          {3, "xiaolan", 68},
                          {4, "xiaozi", 99},
                          {5, "xiaohei", 72},
                          {6, "xiaobai", 88},
                          {7, "xiaolv", 81},
                          {8, "xiaoliu", 77},
                          {9, "xiaowu", 63}
    };
    char* best_score_name = func(arr, 10);//求出(返回)该小组成员中成绩最好的那个同学的名字。
    printf("%s\n", best_score_name);
    return 0;
}