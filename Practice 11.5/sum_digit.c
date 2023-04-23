#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    char ar[n];
    scanf("%s",ar);
    for(int i=0;i<n;i++)
    {
        int value=ar[i]-48; 
        sum = sum+value;  
    }
    
        printf("%d\n",sum);
   
    return 0;
}

