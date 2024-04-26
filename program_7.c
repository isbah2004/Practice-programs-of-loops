// Write a program in C that generates and displays the following series of numbers:​
// 1, 4, 9, 16, 25, 36, 49, 64, 81, 100
#include<stdio.h>

void main() {
    // This line includes the standard input-output library, which allows us to use functions like printf().

    // The 'void' before 'main()' means that the function doesn't return any value.

    // The 'main()' function is the starting point of any C program. It's where execution begins.

    // This line starts a loop that runs multiple times.
    // The loop starts with 'i' being set to 1.
    // It continues as long as 'i' is less than or equal to 10.
    // After each loop iteration, 'i' is increased by 1.
    for (int i = 1; i <= 10; i++) {
        // Inside the loop, this code is executed:

        // 'printf()' is a function used to print text to the console.
        // In this line, it prints the square of the current value of 'i', followed by a space.
        // '%d' is a placeholder for an integer value (like 'i * i') in the formatted string.
        // The actual value of 'i * i' is substituted for '%d' when 'printf()' is executed.
        printf("%d ", i * i);
    }
}
