#include <stdio.h>

int main() {
  int element[6];
  printf("Please Enter 6 value:");
  for (int i = 0 ; i<6 ;i++) {
    scanf("%d",&element[i]);
  }

  int max1 = element[0];
  int max2 = element[1];
  int j ;
  for ( j = 0 ; j<6 ;j++ ) {
    if (element[j]>max1) {
      max2 = max1 ;
      max1 = element[j];
    }
    else if(element[j]>max2){
      max2 = element[j];
    }

  }
    printf("Second Largest is : %d",max2);
  return 0;
}
