#include <stdio.h>
int main() {
    int x;
    // evaluates to a value and assigns to x
    printf("%d\n", x = 5);
    printf("%d\n", x);
    // this does the same as the above, but we do nothing with the result (10)
    x = 10;
    // statement grouping
    {
        int y = 15;
        y = printf("hey there!!!\n");
        printf("%d\n", y);
        printf("%d\n", '\n');
        printf("%c\n", 'b');
    }
}
