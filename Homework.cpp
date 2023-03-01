#include <stdio.h>
#include <stdlib.h>
#include <string.h>																			//Emre Özkaya - Computer Engineering First Class - B1905.010057
int main(){
	char name[20],surname[20],letterGrade;
	int stdno=1,mid,final,count=0,rawGrade,i,answer;
	//First Part
	FILE *fp;
	FILE *fp1;
	fp = fopen("Information.text","w");
	fp1 = fopen("Information.text","r");
	char fileName[]="Information.text";
	
	if(fp == NULL)
   {
      printf("Error!");   
      exit(1);            
   }
   else{
   	// Second Part
   	
   	for(i=0 ; i<5 ; i++){
   		
   		printf("Please Enter A New Student and Exam Inform\n");

		printf("\nStudent Number  : "); scanf("%d",&stdno);
		printf("Student Name    : "); scanf("%s",name);
		printf("Student Surname : "); scanf("%s",surname);
		printf("Midterm Exam    : ");  scanf("%d",&mid);
		printf("Final Exam      : "); scanf("%d",&final);
	
		fprintf(fp,"%d %s %s %d %d\n",stdno,name,surname,mid,final);
		printf("\n");
	
	   }
	   fclose(fp);
	   printf("All student data was written to the Information.text\n\n\n");
	   
	//Third Part
	   
	printf("Std Num	\t	Name  \t  Surname	\t	Midterm	\t	Final	\n");
	printf("-------	\t	----  \t  -------	\t	-------	\t	-----	\n");
	   
	for(i=0 ; i<5 ; i++){
	
		fscanf(fp1,"%d %s %s %d %d\n",&stdno,name,surname,&mid,&final);
		
		printf("%6d \t\t\t%-10s %-20s \t%5d \t\t\t%4d\n",stdno,name,surname,mid,final);
		count++;
					
	}
	fclose(fp1);
	printf("\n%d student data was printed to the screen\n\n",count);
	
	//Fourth Part
		
	printf("Do you want to delete your file ? \n");
	printf("!! If you say -yes- your file will perminantly delete !!\n\n");
	printf("YES --> 1\n");
	printf("NO  --> 2");
	printf("\nAnswer is : ");
	scanf("%d",&answer);
	
	if(answer==1){
		  if(remove(fileName) == 0) {
     		 printf("File deleted successfully");
   		} 		
  			 else {
     			 printf("Error: unable to delete the file");
  			}	
	}
		else{
			printf("File didn't delete .");
		}
   }	
	return 0;
}
