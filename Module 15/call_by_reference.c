#include<stdio.h>
void fun(int *p)
{
    int x=40;
    printf("address of fun x:%p\n",*p);
    printf("value of p:%p\n",p);
    printf("value of main x:%d\n",*p);
}
int main()
{
    int x=20;
    printf("address of main x:%p\n",x);
    fun(&x);
    printf("%d\n",x);//now x will be change
    return 0;
}

