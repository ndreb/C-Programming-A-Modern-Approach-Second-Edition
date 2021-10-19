/*
 * Calculates the number of digits in a nonnegative integer.
 */

#include <stdio.h>

int main(void)
{
    int x, y;

    do {
        printf("Enter a nonnegative integer: ");
        scanf("%d", &x);
    } while (x < 0);

    for (y = 1; x >= 10; y++) {
        x /= 10;
    }

    printf("The number %d has %d digit(s).\n", x, y);

    return 0;
}
