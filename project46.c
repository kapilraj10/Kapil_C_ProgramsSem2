#include <stdio.h>
#include <math.h>

int main() {
    double num, sqrt_num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    sqrt_num = sqrt(num);

    printf("Square root of %.2lf = %.2lf\n", num, sqrt_num);

    return 0;
}
