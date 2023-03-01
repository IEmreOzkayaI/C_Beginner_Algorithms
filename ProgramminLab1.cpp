#include<stdio.h>

int main (){
printf("My name is Ahmet\n");
printf("I am learning C Programming Language.This is my first C Programming Project.");
printf("\n==============================================\n");
int age0 ;
printf("How old are you ?\n");
scanf("%d",&age0);
printf("You are %d years old. ",age0);
printf("\n==============================================\n") ;
int by;
printf("Please enter your birth year ?\n");
scanf("%d",&by);
int age1 = 2020 - by ;
printf("You are %d years old.",age1);
printf("\n==============================================\n") ;
int n1 , n2 ;
printf("Please enter the first integer value.\n");
scanf("%d",&n1);
printf("Please enter the second integer value.\n");
scanf("%d",&n2);
int total = n1 + n2 ;
printf("Sum is %d",total);
printf("\n==============================================\n") ;
printf("Please enter the first float value.\n");
float num1,num2;
scanf("%f",&num1);
printf("Please enter the second float value.\n");
scanf("%f",&num2);
float sum = num1 + num2 ;
printf("Sum is %f",sum);


return 0 ;



}

