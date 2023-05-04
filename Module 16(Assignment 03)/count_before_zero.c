#include<stdio.h>
int count_before_zero( int *ar,int n)
{
    int a=0;
    for(int i=0; i<n;i++)
    {
        if(ar[i]==0)
        {
            break;
        }
        a++;
    }
    return a;
}
int main()
{
    int n;
    int b;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    b=count_before_zero(ar,n);
    printf("%d ",b);
    return 0;
}

