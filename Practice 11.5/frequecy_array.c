#include<stdio.h>
int main()
{
    char a;
    int cnt[26]={0};
    while(scanf("%c",&a)!=EOF)
    {
        cnt[a-'a']++;
    }
    for(char i='a'; i<='z';i++)
    {
        if(cnt[i-'a']>0)
        {
            printf("%c : %d\n",i,cnt[i-'a']);
        }
    }
   
    return 0;
}


