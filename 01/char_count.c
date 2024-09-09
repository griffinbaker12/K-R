#include <stdio.h>

int main() {
    long nc = 0;

    while (getchar() != EOF)
        ++nc;
    printf("you entered: %ld characters\n", nc);

    clearerr(stdin);
    printf("\n");

    double nc2;
    for (nc2 = 0; getchar() != EOF; nc2++)
        ;
    printf("nc2 is: %.0f\n", nc2);
}
