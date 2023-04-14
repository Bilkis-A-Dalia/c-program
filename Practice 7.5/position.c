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
    for(i=0;i<n;i++)
    {
        if(ar[i]<=10)
        {
            printf("A[%d] = %d\n",i,ar[i]);
        }
    }
    return 0;
}

