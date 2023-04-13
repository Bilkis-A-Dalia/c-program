#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b,max=0;
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(b>max)
        {
            max=b;
        }
    }
    printf("%d\n",max);
    return 0;
}

