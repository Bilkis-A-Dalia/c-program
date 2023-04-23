#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d %d",&n,&a);
    for(int i=0;i<a;i++)
    {
        for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    }

    return 0;
}

