#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    for(i=1;i<=5;i=i+1)
    {
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}