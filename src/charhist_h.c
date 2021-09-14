#include <stdio.h>

#define MIN       97  // ASCII for 'A'
#define MAX       122 // ASCII for 'Z'
#define DIFF      32  // 'A' - 'a'

// program to print a histogram of frequencies of different characters in its
// input

int main()
{
        int c, i, j;
        int frequencies[MAX - MIN];

        // Initialise the array and values
        // NOTE: the loop counter goes MIN -> MAX and not 0 -> 26!
        //       this helps keep the logic very simple
        //       this is possible since arr[97] === (*((arr) + (97)))
        //       See mazouzi's solution on the clc-wiki
        for (i = MIN; i < MAX; ++i) {
                frequencies[i] = 0;
        }

        // Walk through the text, character-by-character
        while ((c = getchar()) != EOF) {
                if (c >= MIN)
                        ++frequencies[c];
                else
                        ++frequencies[c + DIFF];
        }

        // Print the histogram
        putchar('\n');
        for (i = MIN; i <= MAX; ++i) {
                printf("|%c%c|", i - DIFF, i);
                for (j = 0; j < frequencies[i]; ++j) {
                        printf("#");
                }
                putchar('\n');
        }

        return 0;
}
