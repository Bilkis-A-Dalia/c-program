//pass by reference
#include<stdio.h>

void dora(int *x)
{
    printf("Before:%d\n",*x);
    *x=555;
    printf("%d\n",*x);
}
int main()
{
    int x;
    scanf("%d",&x);
    dora(&x);
    printf("After:%d\n",x);
    return 0;
}

