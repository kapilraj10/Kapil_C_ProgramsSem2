#include <stdio.h>

int main() {
    int x, y, temp;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("\nBefore swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    // Swap the values using a temporary variable
    temp = x;
    x = y;
    y = temp;

    printf("\nAfter swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}