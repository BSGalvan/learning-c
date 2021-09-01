#include<stdio.h>

// Use symbolic names to define 'magic' numbers
#define  LOWER  0       /* lower limit of table  */
#define  UPPER  300     /* upper limit */
#define  STEP   20      /* step size */

// print Fahrenheit-Celsius table

int main()
{
        int fahr;

        // The 'for' construction
        /*   init.         check          update            */
        for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
                // Note: every expression returns a value, which is why
                //       the third argument is valid (returns a float)
                printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
