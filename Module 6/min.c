#include<stdio.h>
#include<limits.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b,min=INT_MAX;
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(b<min)
        {
            min=b;
        }
    }
    printf("%d\n",min);
    return 0;
}
