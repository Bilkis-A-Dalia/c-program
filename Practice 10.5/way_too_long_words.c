#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char a[101];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       scanf("%s",&a); 
        int st = strlen(a);
        if(10<st)
        {
            printf("%c%d%c\n",a[0],st-2,a[st-1]);
        }
        else
        {
            printf("%s\n",a);
        }
        
    }
    
    return 0;
}


