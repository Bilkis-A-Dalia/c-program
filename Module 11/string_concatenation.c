#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);
    int d=strlen(a);
    //for(int i=0;i<=strlen(b);i++)
    for(int i=0;i<=2;i++)
    {
        a[d]=b[i];
        d++;
    }
    //a[d]='\0';
    printf("%s %s",a,b);
    return 0;
}

