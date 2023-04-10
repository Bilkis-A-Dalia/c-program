#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int d= a/1000;
    if(d%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}

