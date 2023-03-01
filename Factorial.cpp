#include <stdio.h>
#include "factorialLab.h"

main(){
  int num ;
  printf("Please Enter A Num : ");
  scanf("%d",&num);
  printf("Factorial of %d = %d",num,fac(num));
  return 0 ;
}
