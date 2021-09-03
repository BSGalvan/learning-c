#include<stdio.h>

/* copy input to output; 1st version */

int main()
{
        /* Define as an int such that it can hold the value of */
        /* EOF as well as normal char values */
        int c;

        /* getchar reads (input) text stream */
        /* character by character */
        c = getchar();

        /* EOF = symbolic constant defined such that */
        /* it isn't confused with a regular char */
        while (c != EOF) {
                /* putchar writes (usually to STDOUT) text stream */
                /* character by character */
                putchar(c);
                c = getchar();
        }
}
