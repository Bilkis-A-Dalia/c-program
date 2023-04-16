#include<stdio.h>
int main()
{
    //char ar[6]={'D','a','l','i','a'};//no gurantee
    char a[6]="Dalia";//gurantee
    //char a[]="Dalia";
   //char a[5]="Dalia\0"; 
    int size=sizeof(a)/sizeof(char);
    printf("%d\n",size);
    printf("%s",a);
    return 0;
}


