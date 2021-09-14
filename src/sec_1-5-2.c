#include <stdio.h>

/* count characters in input; 2nd version */

int main()
{
        /* Atleast 32-bits, so enough for a counter */
        /* Could use a double for really large inputs */
        double nc;

        for (nc = 0; getchar() != EOF ; ++nc)
                /* Do nothing; need this since for-loop */
                /* cannot be empty */
                ;
        /* Print no decimal places */
        printf("%.0f\n", nc);

        /* Note: for zero-length input, the program outputs 0, */
        /*       as it should! */
}
