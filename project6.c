#include <stdio.h>
#include <math.h>
#define M_PI 3.144

int main() {
    float radius, area, perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = M_PI * pow(radius, 2);
    perimeter = 2 * M_PI * radius;

    printf("Area of the circle = %.2f sq units\n", area);
    printf("Perimeter of the circle = %.2f units\n", perimeter);

    return 0;
}