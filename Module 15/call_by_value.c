#include<stdio.h>

int fun(int x)
{
    x=200;
    printf("Address of fun x :%p\n",x);
    printf("value of fun x :%d\n",x);

}
int main()
{
    int x=100;
    printf("Address of main x :%p\n",x);
    fun(x);
    printf("value of main x :%d\n",x);
    return 0;
}

