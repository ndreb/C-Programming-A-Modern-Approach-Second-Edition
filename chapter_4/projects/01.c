/*
 * Chapter 4
 * Programming Project 1
 *
 * Takes a two-digit integer as input, reverses the digits, then prints the
 * result.
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &i, &j);

    printf("The reversal is: %d%d", j, i);

    return 0;
}
