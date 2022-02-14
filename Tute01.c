/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int mark1,mark2; //declaring the variables
  float avg;

  printf("Enter the marks of subject 1:");//input mark1
  scanf("%d",&mark1);

  printf("Enter the marks of subject 2:");//input mark2
  scanf("%d",&mark2);

  avg=(mark1+mark2)/2;//calculation

  printf("Average :%.2f\n",avg); //displaying the average

   
  return 0;
}

