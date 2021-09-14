#include <stdio.h>

/* count lines in input */

int main()
{
        int c, nl;

        nl = 0;

        while ((c = getchar()) != EOF)
                /* Note that number of lines == number of EOLs! */
                /* Internally, c is compared to the ASCII value of EOL, */
                /* which is 10 */
                /* Warning: '\n' is a char; "\n" is a string (char *)! */
                if (c == '\n')
                        ++nl;
        printf("%d\n", nl);
}
