/*
 * Prints a table of squares using a while statement
 */

#include <stdio.h>

int main(void)
{
    unsigned long int n;
    unsigned long int i = 1;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%lu", &n);

    while (i <= n) {
        printf("%4lu %8lu\n", i, i * i);
        i++;
    }

    return 0;
}
