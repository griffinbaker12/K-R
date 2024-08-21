#include <stdio.h>

int main() {
    char c = 65;
    for (int i = 0; i < 8; ++i) {
        printf("%d", c & 1);
        c = c >> 1;
    }
    printf("\n");
}
