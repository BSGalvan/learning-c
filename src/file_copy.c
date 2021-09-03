#include<stdio.h>

/* copy input to output; 2nd version */

int main()
{
        /* Define as an int such that it can hold the value of */
        /* EOF as well as normal char values */
        int c;

        /* getchar() reads (input) text stream */
        /* character by character */

        /* EOF = symbolic constant defined such that */
        /* it isn't confused with a regular char */
        while ((c = getchar()) != EOF) {
                /* putchar writes (usually to STDOUT) text stream */
                /* character by character */
                putchar(c);
        }
}
