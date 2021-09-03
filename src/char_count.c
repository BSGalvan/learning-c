#include <stdio.h>

/* count characters in input; 1st version */

int main()
{
        /* Atleast 32-bits, so enough for a counter */
        /* Could use a double for really large inputs */
        long nc;

        nc = 0;
        while (getchar() != EOF)
                /* prefix increment operator */
                ++nc;
        /* %ld for a long int */
        printf("%ld\n", nc);
}
