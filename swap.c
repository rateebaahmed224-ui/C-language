#include <stdio.h>

int main(void) {
    int a = 5;
    int b = 3;

    // Swapping without extra variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("a = %d\nb = %d\n", a, b);

    return 0;
}
