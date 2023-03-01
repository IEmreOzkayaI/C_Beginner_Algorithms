#include <stdio.h>

main(){
  int counter,num,sum = 0;
  
  
  for(counter=1 ;counter<=2;counter++){
  	printf("Please Enter Value : ");
  	scanf("%d",&num);
  	sum=sum+num ;
  	
  }
  
  printf("The sum of given values is %d\n",sum );
  
  return 0 ;
  
  
  
  
  
  }
