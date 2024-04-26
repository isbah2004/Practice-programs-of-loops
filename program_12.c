
// Write a C++ program to display reverse pyramid​
// *  *  *  *  *  *  *  *  *​
//    *  *  *  *  *  *  *​
//       *  *  *  *  *​
//          *  *  *​
//             *
#include <stdio.h>

int main() {
    // Outer loop to iterate through each row
    for (int r = 5; r >= 1; r--) {
        // Inner loop to print leading spaces, adjusts based on current row
        for (int i = 0; i <= (5 - r); i++) {
            printf("  "); // Two spaces to create the pyramid shape
        }
        // Inner loop to print asterisks, adjusts based on current row
        for (int j = 1; j <= 2 * r - 1; j++) {
            printf("* "); // Asterisk followed by space
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
