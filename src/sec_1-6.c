#include <stdio.h>

/* count digits, white space, others */

int main()
{
        int c, i, nwhite, nother;
        /* This is an array of 10 ints */
        int ndigit[10];

        nwhite = nother = 0;
        /* This initialises each array element to be 0 */
        /* Arrays are zero-indexed, as God intended  */
        for (i = 0; i < 10; ++i) {
                ndigit[i] = 0;
        }

        while ((c = getchar()) != EOF) {
                if (c >= '0' && c <= '9')
                        /* This increments the i-th element, */
                        /* where i = 0 ... 9 */
                        ++ndigit[c-'0'];
                else if (c == ' ' || c == '\n' || c == '\t')
                        ++nwhite;
                else
                        ++nother;
        }

        printf("digits =");
        for (i = 0; i < 10; ++i) {
                printf(" %d", ndigit[i]);
        }
        printf(", white space = %d, other = %d\n", nwhite, nother);
}
