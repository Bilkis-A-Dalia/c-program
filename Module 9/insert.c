#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int position,value;
    scanf("%d %d",&position,&value);
    for(i=n;i>=position+1;i--);
    {
        ar[i]=ar[i-1];
    } 
    
    ar[position]=value;
    for(i=0;i<=n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}

