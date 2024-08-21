#include <stdio.h>

int main() {
    int c, in;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (c == ' ' || c == '\n') {
                printf("\n");
            }
        } else {
            putchar(c);
        }
    }
}
