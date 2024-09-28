#include <stdio.h>
#include <string.h>  // Include string library for string manipulation functions.

int main() {
    int N;  // Declare an integer variable 'N' to store the number of surnames.
    char surname[43];  // Declare a character array 'surname' to hold each surname (max 42 characters + 1 for null terminator).
    
    // Read the number of surnames to process.
    scanf("%d", &N);
    
    // Loop to process each surname.
    for (int i = 0; i < N; i++) {
        scanf("%s", surname);  // Read the surname from the input.
        int consecutiveConsonants = 0;  // Initialize a counter for consecutive consonants.
        int isEasy = 1;  // Flag to indicate if the surname is "easy" (initially set to true).
        
        // Loop through each character in the surname.
        for (int j = 0; j < strlen(surname); j++) {
            char ch = surname[j];  // Get the current character.
            
            // Check if the character is a vowel (both lowercase and uppercase).
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                consecutiveConsonants = 0;  // Reset the counter if the character is a vowel.
            } else {
                consecutiveConsonants++;  // Increment the counter for consecutive consonants.
                
                // Check if there are 3 or more consecutive consonants.
                if (consecutiveConsonants >= 3) {
                    isEasy = 0;  // Set 'isEasy' to false if there are 3 or more consecutive consonants.
                    break;  // Exit the loop as we found a long sequence of consonants.
                }
            }
        }
        
        // Output the result based on the 'isEasy' flag.
        if (isEasy) {
            printf("%s eh facil\n", surname);  // Print if the surname is easy.
        } else {
            printf("%s nao eh facil\n", surname);  // Print if the surname is not easy.
        }
    }
    
    return 0;  // End of the program.
}