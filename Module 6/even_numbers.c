#include<stdio.h>
int main()
{
    int i,d;
    scanf("%d",&d);
    if(d==1)
    {
        printf("-1\n");
    }
    else
    {
        for ( i = 1; i<=d; i++)
        {
            if (i%2==0)
            {
                printf("%d\n",i);
            }
            
        }
        
    }
    return 0;
}
