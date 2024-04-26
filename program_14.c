// Write a C program to display Floyd's Triangle​
// 1 ​
// 2  3
// 4  5  6
// 7  8  9  10​
#include <stdio.h>

void main()
{
    int num = 1; // Initialize the starting number
    // Outer loop to iterate through each row
    for (int i = 1; i <= 4; i++)
    {
        // Inner loop to print numbers in each row, the number of times it prints is based on the row number
        for (int j = 0; j < i; j++)
        {
            printf("%d ", num); // Print the current number
            num++;              // Increment the number for the next iteration
        }
        printf("\n"); // Move to the next row
    }
}
