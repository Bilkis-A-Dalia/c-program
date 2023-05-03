#include<stdio.h>
int main()
{
    int x=100;
    int *ptr=&x;


    // printf("Addrss of x:%p\n",&x);
    // printf("Value of ptr:%p\n",ptr);
    // printf("Value of ptr:%p\n",&ptr);
    // printf("Memory of ptr:%d\n",sizeof(ptr));

    //x & *ptr same 
    x=100;
    //*ptr=100;
    printf("Value of x:%d\n",x);
    printf("Value of x:%d\n",*ptr);
    return 0;
}

