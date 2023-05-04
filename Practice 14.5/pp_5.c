#include<stdio.h>
//with return with perameter
int char_to_ascii(char a)
{
    int b=a+32;
    return b;
} 

int main()
{
    char n;
    scanf("%c",&n);
    printf("%c\n",char_to_ascii(n));
    return 0;
}

