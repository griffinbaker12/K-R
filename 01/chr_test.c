#include <stdio.h>

int main() {
    char c = '0';
    printf("%c, %d\n", c, c);
    c = getchar();
    if (c == '\t') {
        printf("\\t");
    } else {
        printf("not a tab");
    }
    printf("\n");
    for (int i = 0; i < 2; ++i)
        printf("%02d\n", i);
}
