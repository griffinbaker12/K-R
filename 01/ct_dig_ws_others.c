#include <stdio.h>

// count digits, white space, others
int main() {
    int ws, other, c;
    int digits[10];

    ws = other = 0;
    for (int i = 0; i < 10; i++)
        digits[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            digits[c - '0']++;
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ws++;
        } else {
            other++;
        }
    }

    printf("number of digits:");
    for (int i = 0; i < 10; i++) {
        printf(" %d", digits[i]);
    }
    printf(", white space: %d", ws);
    printf(", other: %d\n", other);
}
