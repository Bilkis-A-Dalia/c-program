#include<stdio.h>
int main()
{
    int a,b,sum,mns,mlt;
    float div;
    scanf("%d%d",&a,&b);
    sum=a+b;
    mns=a-b;
    mlt=a*b;
    div=a/b;
    div=a/(b*1.0);
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,mns);
    printf("%d * %d = %d\n",a,b,mlt);
    printf("%d / %d = %.2f\n",a,b,div);
    return 0;
}