#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("�����뱻����");
    scanf("%d",&a);
    printf("���������");
    scanf("%d",&b);
    printf("�������Ϊ%d %d\n",a,b);
    c=a/b;
    d=a%b;
    if(d!=0)
    printf("������ ��Ϊ%d ����Ϊ%d",c,d);
    else
    {
        printf("û������ ��Ϊ%d",c);
    }
    return 0;
}