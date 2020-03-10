#include<stdio.h>
#include<stdlib.h>
int run(void)
{
    printf("闰年");
    return 0;
}
int nrun(void)
{
    printf("不是闰年");
    return 0;
}
int main()
{
    int year;
    int year4=0,year100=0,year400=0;
    printf("如今是何年?");
    scanf("%d",&year);
    if(year==1926)
    {
        printf("|----------------------|-----\n");
        printf("|----------------------|     ---\n");
        printf("|----------------------|         ---\n");
        printf("|----------------------|         ---\n");
        printf("|----------------------|     ---\n");
        printf("|----------------------|-----\n");
        printf("Your Bullet!");
        exit(1);
    }
    if(year%4==0)
    year4=1;
    if(year%100==0)
    year100=1;
    if(year%400==0)
    year400=1;
 //   printf("%d %d %d",year4,year100,year400);
    if(year4==0)
    nrun();
    if(year4==1)
        if(year100==0)
            run();
        else if (year400==1)
            run();
        else
        nrun();
    return 0;
}