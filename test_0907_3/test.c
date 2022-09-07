#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char intermediate_character(const char* s)
{
    char* p = s;
    int count = 0;
    for (; *s != 0; s++)
    {
        count++;
    }
    printf("字符串长度为 %d\n", count);
    return *(p+count/2);
}
int main()
{
    const char*s = "sahozhuangbumulilaodatubeishang";
    char ch = intermediate_character(s);
    printf("该字符串的中间字符为 %c\n", ch);
    return 0;
}