#include<stdio.h>
int dora(char a[],int i)
{
    if(a[i]=='\0') return 0;
    int l=dora(a,i+1);
    return l+1;
}
int main()
{
    char a[100]="dora-dora";
    int lenth=dora(a,0);
    printf("%d\n",lenth);
    return 0;
}

