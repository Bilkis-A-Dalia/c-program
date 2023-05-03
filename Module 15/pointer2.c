#include<stdio.h>
int main()
{
    double x=5.26;
    double *ptr = &x;
    double *ptr2 =ptr;
    *ptr=10.20;

    printf("Value of x:%0.2lf\n",x);
    printf("Value of x:%0.2lf\n",*ptr);
    printf("size of ptr:%d\n",sizeof(ptr));
    return 0;
}

