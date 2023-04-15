#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int x,v;
    scanf("%d %d",&x,&v);
    for(i=0;i<n;i++)
    {
        ar[x]=v;
    }
    for(i=n-1;i>=0;i=i-1)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}

