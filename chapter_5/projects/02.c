/*
 * Converts from 24-hour to 12-hour (AM/PM) time.
 */

#include <stdio.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour == 0) {
        hour = 12;
        printf("Equivalent 12-hour time: %d:%.2d AM\n", hour, minute);
    } else if (hour > 12) {
        hour -= 12;
        printf("Equivalent 12-hour time: %d:%.2d PM\n", hour, minute);
    } else {
        printf("Equivalent 12-hour time: %d:%.2d AM\n", hour, minute);
    }

    return 0;
}
