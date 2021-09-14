/*
 * Chapter 3
 * Programming Project 5
 *
 * Prints a 4x4 matrix and the sum of the rows, columns, and diagonals.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 17)
        return 1;
    else {
        /* 4x4 matrix. */
        printf("\n%2s %2s %2s %2s\n", argv[1], argv[2], argv[3], argv[4]);
        printf("%2s %2s %2s %2s\n", argv[5], argv[6], argv[7], argv[8]);
        printf("%2s %2s %2s %2s\n", argv[9], argv[10], argv[11], argv[12]);
        printf("%2s %2s %2s %2s\n", argv[13], argv[14], argv[15], argv[16]);

        int row1sum = atoi(argv[1]) + atoi(argv[2]) + atoi(argv[3])\
                      + atoi(argv[4]);
        int row2sum = atoi(argv[5]) + atoi(argv[6]) + atoi(argv[7])\
                      + atoi(argv[8]);
        int row3sum = atoi(argv[9]) + atoi(argv[10]) + atoi(argv[11])\
                      + atoi(argv[12]);
        int row4sum = atoi(argv[13]) + atoi(argv[14]) + atoi(argv[15])\
                      + atoi(argv[16]);

        printf("\nRow sums: %d %d %d %d\n", row1sum, row2sum, row3sum,
               row4sum);

        int col1sum = atoi(argv[1]) + atoi(argv[5]) + atoi(argv[9])\
                      + atoi(argv[13]);
        int col2sum = atoi(argv[2]) + atoi(argv[6]) + atoi(argv[10])\
                      + atoi(argv[14]);
        int col3sum = atoi(argv[3]) + atoi(argv[7]) + atoi(argv[11])\
                      + atoi(argv[15]);
        int col4sum = atoi(argv[4]) + atoi(argv[8]) + atoi(argv[12])\
                      + atoi(argv[16]);

        printf("Column sums: %d %d %d %d\n", col1sum, col2sum, col3sum,
               col4sum);

        int dia1sum = atoi(argv[1]) + atoi(argv[6]) + atoi(argv[11])\
                      + atoi(argv[16]);
        int dia2sum = atoi(argv[4]) + atoi(argv[7]) + atoi(argv[10])\
                      + atoi(argv[13]);

        printf("Diagonal sums: %d %d\n", dia1sum, dia2sum);

        return 0;
    }
}
