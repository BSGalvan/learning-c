#include <stdio.h>

#define IN  1  /* inside a word */
#define OUT 0  /* outside a word */

/* print input one word per line */
/* TODO: explain logic with comments here! */

int main()
{
        int c, state;

        state = OUT;
        while ((c = getchar()) != EOF) {
                if (c == '\n' || c == '\t' || c == ' ') {
                        if (state) {
                                state = OUT;
                                putchar('\n');
                        } else
                                continue;
                } else {
                        state = IN;
                        putchar(c);
                }
        }

}
