/*
 * Chapter 2
 * Programming Project 5
 *
 * Computes f(x) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
        return 1;
    else {
        double x = atof(argv[1]);
        double y = (3 * (pow(x, 5))) + (2 * (pow(x, 4))) - (5 * (pow(x, 3))) \
                   - (pow(x, 2)) + (7 * x) - 6;

        printf("%f", y);

        return 0;
    }
}
