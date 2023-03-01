#include <stdio.h>
#include "calculatorLib.h"

int main() {
  int num1,num2;
  printf("Please Enter Two Value\n");
  scanf("%d %d",&num1,&num2);

  printf("Sum of them %d\n",sum(num1,num2));
  printf("Subs of them %d\n",subs(num1,num2));
  printf("Multiplication of them %d\n",mult(num1,num2));
  printf("Division of them %f\n",div(num1,num2));
  return 0;
}
