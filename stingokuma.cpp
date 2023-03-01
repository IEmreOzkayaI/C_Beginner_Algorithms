#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int slen(char *s)
{
	int count;
	for(;*s!='\0';s++)
		count++;
		
	return count;
}

int main()
{
	int k ;
	char sentence[80];
	fgets(sentence,80,stdin);
	// fgets ile yaparsan +1 oluyor sanırım.
	k=slen(sentence);
	printf("The number of characters in given sentence is %d\n",k);
	
	return 0 ;
}
