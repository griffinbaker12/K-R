#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            while ((c = getchar()) == ' ')
                ;
            putchar(' ');
        }
        putchar(c);
    }
    return 0;
}
