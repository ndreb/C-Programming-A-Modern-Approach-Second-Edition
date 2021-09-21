/*
 * Chapter 4
 * Programming Project 3
 *
 * Takes a three-digit number as input, reverses the digits, then prints the
 * result.
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &i, &j, &k);

    printf("The reversal is: %d%d%d", k, j, i);

    return 0;
}
