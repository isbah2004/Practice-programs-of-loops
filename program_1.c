// Write a program in C that generates and displays all the odd multiples of 5 in the range of 1 and 100.
#include <stdio.h> // Include necessary library for input and output functions

int main()
{
    // Loop from 1 to 100
    for (int i = 1; i <= 100; i++)
    {
        // Check if the current number 'i' is a multiple of 5 AND is odd
        // '%' is the modulo operator, which gives the remainder of division
        // If 'i' is a multiple of 5, 'i % 5' will be 0
        // If 'i' is odd, 'i % 2' will be 1, because odd numbers have a remainder of 1 when divided by 2
        if (i % 5 == 0 && i % 2 != 0)
        {
            // If both conditions are true, print the current number 'i'
            printf("%d ", i); // Print 'i' followed by a space
        }
    }
    return 0; // Indicate that the program executed successfully
}
