#include<stdio.h>
int main()
{
    float a,b,c;
    printf("��������������");
    scanf("%f %f %f",&a,&b,&c);
    if(a>b && a>c)
    printf("%f!",a);
    if(b>a && b>c)
    printf("%f!!",b);
    if(c>b && c>a)
    printf("%f!!!",c);
    return 0;
}