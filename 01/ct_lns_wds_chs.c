#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, lns, wds, chs, state;

    state = OUT;
    lns = wds = chs = 0;
    while ((c = getchar()) != EOF) {
        ++chs;
        if (c == '\n') {
            ++lns;
        }
        if (c == ' ' || c == '\n' || c == 't') {
            if (state == IN) {
                ++wds;
            }
            state = OUT;
        } else {
            state = IN;
        }
    }
    printf("lns: %d, wds: %d, chs: %d\n", lns, wds, chs);
}
