/*
 * This program uses the formula: 'kg = lb x 0.45359237' to convert from pounds
 * to kilograms.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
        fputs("error: no argument was passed\n", stderr);
    else if (argc == 2) {
        double kg, lb;

        lb = atof(argv[1]);   /* User input in pounds. */
        kg = lb * 0.45359237; /* Convert from pounds to kilograms. */

        printf("%f%s\n", kg, "kg");
        return 0;
    } else
        fputs("error: more than one argument was passed\n", stderr);
}
