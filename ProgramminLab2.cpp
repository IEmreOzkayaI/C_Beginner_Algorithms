#include <stdio.h>

int main() {


  float Celcius ;
  printf("Please Enter the Celcius : " );
  scanf("%f",&Celcius );
  float fahrenheit = (Celcius * 1.8) + 32 ;
  printf("%f Celcius is : %f fahrenheit\n",Celcius,fahrenheit );


float cm , inch ;
int feet ;
printf("Please write the value as a cm : " );
scanf("%f",&cm );
inch = cm / 2.54 ;
feet = inch/12;
inch = inch - feet * 12 ;
printf("%d feet %.2f inch\n",feet,inch );



int seconds,minutes,hours;
printf("Please enter the value as a second : " );
scanf("%d",&seconds );
hours = seconds / 3600  ;
minutes = (seconds - hours * 3600 ) / 60 ;
seconds = seconds - hours *3600 - minutes * 60 ;
printf("%d hours %d minutes %d seconds\n",hours , minutes , seconds );


  return 0;
}
