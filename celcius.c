/*
 * Converts a Fahrenheit temperature to Celsius
 */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTORE (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsius;
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTORE;
    printf("Celsius equivalent: %.1f\n", celsius);
}
