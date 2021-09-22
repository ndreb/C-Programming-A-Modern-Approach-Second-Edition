/*
 * Chapter 4
 * Programming Project 4
 *
 * Converts an integer between 0 and 99999999 to octal (base 8).
 */

#include <stdio.h>
#include <stdlib.h>

int nlog(int x, int b)
{
    int y;

    for (y = 0; x >= b; y++) {
        x /= b;
    }

    return y;
}

int npow(int b, int x)
{
    int y;

    for (y = 1; x > 0; x--) {
        y *= b;
    }

    return y;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        return 1;
    else {
        int n = atoi(argv[1]);
        int len_n = nlog(n, 10) + 1;
        int octal_n = 0;

        for (int i = 0; i <= len_n; i++) {
            octal_n += n % 8 * npow(10, i);
            n /= 8;
        }

        printf("%d", octal_n);
        return 0;
    }
}
