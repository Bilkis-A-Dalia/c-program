#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for( int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int b,c=0;
    scanf("%d",&b);
    for(int i =0; i<n; i++)
    {
       if(a[i]==b)
       {
        c++;
       }
    }
    printf("%d",c);
    return 0;
}

