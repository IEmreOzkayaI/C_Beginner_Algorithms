#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[20]; // It keeps students' names 
	char surname[20]; // It keeps students' surnames.
	char department[20]; // It keeps students' departments.
	
	FILE *f; // It creates a pointer from the file. 
	f = fopen("StudentData.txt","r"); // Pointer opens the file.
	
	printf("=== PROGRAM TO READ TABLE FROM EXISTING FILE === \n\n");
	
	if(f==NULL) // It controls the file , exist or not .
	{
		printf("This file doesn't exist!!'"); // If file doesn't exist , prints to the screen.
		exit(1); // Stops to program.
	}
	
	else // If file exist , program runs here.
	{	
		while(!feof(f)) // The loop returns as long as there is no end of the loop. 
		{
			if(!feof(f)) // If program comes to end.Stop
 			{
				fscanf(f,"%s %s %s",name,surname,department); // Pointer gets the informations from file.
				printf("%s %s %s\n",name,surname,department); // Program prints the informations on the screen
			}	
		}
			
	}
	fclose(f); // It closes the pointer of file.
	return 0;  // It returns 0 , so no value will be output.
}
