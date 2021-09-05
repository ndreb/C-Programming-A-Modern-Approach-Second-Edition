/*
 * This program adds x% tax to the amount entered by the user.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
        return 1;
    else {
        float tax_percentage = atof(argv[1]);
        float before_tax;

        fputs("Enter an amount: ", stdout);
        scanf("%f", &before_tax);

        float after_tax = before_tax * (1 + (tax_percentage / 100.0f));

        printf("With tax added: $%.2f\n", after_tax);

        return 0;
    }
}
