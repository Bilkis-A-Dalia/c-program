#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&ar[i]);
    }
    int min=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
            a=i+1;
        }    
    }
    printf("%d %d",min,a);
    return 0;
}

