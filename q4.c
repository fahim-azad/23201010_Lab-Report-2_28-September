#include<stdio.h>

int main() {
    int n;  // Declare an integer variable 'n' to store the user input.
    float sum = 0;  // Declare a float variable 'sum' to store the running total of the sum of the series.

    // Prompt the user to input the value of 'n'.
    printf("enter n: ");
    scanf("%d", &n);  // Read the input value for 'n'.

    // Print the sequence of terms starting from 1 + 1/2 + 1/3 + ... + 1/n.
    printf("the sequence is 1 + ");  // The first term is always 1, so print it.

    // Loop to print the sequence from 1/2 up to 1/(n-1) followed by 1/n.
    for(int i = 2; i <= n - 1; i++) {
        printf(" 1/%d +", i);  // Print terms like 1/2 + 1/3 + ... but not the last term.
    }
    printf(" 1/%d\n", n);  // Print the last term 1/n without a trailing '+'.

    // Loop to calculate the sum of the series from 1 to 1/n.
    for(float i = 1; i <= n; i++) {  // 'i' starts from 1 and goes up to 'n', including 'n'.
        sum = sum + 1/i;  // Add the term 1/i to 'sum' during each iteration.
    }

    // Output the calculated sum of the series.
    printf("Sum = %f", sum);

    return 0;  // End of the program.
}
