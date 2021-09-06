/*
 * Chapter 2
 * Programming Project 7
 *
 * Distributes the total amount between $20, $10, $5, and $1 bills.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
        return 1;
    else {
        float total = atof(argv[1]);
        int twenty  = total / 20;
        int ten     = (total / 10) - (2 * twenty);
        int five    = (total / 5) - (4 * twenty) - (2 * ten);
        int one     = total - (20 * twenty) - (10 * ten) - (5 * five);

        printf("$20 bills: %d\n", twenty);
        printf("$10 bills: %d\n", ten);
        printf(" $5 bills: %d\n", five);
        printf(" $1 bills: %d\n", one);

        return 0;
    }
}
