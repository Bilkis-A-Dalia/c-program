#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(20000<a)
    {
        printf("Gucci Bag\nGucci Belt",a);
    }
    else
    {
    if(10000<=a)
    {
        printf("Gucci Bag",a);
    }
    else if(5000<=a)
    {
        printf("Lavis Bag",a);
    }
    else 
    {
        printf("Something",a);
    }
    }
    return 0;
}