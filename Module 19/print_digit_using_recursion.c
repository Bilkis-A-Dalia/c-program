#include<stdio.h>
void dora(int n)
{
    if(n==0) return;
    int x=n%10;
    dora(n/10);
    printf("%d ",x);
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        int n;
        scanf("%d",&n);
        dora(n);
        if(n==0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}

