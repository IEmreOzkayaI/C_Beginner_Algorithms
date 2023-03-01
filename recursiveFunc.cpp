#include <stdio.h>


int fac(int m);
int  main()
{
  int n;
  printf("Please Enter A Positive Integer : ");
  scanf("%d",&n);
  printf("Factorial of %d=%d\n",n,fac(n));

  return 0;
}

int fac(int m){
  if(m>=1)
  {
    return m*fac(m-1);
  }

  else
  {
    return 1 ;
  }

}
