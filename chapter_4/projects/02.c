/*
 * Chapter 4
 * Programming Project 2
 *
 * Takes a three-digit number as input, reverses the digits, then prints the
 * result.
 */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    printf("The reversal is: %d%d%d", n % 10, n / 10 % 10, n / 100);

    return 0;
}
