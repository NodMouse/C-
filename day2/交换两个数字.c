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
    printf("�����������������");
    scanf("%d %d",&a,&b);
    printf("�����õ������������� 1 ���� 0\n");
    scanf("%d",&choice);
    if(choice!=1)
    two();
    else
    one();
    printf("�����������Ϊ%d %d",a,b);
    return 0;
}