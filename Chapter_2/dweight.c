/*
 * Computes the dimensional weight of a box.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float length  = atof(argv[1]);
    float width   = atof(argv[2]);
    float height  = atof(argv[3]);
    float volume  = length * width * height;
    float divisor = atof(argv[4]);
    float weight  = volume / divisor;

    if (argc == 5) {
        printf("\nL x W x H: %.1f x %.1f x %.1f in.\n", length, width, height);
        printf("Volume: %.1f cu in.\n", volume);
        printf("Dimensional weight: %.0lf lb.\n", weight);
        return 0;
    } else
        return 1;
}
