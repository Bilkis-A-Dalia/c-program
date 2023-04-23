#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int c=0,s=0;
    
      for(int i=0;  i<strlen(a); i++)
    {
        if(a[i]>='A' && a[i]<='Z')
    {
        c++;
    }
     
      else if(a[i]>='a' && a[i]<='z')
    {
        s++;
    }
    }
    
    printf("%d %d",c,s);
    return 0;
}

