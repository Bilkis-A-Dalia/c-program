#include<stdio.h>
//global
int x=500;
void fun(void)
{
    //int s= 100;
    //printf("address of fun s: %p\n",s);
    // printf("%d\n",x);
    // printf("address of fun s: %p\n",x);
}
int main()
{
    //int s = 200;
    //printf("address of main s:%p\n",s);
    // printf("%d\n",x);
    // printf("address of fun s: %p\n",x);
    // fun();

    int y=300;
    for(int i=0;i<5;i++)
    {
        printf("%d\n",y);
    }
    return 0;
}

