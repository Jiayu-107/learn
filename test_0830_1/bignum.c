#include<stdio.h>
int main()
{
    int num1,num2;
    printf("请输入两个数 ");
    scanf("%d%d",&num1,&num2);
    if(num1 > num2)
    {
        int tmp = num1;
        num1 = num2;
        num2 = tmp;
        printf("从小到大排序为 %d %d\n", num1,num2);
    }
    else if(num2 > num1)
    {
        printf("从小到大排序为 %d %d\n", num1,num2);
    }
    return 0;
}