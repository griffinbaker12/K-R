#include <stdio.h>

int main() {
    size_t value = 12345;

    printf("Using %%zu: %zu\n", value);
    printf("Using %%u:  %u\n", value);
    printf("Using %%lu: %lu\n", value);

    size_t large_val = (size_t)-1;

    printf("max size_t using %%zu: %zu\n", large_val);
    printf("Max size_t using %%u:  %u\n", large_val);
    printf("Size of %%u: %u\n", sizeof((unsigned)large_val));
    printf("Max size_t using %%lu: %lu\n", large_val);

    printf("Size of int: %d\n", sizeof(5));
    printf("Size of int: %hd\n", sizeof(5));

    printf("size of: %d\n", EOF);
}
