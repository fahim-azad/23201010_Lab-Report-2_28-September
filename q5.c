#include<stdio.h>
#include<math.h>  // Include math library to use the 'pow' function for exponentiation.

int main()
{
    int n;  // Declare an integer variable 'n' to store the user input.
    float sum = 0;  // Declare a float variable 'sum' to store the running total of the series.
    int count = 1;  // 'count' will hold the value that will be squared and cubed in the series.

    // Prompt the user to enter the number of terms 'n'.
    printf("Enter n : ");
    scanf("%d", &n);  // Read the input value for 'n'.

    // Loop to calculate the sum of the series for 'n' terms.
    for(int i = 1; i <= n; i++)  // The loop runs from 1 to 'n', inclusive.
    {
        // Add the current term to 'sum'. Each term is calculated as (count^2 / count^3).
        sum = sum +  ((float)(pow(count, 2)) / (float)(pow(count, 3)));  
        
        // Increment 'count' by 2 to move to the next odd number.
        count += 2;
    }

    // Output the calculated sum of the series.
    printf("\nSum of the series is : %f\n", sum);

    return 0;  // End of the program.
}
