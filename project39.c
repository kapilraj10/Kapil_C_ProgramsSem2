#include <stdio.h>

int main() {
    float fahrenheit, centigrade;

    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    centigrade = (fahrenheit - 32) * 5 / 9;
    
    printf("Temperature in Centigrade: %.2f°C\n", centigrade);

    return 0;
}
