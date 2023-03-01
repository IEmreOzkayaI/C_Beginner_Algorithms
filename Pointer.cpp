#include <stdio.h>
void swap(int px , int py )
{
	int temp ;
	temp = px ;
	px = py ;
	py = temp;
}


int main(){
	int a,b,c;
	int *pa,*pb,*pc;
	a=3,b=5,c=8;
	printf("%d %d %d \n",a,b,c);
	
//         we asign value
	pa=&a; 
	pb=&b;
	pc=&c;
//------------------------------------

//     these are memory adress
	printf("%d %d %d\n",pa,pb,pc);	
//--------------------------------------	

	printf("%d %d %d \n",*pa,*pb,*pc); 
//      line 7 and 13 is same.

	swap(a,b);
	printf("a=%d  b=%d",a,b);
	
	return 0 ;
}

