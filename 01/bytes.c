#include <stdio.h>

int main() {
    unsigned char c = 65;
    printf("The byte: 0b");

    for (int i = 0; i < 8; i++) {
        printf("%d", c & 1);
        c = c >> 1;
    }
    printf("\n");
}
