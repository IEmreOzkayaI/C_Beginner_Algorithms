#include <stdio.h>

int main() {
 int num1 , num2 ;
  printf("Please enter first number : " );
  scanf("%d",&num1 );
  printf("Please enter second number : " );
  scanf("%d",&num2 );

  int total = num1 + num2 ;
  float average = (num1 + num2) / 2 ;
  int square = (num1*2) + (num2*2) ;

  printf("Total : %d\n",total );
  printf("Average : %f\n",average );
  printf("Square : %d\n",square );


  int n1 , n2 , n3 ;
  printf("This program displays max of giving two integers\n\n" );
  printf("Please enter three integer : " );
  scanf("%d %d %d",&n1,&n2,&n3 );
  if (n1>n2 && n1>n3) {
  printf("max is %d\n",n1 );
  }
  else if (n2>n1 && n2>n3){
    printf("Max is : %d\n",n2 );
  }
  else {
  printf("max is %d \n",n3 );
  }




  return 0;
}
