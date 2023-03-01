#include <stdio.h>
float calculateSum(float test[]);

main(){
float testValues[]={23.4 , 55.7 , 2.0 , 3.8 , 40.2 , 18.3 };
float result;
result = calculateSum(testValues);
printf("Sum of test is %.2f\n",result);
return 0 ;
}

float calculateSum(float test[]){

  float sum= 0 ;
  for(int i = 0 ; i<6 ; i ++){
    sum = sum + test[i];
  }
  return sum ;
}
