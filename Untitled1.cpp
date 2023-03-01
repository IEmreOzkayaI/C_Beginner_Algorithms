#include <stdio.h>
int main(){
	char name[20],surname[20];
	int stdno=1,mid,final,count=0;
	FILE *f1;
	f1=fopen("C:\\Users\\emrec\\OneDrive\\Masaüstü\\Csamples\\Grades.txt","w");
	
	while(stdno!=0)
	{
		printf("Please Enter A New Student and Exam Inform\n");
		printf("Enter 0 as student number to stopentry\n\n");
		printf("Student Number  : "); scanf("%d",&stdno);
		printf("Student Name    : "); scanf("%s",name);
		printf("Student Surname : "); scanf("%s",surname);
		printf("Midterm Exam    :");  scanf("%d",&mid);
		printf("Final Exam      : "); scanf("%d",&final);
		if(stdno!=0)
		{
			fprintf(f1,"%d %s %s %d %d\n",stdno,name,surname,mid,final);
			count++;
		}	
	}
	fclose(f1),
	printf("%d student data was recorded\n",count);
	
	return 0;
}
