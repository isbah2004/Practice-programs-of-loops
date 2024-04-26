// Write a program in C that asks the user to input the starting number and ending number of the range. The program should display the number of multiples of 5 in between that range.
#include <stdio.h>

void main() {
    int multiples = 0; // Declare and initialize a variable 'multiples' to count the multiples of 5
    int startingRange, endingRange; // Declare variables to store the starting and ending numbers of the range

    // Prompt the user to enter the starting number of the range
    printf("Enter the starting number of the range: ");
    scanf("%d", &startingRange); // Read and store the starting number entered by the user

    // Prompt the user to enter the ending number of the range
    printf("Enter the ending number of the range: ");
    scanf("%d", &endingRange); // Read and store the ending number entered by the user

    // Loop through each number in the range from startingRange to endingRange (inclusive)
    for (int i = startingRange; i <= endingRange; i++) {
        // Check if the current number 'i' is a multiple of 5
        if ((i % 5) == 0) {
            // If 'i' is divisible by 5 (i.e., remainder when divided by 5 is 0), increment 'multiples' by 1
            multiples += 1; // Count the multiple of 5
        }
    }

    // Print the total count of multiples of 5 within the specified range
    printf("%d", multiples);
}
