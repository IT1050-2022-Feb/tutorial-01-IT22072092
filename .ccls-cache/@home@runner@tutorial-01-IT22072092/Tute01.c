/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>


int main()
{ 
  float mark1, mark2;

  printf("Enter Subject 1 marks : ");
  scanf("%f",&mark1);

  printf("Enter Subject 2 marks : ");
  scanf("%f",&mark2);

  printf("Average of 2 marks : %.2f\n", (mark1 + mark2) / 2.0); 
  
  return 0;
}
