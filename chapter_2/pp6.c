/*
 * Chapter 2
 * Programming Project 6
 *
 * Computes f(x) = ((((3x + 2)x - 5)x - 1)x + 7)x - 6 <-- Horner's Rule.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
        return 1;
    else {
        double x = atof(argv[1]);
        double y = (((((((((3 * x) + 2) * x) - 5) * x) - 1) * x) + 7) * x) - 6;

        printf("%.4f\n", y);

        return 0;
    }
}
