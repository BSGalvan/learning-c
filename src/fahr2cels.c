#include<stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version*/

int
main ()
{
  // int -> 16/32-bit, lies in [-32768, 32767] (-2^16 to 2^16-1)
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;			/* lower limit of temperature table */
  upper = 300;			/* upper limit */
  step = 20;			/* step size  */

  fahr = lower;

  printf ("#####################################################\n");
  printf ("#         Fahrenheit --> Celsius Conversion         #\n");
  printf ("#####################################################\n");

  while (fahr <= upper)
    {
      // (fahr - 32) would get converted implicitly just as well
      celsius = (5.0 / 9.0) * (fahr - 32.0);
      // see printf(1) for more formatting details
      // Tip: basically %x.yf means print a float with a field
      //      x chars wide (and) y chars after decimal point
      printf ("%3.0f %6.1f\n", fahr, celsius);
      fahr = fahr + step;
    }
}
