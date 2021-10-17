/*
 * Sums a series of integers
 */

#include <stdio.h>

int main(void)
{
    int i, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    scanf("%d", &i);

    while (i != 0) {
        sum += i;
        scanf("%d", &i);
    }

    printf("Sum = %d", sum);

    return 0;
}
