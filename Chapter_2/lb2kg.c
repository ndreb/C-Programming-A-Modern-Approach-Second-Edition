/*
 * This program uses the formula: 'kg = lb / 2.2046' to convert from pounds to
 * kilograms.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
        fputs("error: no argument was passed\n", stderr);
    else if (argc == 2) {
        double kg, lb;

        lb = atof(argv[1]); /* User input in pounds. */
        kg = lb / 2.2046;   /* Convert from pounds to kilograms. */

        /* Print kg rounded to 4 significant figures. */
        printf("%0.4f%s\n", kg, "kg");
        return 0;
    } else
        fputs("error: more than one argument was passed\n", stderr);
}
