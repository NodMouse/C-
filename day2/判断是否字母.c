#include<stdio.h>
int main()
{
    char c;
    printf("����һ���ַ�:");
    scanf("%c",&c);
    if((c>='a'&& c<='z') || (c>='A' && c<='Z'))
    printf("����һ���ַ�");
    else
    printf("NO!!!!!!!");
    return 0;
}