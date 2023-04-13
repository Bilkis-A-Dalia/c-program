#include<stdio.h>
int main()
{
    int ar[3]={1,2,3},i;
    //int ar[3]={0} to get zero
    //int ar[3]={1} to get only 1st value & other will be zero
    for(i=0;i<3;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}

