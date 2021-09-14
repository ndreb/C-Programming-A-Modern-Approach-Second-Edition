/*
 * Chapter 2
 * Exercise 4
 *
 * Declares several int and float variables and prints them to stdout without
 * initializing them.
 */

#include <stdio.h>

int main(void)
{
    int   a, b, c;
    float e, f, g;

    printf("Integers:\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    printf("Value of c: %d\n", c);

    printf("\nFloats:\n");
    printf("Value of e: %f\n", e);
    printf("Value of f: %f\n", f);
    printf("Value of g: %f\n", g);

    return 0;
}
