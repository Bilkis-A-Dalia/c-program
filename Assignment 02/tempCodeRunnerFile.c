#include<stdio.h>
int main()
{
    int n,a,i,sume=0,sumo=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a);
    }
    {
        if (i%2==0)
        {
            sume=sume+i;
        }
        else
        {
            sumo=sumo+i;
        }
    } 
    printf("%d %d",sume,sumo);   
    return 0;
}

