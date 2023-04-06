#include<stdio.h>
int main()
{
  int tk;
  scanf("%d",&tk);
  if(tk>=100)
  //if(tk==100)
  {
    printf("I will buy two books");
  }
  else if(tk>=50)
  {
    printf("I will buy one book");
  }
  else
  {
    printf("i will not");
  }
    return 0;
}