// Write a C++ program to display following pattern​

// 1  2  3  4  5​
// 2  3  4  5  6​
// 3  4  5  6  7​
// 4  5  6  7  8​
// 5  6  7  8  9​
#include <stdio.h>

void main()
{
    // Outer loop to iterate through each row
    for (int i = 1; i <= 5; i++)
    {
        // Inner loop to print consecutive numbers starting from i
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", i - 1 + j); // Print consecutive numbers starting from i
        }
        printf("\n"); // Move to the next row
    }
}
