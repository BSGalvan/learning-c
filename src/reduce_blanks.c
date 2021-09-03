#include <stdio.h>

/* Copy the input to the output, replacing >1 blanks with one single blank. */

int main()
{
        int c, blank_flag = 0;

        /* Here, blank_flag informs if the previous character read */
        /* was a blank (1) or not (0) */

        while ((c = getchar()) != EOF) {
            if (c == ' ' && blank_flag)
                // Saw a blank just before and currently on a blank
                // Don't print anything
                    continue;
            else if (c == ' ' && !blank_flag) {
                // Seeing a blank for the first time
                // Print and toggle
                putchar(c);
                blank_flag = 1;
            }
            else {
                // Seeing something other than a blank
                // Print ...
                putchar(c);
                if (blank_flag) {
                    // Saw a blank just before, not on a blank now
                    // ... Toggle
                    blank_flag = 0;
                }
            }
        }
}
