#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("i will go cox's bazar\n");
        if(tk>=10000)
        {
            printf("i will go saint martin\n");
        }
        else
        {
            printf("i will go back\n");
        }
    }
    else
    {
        printf("i don't want to go anywhere\n");
    }
    return 0;
}