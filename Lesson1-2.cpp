#include <stdio.h>
int main(){
	
	int number1  ;
	int number2  ;
	int sum , avarage , squareTotal ;
	
	printf("please enter two integer values :");
	scanf("%d  %d", &number1 , &number2);
	
	sum = number1 + number2 ;
	avarage = (number1+number2)/2 ;
	squareTotal = (number1*number1) + (number2*number2);
	
	printf("Total of given values : %d \n", sum );
	printf("Average : %d\n", avarage);
	printf("SquareTotal : %d\n",squareTotal);
	
	
	


}
