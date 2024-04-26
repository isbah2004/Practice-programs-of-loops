// Write a C program to display following pattern​
// 1  *  *  *  * ​
// 1  2  *  *  *​
// 1  2  3  *  *​
// 1  2  3  4  * ​
// 1  2  3  4  5
#include <stdio.h>

void main() {
    // Outer loop to iterate through each row
    for (int i = 1; i <= 5; i++) {
        // Inner loop to print numbers in increasing order up to the current row
        for (int j = 1; j <= i; j++) {
            printf("%d ", j); // Print numbers from 1 to i
        }
        // Inner loop to print asterisks for the remaining positions
        for (int k = 5; k > i; k--) {
            printf("* "); // Print asterisks for the remaining positions
        }

        printf("\n"); // Move to the next row
    }
}
