/*
 * Chapter 3
 * Exercise 3
 */

#include <stdio.h>

int main(void)
{
    /*
     * (a) Equivalent.
     * (b) Equivalent.
     * (c) Not equivalent.
     * (d) Equivalent.
     */

    int x, y, z;
    float i, j;

    /* (a) */
    printf("Input: ");
    scanf("%d", &x);
    printf("Output: %d\n", x);
    printf("Input: ");
    scanf(" %d", &x);
    printf("Output: %d\n\n", x);
    /* (b) */
    printf("Input: ");
    scanf("%d-%d-%d", &x, &y, &z);
    printf("Output: %d, %d, %d\n", x, y, z);
    printf("Input: ");
    scanf("%d -%d -%d", &x, &y, &z);
    printf("Output: %d, %d, %d\n\n", x, y, z);
    /* (c) */
    printf("Input: ");
    scanf("%f", &i);
    printf("Output: %f\n", i);
    printf("Input: ");
    scanf("%f ", &i);
    printf("Output: %f\n\n", i);
    /* (d) */
    printf("Input: ");
    scanf("%f,%f", &i, &j);
    printf("Output: %f, %f\n", i, j);
    printf("Input: ");
    scanf("%f, %f", &i, &j);
    printf("Output: %f, %f\n", i, j);

    return 0;
}
