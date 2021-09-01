#include<stdio.h>

// print Fahrenheit-Celsius table

int
main ()
{
  int fahr;

  // The 'for' construction
  /*   init.     check        update          */
  for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    // Note: every expression returns a value, which is why
    //       the third argument is valid (it returns a float)
    printf ("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
