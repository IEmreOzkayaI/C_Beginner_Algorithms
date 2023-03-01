#include <stdio.h>
#include <time.h>  // sistem saatini kulanmak için
#include <stdlib.h> // rastgele sayı için

int main(){
  int n;
  srand(time(NULL));
  for(int i = 1 ; i <=10 ; i++){
  n = rand()%100+1;   // +1 yapmak kuralmış 99+1 oluyormuşkoymazsak 99 a kadar alıyor.
  printf("VALUE is %d\n",n);

}


  return 0;
}
