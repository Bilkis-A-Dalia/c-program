#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    gets(a);
    int dora=1;
    int st = strlen(a);
    int i=0,j=st-1;
    while(i<j)
    {
        if(a[i++]!=a[j--])
        {
            dora=2;
            break;
        }
    }
    if(dora==1)
    {
        printf("YES");
    }
    else
{
    printf("NO");
}
    return 0;
}

