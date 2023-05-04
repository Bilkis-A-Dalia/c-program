//No Return + Parameter
#include<stdio.h>

void sum(int x)
{
    if(x%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return ;
}

int main()
{
    int a;
    scanf("%d",&a);
    sum(a);
    return 0;
}


