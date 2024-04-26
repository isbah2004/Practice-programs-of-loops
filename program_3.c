// Write a program in C that generates and displays the first N three digit odd numbers. Whereas the number N is provided by the user.
#include <stdio.h> // Include necessary library for input and output functions

int main()
{
    int n;                          // Declare a variable to store the user input
    printf("Enter the number N: "); // Prompt the user to enter a number
    scanf("%d", &n);                // Read the user input and store it in variable 'n'

    // Loop from 1 to 'n' to generate and display the first 'n' three-digit odd numbers
    for (int i = 1; i <= n; i++)
    {
        // Calculate each three-digit odd number using the formula (2 * i - 1) + 100
        // This formula generates consecutive odd numbers starting from 101
        printf("%d ", (2 * i - 1) + 100); // Print the current three-digit odd number
    }

    return 0; // Indicate successful execution of the program
}
