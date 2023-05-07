#include<stdio.h>
void dora(int i)
{
    if(i==6) return;//Base case
    dora(i+1);
    printf("%d\n",i);
    
}
int main()
{
    dora(1);
    return 0;
}

