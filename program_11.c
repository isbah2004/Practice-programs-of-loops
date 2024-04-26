// Write a C++ program to print inverted half pyramid as using numbers​
// 1  1  1  1  1​
// 2  2  2  2
// 3  3  3 ​
// 4  4​
// 5 ​
#include <stdio.h>

int main() {
    // Outer loop to control the rows
    for (int i = 1; i <= 5; i++) {
        // Inner loop to control the columns
        // Starts from 5 and decrements down to the value of i
        for (int j = 5; j >= i; j--) {
            // Print the value of i for each column
            printf("%d ", i);
        }
        // Move to the next line after printing all columns for the current row
        printf("\n");
    }
    return 0;
}
