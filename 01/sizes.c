#include <stdio.h>

int main() {
    int x = 5;
    long int y = x;
    // but the type is of 'unsigned long', and I believe that is just how this
    // is defined on my system and is related to the "that thing that is the max
    // address on the system"...ahh what the fuck is that
    printf("%d\n", sizeof(x));
    printf("%ld\n", sizeof(y));
    // when I put zd there, things are fine?
    // and that is because nothing can have a larger size/width than z?
    printf("%zd\n", sizeof(float));
    printf("%zd\n", sizeof(double));
    printf("%zd\n", sizeof(long double));

    // this prints 10
    printf("the new line char is: %d\n", '\n');
    // this prints...mem address of beginning of the string constant?
    printf("the new line char is: %d\n", "\n");
    // prints out a new line
    printf("the new line char is: %s\n", "\n");
}
