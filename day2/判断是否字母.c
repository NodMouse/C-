#include<stdio.h>
int main()
{
    char c;
    printf("输入一个字符:");
    scanf("%c",&c);
    if((c>='a'&& c<='z') || (c>='A' && c<='Z'))
    printf("这是一个字符");
    else
    printf("NO!!!!!!!");
    return 0;
}