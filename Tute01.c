/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
        int mark1, mark2;
        float avg=0.0;

        printf("Enter marks of subject 1 : ");
        scanf("%d", &mark1);
        printf("Enter marks of subject 2 : ");
        scanf("%d", &mark2);

        avg= (mark1+mark2)/2.0;

        printf("Average of two marks     = %.2f\n", avg);
  
  return 0;
}

