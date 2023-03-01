#include <stdio.h>
int main(){
	char name[20],surname[20];
	int stdno=1,mid,final,count=0;
	FILE *f1;
	f1=fopen("C:\\Users\\emrec\\OneDrive\\Masaüstü\\Csamples\\Grades.txt","r");
	printf("Std Num	\t	Name  \t  Surname	\t	Midterm	\t	Final	\n");
	printf("-------	\t	----  \t  -------	\t	-------	\t	-----	\n");

	
	while(!feof(f1))
	{
		fscanf(f1,"%d %s %s %d %d\n",&stdno,name,surname,&mid,&final);
		if(!feof(f1))
		{
			printf("%6d \t\t\t%-10s %-20s \t%5d \t\t\t%4d\n",stdno,name,surname,mid,final);
			count++;
		}			
	}
	fclose(f1),
	printf("\n%d student data was printed to the screen\n",count);
	
	return 0;
}
