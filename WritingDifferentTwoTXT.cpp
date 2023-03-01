#include <stdio.h>
#include <stdlib.h>
#include <string.h>																			//Emre Özkaya - Computer Engineering First Class - B1905.010057
int main(){
	char name[20],surname[20],letterGrade;
	int stdno=1,mid,final,count=0,rawGrade,i,countl=0,counth=0;
	//Description Part
	FILE *fp;
	FILE *fp1;
	FILE *fp2;
	FILE *fp3;

	fp = fopen("Information.txt","w");
	fp1 = fopen("Information.txt","r");
	fp2 = fopen("LowerGrade.txt","w");	
	fp3 = fopen("HigherGrade.txt","w");

	
	// If file doesn't exist.
	if(fp == NULL)
   {
      printf("Error!");   
      exit(1);            
   }
   else{
   	
   	// Writing part
   	
   	while(stdno!=0){
   		
   		
   		printf("Please Enter A New Student and Exam Inform\n\n");
		printf("Student Number  : ");   scanf("%d",&stdno);
		printf("Student Name    : ");   scanf("%s",name);
		printf("Student Surname : ");   scanf("%s",surname);
		printf("Midterm Exam    : ");   scanf("%d",&mid);
		printf("Final Exam      : ");   scanf("%d",&final);
		
	    if(stdno!=0)
		{
		fprintf(fp,"%d %s %s %d %d\n",stdno,name,surname,mid,final);
		printf("\n");
		}
		// Reading file from Information.Txt .
		
		fscanf(fp1,"%d %s %s %d %d\n",&stdno,name,surname,&mid,&final);
		
		//Raw grade calculate part
		rawGrade=0.4*mid +0.6*final;
   		if(rawGrade>90) letterGrade='A';
   		else if(rawGrade>80) letterGrade='B';
   		else if (rawGrade>60) letterGrade='C';
   		else letterGrade='F';
   					
   		//Writing part from Ýnfo.txt to Lowr and Higher.txt
   		
   		if(!feof(fp2))
   		{
   			if(letterGrade=='F')
   			{
			   	if(stdno!=0)
				   {
	   				fprintf(fp2,"%d %s %s %d %d\n",stdno,name,surname,mid,final);
	   				countl++;	
				   }
   			
			}
				else
				{
					
					fprintf(fp3,"%d %s %s %d %d\n",stdno,name,surname,mid,final);
					counth++;
			
				}
					
		   }
	   }
   }
   	   printf("%d student data was written to the Higher File.text\n\n\n",counth);
	   printf("%d student data was written to the Lower File.text\n\n\n",countl);

	   fclose(fp),fclose(fp1),fclose(fp2),fclose(fp3);	
	return 0;
}
