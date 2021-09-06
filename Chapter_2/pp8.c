/*
 * Chapter 2
 * Programming Project 8
 *
 * Computes the remaining balance on a loan after n monthly payments.
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 5)
        return 1;
    else {
        double P = atof(argv[1]);        /* Principle */
        double r = atof(argv[2]) / 1200; /* monthly interest rate */
        double m = atof(argv[3]);        /* monthly payment */
        double n = atof(argv[4]);        /* number of months */
                                         /* Balance after n months */
        double B = pow((1 + r), n) * P - (pow((1 + r), n) - 1) / r * m;

        printf("Balance remaining after %.0f payment(s): $%.2f\n", n, B);

        return 0;
    }
}
