#include <stdio.h>

int main() {
  int a[5][2]={
       {1,2},
       {3,1},
       {0,0},
       {2,4},
       {3,6}
};
  int i,j;

  for (i=0;i<5;i++) {
    for (j=0 ; j<2;j++ ) {
      printf("%d",a[i][j]);
    }
    printf("\n" );
  }

  return 0;
}
