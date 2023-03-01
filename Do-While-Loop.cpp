#include <stdio.h>

main(){
  int counter,num;
  int sum = 0 ;
  counter = 7;
  
  do {
    scanf("%d",&num );
    sum=sum+num;
    counter++;
  } while(counter<=5);
  printf("The sum of given values is %d\n",sum );
  return 0 ;
}
