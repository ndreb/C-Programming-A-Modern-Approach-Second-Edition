/*
 * Computes the closest departure time, based on the time entered by the user.
 */

#include <stdio.h>

int main(void)
{
    int hour, minute;
    char string[]= "Closest departure time is";

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    int difference = (24 * 60) - (hour * 60 + minute);

    if (0 <= difference && difference <= 217) {
        printf("%s 9:45 p.m., arriving at 11:58 p.m.\n", string);
    } else if (217 < difference && difference <= 397) {
        printf("%s 7:00 p.m., arriving at 9:20 p.m.\n", string);
    } else if (397 < difference && difference <= 547) {
        printf("%s 3:45 p.m., arriving at 5:55 p.m.\n", string);
    } else if (547 < difference && difference <= 636) {
        printf("%s 2:00 p.m., arriving at 4:08 p.m.\n", string);
    } else if (636 < difference && difference <= 717) {
        printf("%s 12:47 p.m., arriving at 3:00 p.m.\n", string);
    } else if (717 < difference && difference <= 809) {
        printf("%s 11:19 a.m., arriving at 1:31 p.m.\n", string);
    } else if (809 < difference && difference <= 908) {
        printf("%s 9:43 a.m., arriving at 11:52 a.m.\n", string);
    } else {
        printf("%s 8:00 a.m., arriving at 10:16 a.m.\n", string);
    }

    return 0;
}
