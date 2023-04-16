#include<stdio.h>
int main()
{
    char ar[5];
    for(int i=0; i<5;i++)
    {
        scanf("%c",&ar[i]);
    }
    for(int i=0; i<5; i++)
    {
        printf("%c\n",ar[i]);
    }
    return 0;
}

