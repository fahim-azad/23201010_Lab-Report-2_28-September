#include <stdio.h>
#include <math.h> // Include the math library to use the 'pow' function for exponentiation.

int main() {
    double A, B, C, D;  // Declare four variables to store the input values, using 'double' for floating-point precision.

    // Take input for the variables A, B, C, and D from the user.
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);  // %lf is used to scan double-precision floating-point numbers.

    // Calculate A raised to the power of B and C raised to the power of D.
    double pA = pow(A, B);  // pow(A, B) calculates A^B (A raised to the power B).
    double pC = pow(C, D);  // pow(C, D) calculates C^D (C raised to the power D).

    // Compare the results of A^B and C^D.
    if (pA > pC) {  // If A^B is greater than C^D, print "YES".
        printf("YES\n");
    } else {  // Otherwise, print "NO".
        printf("NO\n");
    }

    return 0;  // End of the program.
}
