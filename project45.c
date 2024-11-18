#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, CI;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period: ");
    scanf("%f", &time);

    CI = principal * pow((1 + rate / 100), time) - principal;

    printf("Compound Interest = %.2f\n", CI);

    return 0;
}