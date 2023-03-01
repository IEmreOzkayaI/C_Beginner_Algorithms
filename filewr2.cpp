#include <stdio.h>
int main(){
	char name[20],surname[20],answer='Y';
	int stdno=1,mid,final,count=0;
	FILE *f1;
	f1=fopen("C:\\Users\\emrec\\OneDrive\\Masaüstü\\Csamples\\Grades.txt","a");
	
	while(answer=='Y' || answer=='y')
	{
		printf("Please Enter A New Student and Exam Inform\n");
		printf("Student Number  : "); scanf("%d",&stdno);
		printf("Student Name    : "); scanf("%s",name);
		printf("Student Surname : "); scanf("%s",surname);
		printf("Midterm Exam    : "); scanf("%d",&mid);
		printf("Final Exam      : "); scanf("%d",&final);
		
	
		fprintf(f1,"%d %s %s %d %d\n",stdno,name,surname,mid,final);
		count++;
		printf("\nDo you want to continue ? (Y/N) : ");
		scanf(" %c",&answer);//BURADA %C NÝN BAÞINA BOÞLUK KOYMAZSAN ÇALIÞMAZMIÞ.
					
	}
	fclose(f1),
	printf("%d student data was recorded\n",count);
	
	return 0;
}
