#include <limits.h>
#include <stdio.h>

int main() {
    int base, increment, ct;
    base = increment = 10;
    ct = 5;
    int arr[5];
    for (int i = 0; i < ct; i++) {
        arr[i] = base + (increment * i);
    }
    for (int i = 0; i < ct; i++) {
        printf("%d\n", arr[i]);
    }
    int *c = arr;
}
