#include<stdio.h>

// return_type name (parameter)
//     {
//         code;
//         return what?
//     }

int sum(int a,int b)
{
    int sum = a+b;
    return sum;
} 

int main()
{
    // int s=sum(10,20);
    // printf("%d\n",s);
    printf("%d\n",sum(10,20));
    printf("%d\n",sum(100,200));
    return 0;
}