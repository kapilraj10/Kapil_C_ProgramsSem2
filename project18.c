#include<stdio.h>

  int main(){
    float kilometers, miles;
    printf("Enter the distance in kilometers:\n");
    scanf("%f", &kilometers);
    miles = kilometers / 1.609344;
    printf("%.2f kilometers is equal to %.2f miles\n", kilometers,miles);
    return 0;



  }