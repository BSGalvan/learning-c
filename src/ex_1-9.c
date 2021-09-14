#include <stdio.h>

#define YES 1
#define NO  0

/* copy the input to the output, replacing >1 blanks with one single blank. */

int main()
{
        int c, saw_blank = NO;

        /* Here, saw_blank informs if the previous character read */
        /* was a blank (1) or not (0) */

        while ((c = getchar()) != EOF) {
            if (saw_blank && c == ' ')
                // Saw a blank just before and currently on a blank
                // Don't print anything
                    continue;
            else if (!saw_blank && c == ' ') {
                // Didn't see a blank before and currently on a blank
                // Print and toggle
                putchar(c);
                saw_blank = YES;
            }
            else {
                // Saw something other than a blank
                // Print ...
                putchar(c);
                if (saw_blank) {
                    // Saw a blank just before, not on a blank now
                    // ... Toggle
                    saw_blank = NO;
                }
            }
        }
}
