// Write a program in C that displays the sum of first 10 odd multiples of 3.
#include <stdio.h> // Include the standard input-output library

int main() { // Entry point of the program
    int sum = 0; // Initialize a variable to store the sum

    // Loop from 1 to 10 (for the first 10 odd multiples)
    for (int i = 1; i <= 10; i++) {
        // Calculate the i-th odd multiple of 3 and add it to the sum
        // '2 * i - 1' calculates the i-th odd number (1, 3, 5, ...)
        // '2 * i - 1' is used because odd numbers follow a pattern of 2 * i - 1
        // Then multiply the odd number by 3 to get the i-th odd multiple of 3
        sum += (2 * i - 1) * 3;
    }

    printf("%d", sum); // Print the sum of the first 10 odd multiples of 3

    return 0; // Indicate successful execution of the program
}
