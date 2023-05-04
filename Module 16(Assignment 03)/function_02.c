//Has Return + No Parameter
#include<stdio.h>
int area_of_triangle()
{
    
    float a,b,h;
    scanf("%f %f",&b,&h);
    a =(b*h)/2;
    return a;
}

int main()
{
    float a = area_of_triangle();
    printf("%.2f",a);
    return 0;
}

