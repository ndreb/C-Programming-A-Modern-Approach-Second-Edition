/*
 * This program computes the volume of a sphere, using the formula:
 * V = (4 / 3) * (pi * r^3)
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979323846L

int main(int argc, char *argv[])
{
    if (argc != 2)
        return 1;
    else {
        float radius = atof(argv[1]);
        float volume = (4.0f / 3.0f) * (PI * pow(radius, 3));

        printf("%.4f", volume);

        return 0;
    }
}
