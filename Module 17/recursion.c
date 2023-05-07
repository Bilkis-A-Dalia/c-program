//here it will be infinitive loop bcz of this calling system...
//call itself
#include<stdio.h>
void fun()
{
    printf("Dora\n");
    fun();
}
int main()
{
    fun();
    return 0;
}

