/* This program uses the formula: kg = lb/2.2046 
 * to convert from pounds to kilograms. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /* Return error if no arguments were passed. */
    if (argc < 2) {
        printf("Error: No weight entered.\n");
        return 1;
    }

    /* Accept one argument only. */
    else if (argc == 2)
    {
        double kg, lb;

        lb = atof(argv[1]); /* User input in pounds. */
        kg = lb / 2.2046;   /* Conversion formula. */

        printf("%0.4f%s\n", kg, "kg");
        return 0;
    }

    /* Return error if more than one argument was passed. */
    else
    {
        printf("Error: Argument limit exceeded.\n");
        return 1;
    }
}
