#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int d =strcmp(a,b);
    if(d<0)
    {
        printf("a is smaller\n");
    } 
    else if(d>0)
    {
        printf("b is smaller\n");
    }
    else
    {
        printf("same\n");
    }
    return 0;
}

