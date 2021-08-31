/*
 * Computes the dimensional weight of a box.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int length = atoi(argv[1]);
    int width  = atoi(argv[2]);
    int height = atoi(argv[3]);
    int volume = length * width * height;
    int weight = (volume + 165) / 166;

    if (argc == 4) {
        printf("\nDimensions: %dx%dx%d\n", length, width, height);
        printf("Volume (cubic inches): %d\n", volume);
        printf("Dimensional weight (pounds): %d\n", weight);
        return 0;
    } else
        return 1;
}
