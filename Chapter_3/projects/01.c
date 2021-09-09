/*
 * Chapter 1
 * Programming Project 1
 *
 * Converts the date from: mm/dd/yyyy -> yyyymmdd
 */

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %d%.2d%.2d\n", year, month, day);

    return 0;
}
