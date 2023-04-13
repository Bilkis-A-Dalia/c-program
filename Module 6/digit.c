#include<stdio.h>
int main()
{
    int dora,d;
    scanf("%d",&dora);
    for(d=1;d<=dora;d++)
    {
        int a;
    scanf("%d",&a);
    do
    {
        printf("%d ",a%10);
        a=a/10;
    }
    while(a!=0);
    printf("\n");
    }
    return 0;
}

