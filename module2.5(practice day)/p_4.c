#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        printf("positive",a);
    }
    else if(a<0)
    {
        printf("negative",a);
    }
    else
    {
        printf("zero",a);
    }
    return 0;
}