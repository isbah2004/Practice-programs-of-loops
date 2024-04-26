// Write a C program to print half pyramid using numbers
// 1 ​
// 2  2​
// 3  3  3 ​
// 4  4  4  4 ​
// 5  5  5  5  5​
#include <stdio.h>

void main()
{
    // This line includes the standard input-output library, which provides functions like printf().

    // The 'void' before 'main()' means that the function doesn't return any value.

    // The 'main()' function is the starting point of any C program. It's where execution begins.

    // This line starts the outer loop that runs multiple times.
    // The outer loop initializes an integer variable 'i' to 0.
    // It continues as long as 'i' is less than or equal to 5.
    // After each outer loop iteration, 'i' is increased by 1.
    for (int i = 0; i <= 5; i++)
    {
        // Inside the outer loop, another loop is started.

        // This line starts the inner loop that runs 'i' times.
        // The inner loop initializes an integer variable 'j' to 0.
        // It continues as long as 'j' is less than 'i'.
        // After each inner loop iteration, 'j' is increased by 1.
        for (int j = 0; j < i; j++)
        {
            // Inside the inner loop, this code is executed:

            // 'printf()' is a function used to print text to the console.
            // In this line, it prints the value of 'i' followed by a space.
            // This prints the value of 'i' 'j' times.
            // The actual value of 'i' is determined by the outer loop.
            // The value of 'j' increases with each inner loop iteration, so 'i' is printed 'j' times.
            printf("%d ", i);
        }
        // After the inner loop completes execution, a newline character ("\n") is printed.
        // This moves the cursor to the next line, creating a new line for the next iteration of the outer loop.
        printf("\n");
    }
    // After the outer loop completes execution, the program finishes and control returns to the operating system.
}
