#include <stdio.h>

/*
 * Statement: Rewrite the temperature conversion program of S-1.2 to use
 *            a function for conversion.
 */

#define LOWER 0    // lower limit of the temmperature table
#define UPPER 300  // upper limit
#define STEP  20   // step size

float fahr2cels(float fahr);

int main()
{
        // int -> 16/32-bit, lies in [-32768, 32767] (-2^16 to 2^16-1)
        float fahr, celsius;

        fahr = LOWER;

        printf("#####################################################\n");
        printf("#         Fahrenheit --> Celsius Conversion         #\n");
        printf("#####################################################\n");

        while (fahr <= UPPER) {
                // (fahr - 32) would get converted implicitly just as well
                celsius = fahr2cels(fahr);
                // see printf(1) for more formatting details
                // Tip: basically %x.yf means print a float with a field
                //      x chars wide (and) y chars after decimal point
                printf("%3.0f %6.1f\n", fahr, celsius);
                fahr = fahr + STEP;
        }
}

float fahr2cels(float f)
{
        return (5.0 / 9.0) * (f - 32.0);
}
