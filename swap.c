#include <stdio.h>

int main() {
    int a, b;
    printf("Enter any two numbers to swap: ");
    scanf("%d%d", &a, &b);

    printf("Before swapping: %d -- %d\n", a, b);

    // Swapping logic
    int c = a;
    a = b;
    b = c;

    printf("After swapping: %d -- %d\n", a, b);

    return 0;
}
