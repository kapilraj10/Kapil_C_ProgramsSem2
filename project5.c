#include <stdio.h>

int main() {
    int height = 7;
    int width = 5;
    int perimeter, area;

    perimeter = 2 * (height + width);
    area = height * width;

    printf("Perimeter of the rectangle = %d inches\n", perimeter);
    printf("Area of the rectangle = %d square inches\n", area);

    return 0;
}