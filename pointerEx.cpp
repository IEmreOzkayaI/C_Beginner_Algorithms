#include <stdio.h>
int main()
{
	int a[3];
	int *p;
	int b;
	int sum = 0;
	printf("Please Enter Values : ");
	for(int i = 0 ; i < 3 ; i++)
	{
		scanf("%d",&a[i]);
	}
	p = &b;
	for(int i = 0 ; i < 3 ; i++)
	{
		sum = sum + *p;
		p++;
	}
	printf("%d",sum);
	
	
	
	
	
	return 0;
}
