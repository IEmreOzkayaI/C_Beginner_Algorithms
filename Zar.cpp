#include <stdio.h>
#include <time.h>  // sistem saatini kulanmak için
#include <stdlib.h> // rastgele sayı için
#include "MyLib.h"
// DÜŞEŞ BULMA PROGRAMI

int main(){
  int i,n,counter=0;
  srand(time(NULL));
  for(i=1 ; i<=100 ; i++){

  int f=rollDice();
  int s=rollDice();

  printf("Coming dice is %d and %d\n",f,s);

  if(s==6 && f==6){
    counter ++;
  }
}
  printf("There is %d times Duses\n",counter);

  return 0;
}
