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
    int a;
    scanf("%d",&a);
    int b=-1;
    for(i=0;i<n;i++)
    {
    if(ar[i]==a)
        {
            b=i;
            break;
        }
    }
    printf("%d",b);
    return 0;
}

