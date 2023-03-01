#include <stdio.h>

int main() {
  int temperature;
  printf("Please Enter temperature value:");
  scanf("%d",&temperature );

  if (temperature<0) {
    printf("Freezing weather\n");
  }
  else if (temperature<10) {
    printf("Very cold weather\n");
  }
  else if (temperature<20) {
    printf("Cold Weather\n");
  }
  else if (temperature<30) {
    printf("Normal in Temp\n");
  }
  else if (temperature<40){
    printf("Its hot\n");
  }
  else{
    printf("Its Very Hot\n");
  }
  return 0;
}
