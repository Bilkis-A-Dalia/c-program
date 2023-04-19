#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001];
    int dali;
    fgets(a,100001,stdin);
    int st = strlen(a);    
    for(int i=0;i<st;i++)
    {
    if(a[i]>='a' && a[i]<='z')
    {
        dali=a[i];
        a[i]=dali-32;

    }
    else if(a[i]>='A' && a[i]<='Z') 
    {
        dali=a[i];
        a[i]=dali+32;
    }
    else if(a[i]==',')
    {
        a[i]=' ';
    }
    }
printf("%s",a);
    return 0;
}

