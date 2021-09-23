/*
 * Chapter 4
 * Programming Project 6
 *
 * Computes the check digit of a European Article Number (EAN).
 */

#include <stdio.h>
#include <stdlib.h>

int nlog(long int x)
{
    int y;

    for (y = 0; x >= 10; y++) {
        x /= 10;
    }

    return y;
}

long int npow(int x)
{
    long int y;

    for (y = 1; x > 0; x--) {
        y *= 10;
    }

    return y;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        return 1;
    else {
        long int ean = atol(argv[1]);
        int d01, d02, d03, d04, d05, d06, d07, d08, d09, d10, d11, d12;

        d01 = ean / npow(nlog(ean));
        d02 = ean / npow(nlog(ean) - 1) % 10;
        d03 = ean / npow(nlog(ean) - 2) % 10;
        d04 = ean / npow(nlog(ean) - 3) % 10;
        d05 = ean / npow(nlog(ean) - 4) % 10;
        d06 = ean / npow(nlog(ean) - 5) % 10;
        d07 = ean / npow(nlog(ean) - 6) % 10;
        d08 = ean / npow(nlog(ean) - 7) % 10;
        d09 = ean / npow(nlog(ean) - 8) % 10;
        d10 = ean / npow(nlog(ean) - 9) % 10;
        d11 = ean / npow(nlog(ean) - 10) % 10;
        d12 = ean / npow(nlog(ean) - 11) % 10;

        int check_digit = 9 - ((((d02 + d04 + d06 + d08 + d10 + d12) * 3) + d01
                          + d03 + d05 + d07 + d09 + d11 - 1) % 10);

        printf("Check digit: %d", check_digit);

        return 0;
    }
}
