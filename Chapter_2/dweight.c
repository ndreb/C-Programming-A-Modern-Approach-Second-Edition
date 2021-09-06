/*
 * Chapter 2
 *
 * Computes the dimensional weight of a box.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float length  = atof(argv[1]);
    float width   = atof(argv[2]);
    float height  = atof(argv[3]);
    float divisor = atof(argv[4]);
    float volume  = length * width * height;

    if (argc == 5) {
        printf("\nL x W x H: %.1f x %.1f x %.1f in.\n", length, width, height);
        printf("Volume: %.1f cu in.\n", volume);
        printf("Dimensional weight: %.0lf lb.\n", volume / divisor);
        return 0;
    } else
        return 1;
}
