#include <limits.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    printf("INT_MAX is: %d\n", INT_MAX);
    // but this would not work on Windows systems
    // need the header because this is not implemented in C
    write(STDOUT_FILENO, "Hello\n", 6);
    return 0;
}
