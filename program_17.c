// Write a C++ program to print two pyramids using  *​
//             * ​

//          *  *  *​

//       *  *  *  *  *​

//    *  *  *  *  *  *  *​

// *  *  *  *  *  *  *  *  *​

//    *  *  *  *  *  *  *​

//       *  *  *  *  *​

//          *  *  *​

//             *
#include <stdio.h>

int main()
{
    // Printing the top half of the pyramid
    for (int r = 1; r <= 4; r++)
    {
        // Printing leading spaces to align the pyramid to the center
        for (int i = 0; i <= (5 - r); i++)
        {
            printf("  "); // Two spaces to create the pyramid shape
        }
        // Printing asterisks for each row
        for (int j = 1; j <= 2 * r - 1; j++)
        {
            printf("* "); // Asterisk followed by space
        }
        printf("\n"); // Move to the next row
    }

    // Printing the bottom half of the pyramid
    for (int r = 5; r >= 1; r--)
    {
        // Printing leading spaces to align the pyramid to the center
        for (int i = 0; i <= (5 - r); i++)
        {
            printf("  "); // Two spaces to create the pyramid shape
        }
        // Printing asterisks for each row
        for (int j = 1; j <= 2 * r - 1; j++)
        {
            printf("* "); // Asterisk followed by space
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
