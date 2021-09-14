#include <stdio.h>

/* Convert tabs to \t, backspace to \b and backslash to \\ */

/* Note: Terminals now manage key presses via input routines, */
/*       and so for 'entering a backspace', press C-h  */
/* See https://stackoverflow.com/questions/14206753/kr-1-10-the-terminal-eats-the-backspace */

int main()
{
        int c;

        while ((c = getchar()) != EOF) {
                if (c == '\t')
                        printf("\\t");
                else if (c == '\b')
                        printf("\\b");
                else if (c == '\\')
                        printf("\\\\");
                else
                        putchar(c);
        }
}
