/*
 * Prints a table of squares using a while statement
 */

#include <stdio.h>

int main(void)
{
    unsigned long int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%lu", &n);

    for (unsigned long int i = 1; i <= n; i++) {
        printf("%4lu %8lu\n", i, i * i);
    }

    return 0;
}
