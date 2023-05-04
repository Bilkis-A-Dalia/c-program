//No Return + No Parameter
#include<stdio.h>

void swap(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}
int main()
{
    swap();
    return 0;
}

