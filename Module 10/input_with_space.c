#include<stdio.h>
#include<string.h>
int main()
{
    char a[17];
    //gets(a);
    fgets(a,19,stdin);
    a[10]='\0';//this line will finish point
    printf("%s",a);
    return 0;
}

