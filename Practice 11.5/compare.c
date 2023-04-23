#include<stdio.h>
#include<string.h>
int main()
{
    char a[21],b[21];
    scanf("%s %s",a,b);
    int d = strcmp(a,b);
    if(d<0)
    {
        printf("%s\n",a);
    } 
    else if(d>0)
    {
        printf("%s\n",b);
    }
    else if(d==0)
    {
        printf("%s\n",b);
    }
    
    return 0;
}

