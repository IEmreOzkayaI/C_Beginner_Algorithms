#include <stdio.h>

main(){

float order,total;

printf("Please Enter Order Kg :");
scanf("%f",&order);

if(order>0 && order<=100){	
	total = order * 15 ;	
	printf("Selling Price : %.2f TL",total);	
}
else if(order>100 && order<=500){
	total = order * 14 ;
	printf("Selling Price : %.2f TL",total);	
}
else if(order>500 && order<1000){
	total = order * 13 ;
	printf("Selling Price : %.2f TL",total);	
}
else if(order>=1000 ){
	total = order * 12 ;
	printf("Selling Price : %.2f TL",total);	
}
else{
	printf("Please Enter Right Value !!!");
}
return 0 ;
}




	



