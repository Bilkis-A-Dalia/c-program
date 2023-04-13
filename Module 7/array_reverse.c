#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&ar[i]);
    }
    
    for(i=n-1;i>=0;i=i-1)
    {
        printf("%d\n",ar[i]);
    }

    return 0;
}

