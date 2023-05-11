#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    int c=0,d=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        
        if(a>b)
        {
            c++;
        }
        else if(b>a)
        {
            d++;
        }
        else
        {
            c++;
            d++;
        }
    }
    if(c>d)
    {
        printf("Tiger");
    }
    else if(d>c)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
    
    return 0;
}


