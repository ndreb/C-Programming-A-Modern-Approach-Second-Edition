/*
 * This program converts the temperature in Fahrenheit to the celsius
 * equivalent.
 */

#include <stdio.h>

#define FREEZING_PT 32.0f /* Degrees Fahrenheit */
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float celsius, fahrenheit;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius temperature equivalent: %.1f\n", celsius);

    return 0;
}
