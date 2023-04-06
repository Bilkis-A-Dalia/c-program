#include<stdio.h>
int main()
{
    int a=5,b=7;
    int add=a+b;
    int minus=b-a;
    int multification=a*b;
    float div=b/a;
    float mod=b%a;
    printf("%d \n%d \n%d \n%.1f \n%.1f",add,minus,multification,div,mod);
    return 0;
}