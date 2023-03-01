#include <stdio.h>
int avCal(int cal[],int n);
int main(int argc, char const *argv[]) {
  int values[]= {4,7,3,9,2,8,-4,7 };
  float avarage;
  avarage = avCal(values,8);
  printf("Avarage is : %f\n",avarage);
  return 0;
}

int avCal(int cal[],int n){
  int i,j,sum=0;

  for(i=0;i<8;i++)
  {
     sum = sum + cal[i];

  }
  return sum/n ;
}
