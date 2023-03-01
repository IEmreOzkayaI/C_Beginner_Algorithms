#include <stdio.h>
main(){
  int operation,n1,n2;

  printf("CALCLATOR\n");
  printf("1-Addition\n");
  printf("2-Substraction\n");
  printf("3-Multiplication\n");
  printf("4-Division\n");
  printf("5-Exit\n");

  printf("Please Enter Operation Number : " );
  scanf("%d",&operation );

  switch (operation) {
    case 1:
      printf("Please Enter Two Value :" );
      scanf("%d %d",&n1,&n2 );
      printf("%d + %d = %d",n1,n2,n1+n2 );
      break;
    case 2 :
      printf("Please Enter Two Value :" );
      scanf("%d %d",&n1,&n2 );
      printf("%d - %d = %d",n1,n2,n1-n2 );
      break;
    case 3 :
      printf("Please Enter Two Value :" );
      scanf("%d %d",&n1,&n2 );
      printf("%d * %d = %d",n1,n2,n1*n2 );
      break;
    case 4 :
      printf("Please Enter Two Value :" );
      scanf("%d %d",&n1,&n2 );
      printf("%d / %d = %d",n1,n2,n1/n2 );
      break;
    case 5 :
      printf("Thank You , Good Bye" );
      break;
    default:
     printf("Enter Right Value !!\n");
     break;
  }




}
