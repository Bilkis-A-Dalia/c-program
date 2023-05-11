#include<stdio.h>
int main()
{
    int t,s,a,b,c,d;
    scanf("%d",&t);
    for(int i=0; i<t;i++)
    {
        scanf("%d %d %d %d",&s,&a,&b,&c);
        d=s-(a+b+c);
        printf("%d\n",d);
    }
    return 0;
}

