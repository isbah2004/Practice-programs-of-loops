// Write a program in C that displays the sum of last 5 four digit multiples of 5.
#include <stdio.h>

void main() {
    long int sum = 0; // Declare and initialize a variable 'sum' of type long int to store the sum

    // Loop from 1 to 5
    for (int i = 1; i <= 5; i++) {
        // Inside the loop, calculate the value of (10000 - 5 * i) and add it to 'sum'
        // For each iteration, subtract (5 * i) from 10000 and add the result to 'sum'
        sum += (10000 - 5 * i);
    }

    // Print the final value of 'sum'
    printf("%ld", sum);
}
