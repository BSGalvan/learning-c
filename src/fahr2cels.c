#include<stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

int main()
{
    // int -> 16/32-bit, lies in [-32768, 32767] (-2^16 to 2^16-1)
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20;   /* step size  */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius); // see printf(1) for more formatting details
        fahr = fahr + step;
    }
}
