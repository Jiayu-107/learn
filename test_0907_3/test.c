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
    printf("�ַ�������Ϊ %d\n", count);
    return *(p+count/2);
}
int main()
{
    const char*s = "sahozhuangbumulilaodatubeishang";
    char ch = intermediate_character(s);
    printf("���ַ������м��ַ�Ϊ %c\n", ch);
    return 0;
}