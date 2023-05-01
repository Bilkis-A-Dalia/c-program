#include<stdio.h>

void sum(int x,int y)
{
    int s=x+y;
    printf("%d\n",s);
    return;//here return doesnot work.it will be here as invisible.
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}

