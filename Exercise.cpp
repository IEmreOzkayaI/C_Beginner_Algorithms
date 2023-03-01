#include <stdio.h>
main(){
	
	/*int sum=0,counter;
	counter = 0;
	
	do{
		sum=sum+counter;
		counter++;
	}
	while(counter<=10);

	printf("Total is : %d",sum);*/
	
	/*int sum=0,n,m;
	printf("Please Enter value of N :");
	scanf("%d",&n);
	printf("Please Enter value of M :");
	scanf("%d",&m);
	while(n<m){
		sum=sum+n;
		n++ ;
	};
	printf("Total is : %d",sum);*/
	
	int n,sum=0,x;
	int i ;
	
	printf("Please Enter Value:");
	scanf("%d",&n);
	
	printf("Enter %d value \n",n);
	for(i=0 ; i<n;i++){
		scanf("%d",&x);
		sum=sum+x;
	}
		
	printf("Total : %d",sum/n);
	
}
