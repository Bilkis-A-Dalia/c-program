#include<stdio.h>
int main()
{
    long long int n,i,sum=0;
    scanf("%lld",&n);
    long long int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]); 
        sum = sum+ar[i];  
    }
    
        if(sum<0)
        {
            printf("%lld",sum*(-1));
        }
        else
        {
            printf("%lld",sum);
        }
        
    return 0;
}

