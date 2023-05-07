#include<stdio.h>
void dora(int i)
{
    if(i==6) return;//Base case
    printf("%d\n",i);
    dora(i+1);
}
int main()
{
    dora(1);
    return 0;
}

