#include<stdio.h>
#include<string.h>

void func(const char* s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sizeof(s[i]); j++)
        {
            if (*(s[i] + j) <= '5' && *(s[i] + j) >= '0')
            {
                printf("%d ", *(s[i] + j) - 48  + 3);
            }
            if (*(s[i] + j) <= '9' && *(s[i] + j) >= '5')
            {
                printf("%d ", *(s[i] + j) - 48 - 5);
            }
        }
    }
}

int main()
{
    const char* s[] = { "ddyy,wu2yi","gfs7op","sa5dfui","ping6","0shuifdht","fwuyt5ewrew","1dsfiurt" };

    func(s, 7);
    return 0;
}