#include <stdio.h>

/* Count the number of blanks, tabs, and newlines in a given text stream. */

int main()
{
        int c, nb=0, nt=0, nl=0;

        while ((c = getchar()) != EOF) {
                if (c == ' ')
                        ++nb;
                else if (c == '\t')
                        ++nt;
                else if (c == '\n')
                        ++nl;
        }

        printf("Number of Blanks: %d\n", nb);
        printf("Number of Tabs: %d\n", nt);
        printf("Number of Newlines: %d\n", nl);
}
