#include <stdio.h>

int main(){
	
  int counter,sum,num;
  counter =1 ;
  
  while (counter<=5) {
    scanf("%d",&num );
    sum+=num;
    counter++;

  }
  
  printf("The sum of given values is %d\n",sum );
  return 0;
}
