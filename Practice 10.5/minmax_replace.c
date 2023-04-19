#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
   int min=INT_MAX;
   for(int i=0;i<=n;i++)
   {
    if(ar[i]<ar[min])
     {
      min=i;
     }
   }
   int max=0;
   for(int i=0;i<n;i++)
   {
    if(ar[i]>ar[max])
     {
      max=i;
     }
   }
   int temp=ar[min];
   ar[min]=ar[max];
   ar[max]=temp;
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}