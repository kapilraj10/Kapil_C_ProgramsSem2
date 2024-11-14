#include<stdio.h>
#define PI 3.14

int main (){
    const int radius = 5;
    const float gravity = 9.81;
    float area, force;
    float mass;

    area = PI * radius * radius;

    printf("Enter the mass (in kg):");
    scanf("%f", &mass);

    force = gravity * mass;

    printf("Area of the circle: %.2f\n", area);
    printf("Force  due to gravity: %2.f N\n", force); // N is newton 
    return 0; 

}