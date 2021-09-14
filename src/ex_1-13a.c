#include <stdio.h>

#define IN  1      // inside a word
#define OUT 0      // outside a word
#define MAXLEN 21  // consider words <= 20 letters long

// program to print a histogram of the lengths of words in its input

int main()
{
        int c, nc, state, idx, j;
        int wordcount[MAXLEN];

        state = OUT;

        // Initialise the array and values
        for (idx = 0; idx < MAXLEN; ++idx) {
                wordcount[idx] = 0;
        }

        nc = 0;

        // Walk through the text, character-by-character
        while ((c = getchar()) != EOF) {
                if (c == ' ' || c == '\n' || c == '\t') {
                        state = OUT;
                        // Consider words with length in [1, 20]
                        if (nc > 0 && nc < MAXLEN) {
                                ++wordcount[nc];
                                nc = 0;
                        }
                } else {
                        if (state == OUT)
                                state = IN;
                        ++nc;
                }
        }

        // The 0th index is useless, since we don't really have any 0-length words
        putchar('\n');
        for (idx = 1; idx < MAXLEN; ++idx) {
                printf("%2d |", idx);
                for (j = 0; j < wordcount[idx]; ++j) {
                        printf("#");
                }
                putchar('\n');
        }

        return 0;
}
