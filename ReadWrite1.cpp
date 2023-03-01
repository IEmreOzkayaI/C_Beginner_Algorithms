#include <stdio.h>
int main(){
	char name[20],surname[20],letterGrade;
	int stdno=1,mid,final,count=0,rawGrade;
	FILE *f1;
	FILE *f2;
	f1=fopen("C:\\Users\\emrec\\OneDrive\\Masaüstü\\Csamples\\Grades.txt","r");
	f2=fopen("C:\\Users\\emrec\\OneDrive\\Masaüstü\\Csamples\\FinalGrades.txt","w");
	
	while(!feof(f1))
	{
		fscanf(f1,"%d %s %s %d %d\n",&stdno,name,surname,&mid,&final);
		rawGrade = 0.4*mid+0.6*final;
		if(rawGrade>=90){
			letterGrade='A';
		}
			else if(rawGrade>=80){
				letterGrade='B';
			}
				else if (rawGrade>=60){
					letterGrade = 'C';
				}
					else{
							letterGrade = 'F';
						}
		
		
		
		if(!feof(f1))
		{
			fprintf(f2,"%d %s %s %c\n",stdno,name,surname,letterGrade);
			count++;
		}			
	}
	fclose(f1),fclose(f2);
	printf("%d student data was written to the letter grade file\n",count);
	
	return 0;
}
