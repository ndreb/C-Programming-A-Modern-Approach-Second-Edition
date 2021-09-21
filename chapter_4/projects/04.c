/*
 * Chapter 4
 * Programming Project 4
 *
 * Converts an integer between 0 and 32767 to octal (base 8).
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
        return 1;
    else {
        int n = atoi(argv[1]);
        int len_n = log10(n) + 1;
        int octal_n = 0;

        for (int i = 0; i <= len_n; i++) {
            octal_n += n % 8 * pow(10, i);
            n /= 8;
        }

        printf("%05d", octal_n);
        return 0;
    }
}
