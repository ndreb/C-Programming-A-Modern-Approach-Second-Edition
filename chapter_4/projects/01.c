/*
 * Chapter 4
 * Programming Project 1
 *
 * Takes a two-digit number as input, reverses the digits, then prints the
 * result.
 */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    printf("The reversal is: %d%d", n % 10, n / 10);

    return 0;
}
