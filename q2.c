#include<stdio.h>

int main()
{
    int num = 1, count, n;  // Declare variables: 'num' for iterating through numbers, 'count' for factorial calculation, and 'n' for the number of terms.
    float sum = 0.0, fact;  // 'sum' stores the total sum of the series, 'fact' will store the factorial of 'num'.
    
    // Prompt the user to input the number of terms for the series.
    printf("Enter the number of terms\n");
    scanf("%d", &n);  // Take input from the user and store it in 'n'.

    // Loop through numbers from 1 to 'n' to calculate and sum the terms of the series.
    while(num <= n)  // The loop runs until 'num' is greater than 'n'.
    {
        fact = 1;  // Reset 'fact' to 1 for each new 'num' before calculating its factorial.
        
        // This loop calculates the factorial of 'num'.
        for(count = 1; count <= num; count++)  // Loop from 1 to 'num', multiplying 'fact' by 'count' during each iteration.
        {
            fact = fact * count;  // Update 'fact' to hold the product of numbers from 1 to 'num'.
        }

        // Add the current term to the sum. The term is the current number divided by its factorial.
        sum = sum + (num / fact);  // Since 'num' is an integer and 'fact' is a float, this performs floating-point division.
        
        num++;  // Increment 'num' to process the next number in the series.
    }
    
    // Output the calculated sum of the series.
    printf("Sum of series is %f\n", sum);  

    return 0;  // End of the program.
}
