#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("请输入被除数");
    scanf("%d",&a);
    printf("请输入除数");
    scanf("%d",&b);
    printf("你输入的为%d %d\n",a,b);
    c=a/b;
    d=a%b;
    if(d!=0)
    printf("有余数 商为%d 余数为%d",c,d);
    else
    {
        printf("没有余数 商为%d",c);
    }
    return 0;
}