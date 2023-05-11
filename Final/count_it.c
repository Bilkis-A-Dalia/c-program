#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    fgets(s,1001,stdin);
    int a=0,b=0,c=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='A'&& s[i]<='Z')
        {
            a++;
        }
        if(s[i]>='a'&& s[i]<='z')
        {
            b++;
        }
        if(s[i]==' ')
        {
            c++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n",a,b,c);
    return 0;
}

