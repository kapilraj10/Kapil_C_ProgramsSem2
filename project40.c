#include <stdio.h>

int main (){
    float length , breadth, area , perimiter;

    printf("Enter the length of rectangle ( in meter):");
    scanf("%f", &length);
    printf(" Enter the breadth of rectangle( in meter):");
    scanf("%f", &breadth);

    area = length * breadth;
    perimiter = 2 * (length + breadth);

    printf("Area of the rectangle : %2.f\n",  area);
    printf(" Perimiter of the rectangle: %2.f\n", perimiter);

    return 0;
}