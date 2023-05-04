#include<stdio.h>
#include<string.h>
int is_palindrome(char *n)
{
    int p=1,sz;
    sz=strlen(n);
    int i=0,j=sz-1;
    while(i<j)
    {
        if(n[i++]!=n[j--])
        {
            p=0;
            break;
        }
    }

    if(p>0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int p;
    char n[100];
    scanf("%s",n);
    p = is_palindrome(n);
    if(p==1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}

