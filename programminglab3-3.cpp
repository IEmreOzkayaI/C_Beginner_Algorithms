#include <stdio.h>
int main() {
 int grade;
 printf("Please Enter Your Grade :");
 scanf("%d",&grade);
 if (grade>=90 && grade<=100) {
   printf("Letter grade is AA\n");
 }
 else if (grade>=80 ) {
   printf("Letter grade is BA\n");
 }
 else if (grade>=70 ) {
   printf("Letter grade is CB\n");
 }
 else if (grade>=60) {
   printf("Letter grade is CC\n");
 }
 else if (grade>=50) {
   printf("Letter grade is DD\n");
 }
 else if (grade>=0) {
   printf("Letter grade is FF\n");
 }
 else{
   printf("Please Enter Valid Value !!!!\n");
 }
  return 0;
}
