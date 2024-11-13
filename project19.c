#include <stdio.h>

int main() {
    int num1, num2, num3;
    char comma;

    printf("Enter the three numbers separated by commas:\n");
    scanf("%d%c%d%c%d", &num1, &comma, &num2, &comma, &num3);

    int sum = num1 + num2 + num3;

    printf("The sum of %d, %d, and %d is: %d\n", num1, num2, num3, sum);
    return 0;
}
