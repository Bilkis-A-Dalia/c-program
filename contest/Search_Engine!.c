#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        int ar[n];
        for( int j=0;j<n;j++)
        {
            scanf("%d",&ar[j]);
        }
        int s;
        scanf("%d",&s);
        int flag=0;
        for( int j=0;j<n;j++)
        {
            if(ar[j]==s)
            {
                printf("Case %d: %d\n",i,j+1);
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            printf("Case %d: Not Found\n",i);
        }

    }
    return 0;
}

