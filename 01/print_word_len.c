#include <stdio.h>

#define MAX_WORD_LEN 9
#define IN_WORD 1
#define OUT_OF_WORD 0

int main() {
    int current_len, curr, status, max_freq;

    current_len = max_freq = 0;
    int word_len[MAX_WORD_LEN + 1] = {0};

    while ((curr = getchar()) != EOF) {
        if (curr != ' ' && curr != '\n' && curr != '\t') {
            if (!status) {
                status = IN_WORD;
            }
            current_len++;
        } else {
            if (status) {
                status = OUT_OF_WORD;
            }
            if (current_len) {
                int inc_len = ++word_len[current_len];
                if (inc_len > max_freq) {
                    max_freq = inc_len;
                }
                current_len = 0;
            }
        }
    }

    printf("\n");

    for (int i = max_freq; i > 0; i--) {
        for (int j = 1; j <= MAX_WORD_LEN; j++) {
            if (word_len[j] >= i)
                printf("%2c", '*');
            else
                printf("%2c", ' ');
        }
        printf("\n");
    }

    for (int i = 1; i <= MAX_WORD_LEN; i++) {
        printf("%2d", i);
    }
    printf("\n");
}
