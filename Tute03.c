/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
        int n, i, sum=0;
        printf("==== C program to calculate the sum of the numbers from 1 to n ====\n\n");
        printf("Enter an integer value for 'n' : ");
        scanf("%d", &n);

        printf("sum = ");
        for(i=1; i<=n; i++)
        {
                if(i!=n)
                {
                        printf("%d + ", i);
                }
                else
                {
                        printf("%d = ", i);
                }
                sum += i;
        }       
        printf("%d\n", sum);

        printf("Sum of the numbers from 1 to %d is = %d\n", n, sum);
  
  return 0;
}

