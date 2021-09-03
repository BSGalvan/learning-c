#include<stdio.h>

/* copy input to output; wrong version */

int main()
{
        /* Define as an int such that it can hold the value of */
        /* EOF as well as normal char values */
        int c;

        /* getchar() reads (input) text stream */
        /* character by character */

        /* EOF = symbolic constant defined such that */
        /* it isn't confused with a regular char */
        while (c = getchar() != EOF) {
            /* ^^^^^^^^^^^^^ != has a lower precedence, */
            /* and so c will always be 1 (if not EOF) or 0 (if EOF)! */

            /* This will print out (N+1) 1's, where N is the number */
            /* of characters in the text stream (+1 for EOL) */
            printf("%d\n", c);
        }

        /* This will return the 0, corresponding to EOF */
        printf("%d\n", c);
}
