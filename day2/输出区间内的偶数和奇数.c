#include<stdio.h>
#include<stdlib.h>
int ou(int a,int b)
{
        int i;
        for(i=a;i<=b;i++)
    {
        if(i%2==0)
        printf("%d ",i);
    }
    return 0;
}
int ji(int a,int b)
{
        int i;
        for(i=a;i<=b;i++)
    {
        if(i%2!=0)
        printf("%d ",i);
    }
    return 0;
}
int main()
{
    int a,b,temp;
    printf("**************************************************\n");
    printf("*****请选择奇数模式还是偶数模式1为奇数 2为偶数****\n");
    printf("**************************************************\n");
    scanf("%d",&temp);
    printf("****告诉我两个区间先写小的!****");
    scanf("%d %d",&a,&b);
    if(a>=b|temp>2|temp<1)
    {
        printf("you fool!!!!!");
        exit(1);
    }
    if(temp==1)
    {
        printf("**************************************************\n");
        ji(a,b);
        printf("\n");
        printf("**************************************************\n");
    }
    if(temp==2)
    {   
        printf("**************************************************\n");
        ou(a,b);
        printf("\n");
        printf("**************************************************\n");
    }
    return 0;
}