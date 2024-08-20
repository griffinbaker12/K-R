#include <stdio.h>

int main() {
    int c;
    int c_num = 1;
    // even though it looks like we enter all of the chars
    // at once, they get stored in a buffer and we process
    // them one at a time
    while ((c = getchar()) != EOF) {
        printf("char num %d: %c\n", c_num, c);
        ++c_num;
    }

    clearerr(stdin);

    while ((c = getchar()) != EOF) {
        printf("d: %3d, c: %c\n", c, c);
    }
}
