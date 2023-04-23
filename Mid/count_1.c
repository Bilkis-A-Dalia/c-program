#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int e=0,o=0;
    {
    for(int i=0; i<n; i++)
    {
        if(ar[i]%2==0)
    {
        e++;
    }
    }
    for(int i=0; i<n; i++)
    {  
       if(ar[i]%2==1)
    {
        o++;
    }
    }
    }
    printf("%d %d",e,o);
    return 0;
}

