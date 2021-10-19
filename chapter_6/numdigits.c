/*
 * Calculates the number of digits in a nonnegative integer.
 */

#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Enter a integer: ");
    scanf("%d", &x);

    if (x < 0) {
        x *= -1;
    }

    for (y = 1; x >= 10; y++) {
        x /= 10;
    }

    printf("The number has %d digit(s).\n", y);

    return 0;
}
