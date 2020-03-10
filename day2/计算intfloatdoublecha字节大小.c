#include<stdio.h>
int main()
{
    int intT;
    float floatT;
    double doubleT;
    char charT;
    printf("******Size of int: %d bytes***\n",sizeof(intT));
    printf("****Size of float: %d bytes***\n",sizeof(floatT));
    printf("***Size of double: %d bytes***\n",sizeof(doubleT));
    printf("*****Size of char: %d bytes***\n",sizeof(charT));
    return 0;
}