#include <stdio.h>
#include <stdlib.h>
float average(int *x,int size);
int main()
{
	int n ;
	int *value;
	double avg;
	
	printf("Enter the number of experiments ");
	scanf("%d",&n);
	
	value = (int *)malloc(n*sizeof(int));
	
	for(int i = 0 ; i < n ; i ++){
		printf("%d. measurement value ?",i+1);
		scanf("%d",*(value+i));
		
	}
	
	avg = average(value,n);
	printf("Average of experiments is : %.2f\n",avg);
	
	return 0 ;
}

float average(int *x,int size)
{
	int i , sum = 0 ;
	float avrg;
	for(i=0 ; i < size ; i ++)
	{
		sum += *x;
		x++;	
		
	}
	avrg=(float)sum/size;
	return avrg;
}
