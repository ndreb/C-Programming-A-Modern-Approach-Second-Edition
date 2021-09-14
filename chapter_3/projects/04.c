/*
 * Chapter 3
 * Programming Project 4
 *
 * Converts a telephone number from: (xxx) xxx-xxxx -> xxx.xxx.xxxx
 */

#include <stdio.h>

int main(void)
{
    int area_code, prefix, line_number;

    printf("Enter telephone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area_code, &prefix, &line_number);

    printf("You entered %d.%d.%d", area_code, prefix, line_number);

    return 0;
}
