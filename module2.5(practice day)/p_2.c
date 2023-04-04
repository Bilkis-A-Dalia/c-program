#include <stdio.h>
int main()  
{  
    int num1, num2;  
    int sum, sub, mult;  
    //float div; 
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;  
    sub = num1 - num2;  
    mult = num1 * num2;  
    //div =num1/num2;
  printf("%d + %d = %d\n", num1, num2, add(num1, num2));
  printf("%d - %d = %d\n", num1, num2, sub(num1, num2));
  printf("%d * %d = %d\n", num1, num2, mult(num1, num2));
 // printf("%d / %d = %.2f\n", num1, num2, div(num1, num2));

  return 0;
}