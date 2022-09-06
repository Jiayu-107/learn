#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int arr[4] = { 1, 2, 3, 4 };
    printf("%ld\n", sizeof(arr[0]));
    printf("%ld\n", sizeof(arr));
    typeof(arr) b;
    printf("%ld\n", sizeof(b));

    return 0;
}