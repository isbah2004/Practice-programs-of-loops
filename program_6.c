// Write a program in C that generates and displays the following series of numbers:
// 15, 30, 45, 60, 75, 90, 105, 120, 135, 150
#include <stdio.h>

void main() {
    // Start a loop with variable i initialized to 15, and loop as long as i is less than or equal to 150.
    // On each iteration, increase i by 15 (i += 15).
    for (int i = 15; i <= 150; i += 15) {
        // Inside the loop, execute the following statement:

        // Print the value of i followed by a space ("%d "), using the printf() function.
        printf("%d ", i);
    }
}
