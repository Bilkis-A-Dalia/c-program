#include<stdio.h>
int sum()//it will ignore value
//inside we can use void (it will show error)
{
    int a,b,s;
    scanf("%d %d",&a,&b);
    s=a+b;
    return s;
}

int main()
{
    int s=sum();
    printf("%d",s);
    return 0;
}

