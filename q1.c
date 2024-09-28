#include <stdio.h>

int main()
{
   int i, n, sum = 0; // Declare variables: 'i' for iteration, 'n' for user input, 'sum' to store the sum of squares.

   // Prompt the user to enter a number 'n'.
   printf("enter n : ");
   scanf("%d", &n); // Take input from the user and store it in 'n'.
   
   printf("the sequence is"); // Output the phrase indicating the start of the sequence.

   // Loop from 1 to 'n' to print the square of each number and calculate the sum.
   for(i = 1; i <= n; i++) // 'i' starts from 1, and as long as 'i' is less than or equal to 'n', the loop continues.
   {
     printf(" %d", i*i); // Print the square of 'i' during each iteration.
     sum += i*i; // Add the square of 'i' to the running total 'sum'.
   }
   
   printf("\n"); // Print a newline after the sequence of squares.
   
   // Print the sum of the sequence of squares.
   printf("The sum of the sequence is %d  \n", sum); 

   return 0; // End of the program.
}
