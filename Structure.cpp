#include <stdio.h>


int main(){
	FILE *fp;
	int num;
	int a=0;
	int max = 0 ;
	// fp = fopen("SampleFile.txt","w"); son girilerni kaydder fprintf kullanýlýr
	//fp fopen("SampleFile.txt","a"); girilenlerin sýrayla sýralar fprintf kullanýlýr
	
	fp=fopen("SampleFile.txt","r") ;
	
	/*dyadan veriyi alýr ekrana yazar fscanf kullanýlýr. */
	
	if(fp==NULL)
	{
		printf("Error ! File can not be created . \n");
	}
	

	while(!feof(fp)){
	
	
    fscanf(fp,"%d",&num);
	
	
	if(fp >= max){
		max=fp;

	}
	
	a++;
	}
	
	
	fclose(fp);
	
	printf("there is %d " , a);
	printf("Maximum is :",max);
	
	
	
	
	
	
	
	
	return 0 ;

}

