/*
 * Converts from 24-hour to 12-hour (AM/PM) time.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int hour, minute;
    char am[3] = "AM";
    char pm[3] = "PM";
    char suffix[3];

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour == 0) {
        hour = 12;
        strcpy(suffix, am);
    } else if (hour > 12) {
        hour -= 12;
        strcpy(suffix, pm);
    } else {
        strcpy(suffix, am);
    }

    printf("Equivalent 12-hour time: %d:%.2d %s\n", hour, minute, suffix);

    return 0;
}
