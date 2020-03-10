#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,d;
    printf("方程的格式为ax^2+bx+c=0\n 请输入你的abc");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0)
    printf("fvck fool!");
    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    printf("%f %f",x1,x2);
    return 0;
}