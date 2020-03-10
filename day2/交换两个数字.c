#include<stdio.h>
int a,b,temp;
void one(void)
{
    temp=a;
    a=b;
    b=temp;
}
void two(void)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int choice;
    printf("请输入你的两个数字");
    scanf("%d %d",&a,&b);
    printf("你想用到第三个数字吗 1 或者 0\n");
    scanf("%d",&choice);
    if(choice!=1)
    two();
    else
    one();
    printf("交换后的数字为%d %d",a,b);
    return 0;
}