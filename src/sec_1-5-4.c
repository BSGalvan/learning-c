#include <stdio.h>

#define IN  1  /* inside a word */
#define OUT 0  /* outside a word */

/* count lines, words and characters in input
 * Note: a word here is any sequence of characters
 *       without a blank, newline or tab in it which means that punctuation
 *       will screw up the count (Exercise 1-11!).
 *       Also see the clc wiki for more rigorous test cases, assuming the
 *       definition of the word is respected.
 */

int main()
{
        int c, nl, nw, nc, state;

        state = OUT;
        /* chained assignments possible, since each one is an expression */
        nl = nw = nc = 0;
        while ((c = getchar()) != EOF) {
                ++nc;
                if (c == '\n')
                        ++nl;
                if (c == ' ' || c == '\n' || c == '\t')
                        state = OUT;
                else if (state == OUT) {
                        state = IN;
                        ++nw;
                }
        }
        printf("Number of lines: %d\n", nl);
        printf("Number of words: %d\n", nw);
        printf("Number of characters: %d\n", nc);
}
