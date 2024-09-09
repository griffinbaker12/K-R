#include <stdio.h>

#define PI 3.1459

int main() {
    printf("hello world\n");
    char *str = "\c";
    for (int i = 0; i < 2; i++) {
        printf("%d%c\n", str[i], str[i]);
    }
    int x = PI;
    printf("%d\n", x);

    printf("the size of int is: %zu\n", sizeof(5));
    printf("the size of float is: %zu\n", sizeof(5.0));
}
