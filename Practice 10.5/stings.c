#include<stdio.h>
#include<string.h>
int main()
{
    
    char a[11],b[11];
    scanf("%s %s",&a,&b);
    int st1 = strlen(a);
    int st2 = strlen(b);
    printf("%d %d\n",st1,st2);
    printf("%s%s\n",a,b);
    int temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    printf("%s %s",a,b);

    return 0;
}

