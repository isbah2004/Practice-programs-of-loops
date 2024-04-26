// Write a C++ program to print the pyramid of digits in pattern​
//             1 ​
//          1  2  3​
//       1  2  3  4  5​
//    1  2  3  4  5  6  7​
// 1  2  3  4  5  6  7  8  9
#include <stdio.h>

void main() {
    // Outer loop to iterate through each row
    for (int r = 0; r <= 5; r++) {
        // Inner loop to print leading spaces, adjusts based on current row
        for (int j = 0; j < (5 - r); j++) {
            printf("  "); // Two spaces to create the pyramid shape
        }
        // Inner loop to print numbers, adjusts based on current row
        for (int k = 1; k <= 2 * r - 1; k++) {
            printf("%d ", k); // Print the value of k followed by a space
        }
        printf("\n"); // Move to the next row
    }
}
