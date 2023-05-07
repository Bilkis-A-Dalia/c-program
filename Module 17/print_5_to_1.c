#include<stdio.h>
void dora(int i)
{
    if(i==0) return;//base case
    printf("%d\n",i);
    dora(i-1);
}
int main()
{
    dora(5);
    return 0;
}

