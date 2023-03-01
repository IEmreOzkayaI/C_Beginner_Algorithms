#include <stdio.h>

int main(){
	FILE *f;
	int sum=0,c;
	int num;
	f  = fopen("C:\\Users\\emrec\\OneDrive\\Masaüstü\\MyData.Txt","r");
	
	
	while(!feof(f))
	{
		fscanf(f,"%d",&num);
		
		if(!feof(f))
		{
			printf("Number is %d\n",num);
			sum=sum+num;
			c++;		
		}	
	}
	printf("%d integer read and sum of them is %d",c,sum);
	fclose(f);

	return 0;
}
