// Write a computer program that generates and displays the following series of numbers:​
// 90, 72, 56, 42, 30, 20, 12, 6, 2, 0
#include <stdio.h>

void main() {
    // This line includes the standard input-output library, which allows us to use functions like printf().

    // The 'void' before 'main()' means that the function doesn't return any value.

    // The 'main()' function is the starting point of any C program. It's where execution begins.

    // This line starts a loop that runs multiple times.
    // The loop starts with 'i' being set to 10.
    // It continues as long as 'i' is greater than or equal to 1.
    // After each loop iteration, 'i' is decreased by 1.
    for (int i = 10; i >= 1; i--) {
        // Inside the loop, this code is executed:

        // 'printf()' is a function used to print text to the console.
        // In this line, it prints the value of 'i * i - i', followed by a comma and a space.
        // 'i * i - i' calculates the value of (i squared) minus 'i'.
        // '%d' is a placeholder for an integer value (like 'i * i - i') in the formatted string.
        // The actual value of 'i * i - i' is substituted for '%d' when 'printf()' is executed.
        printf("%d, ", i * i - i);
    }
}
