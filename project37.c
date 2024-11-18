#include<stdio.h>

void calculate_simple_Interest(float principal, float rate, float time, float * simple_Interest, float * total_amount){
    * simple_Interest = (principal * rate * time) /100;
    * total_amount = (principal +  * simple_Interest);
}

int main (){
    float principal, rate , time , simple_Interest , total_amount;
    printf("Enter the principal amount: ");
    scanf("%f",&principal);
    printf("Enter the rate of interest (in percentage):");
    scanf("%f", &rate);
    printf("Enter the time (in years ):");
    scanf("%f", &time);

    calculate_simple_Interest(principal , rate , time , &simple_Interest, &total_amount);

    printf("\n Simple Interest : %.2f\n", simple_Interest);
    printf(" \n Total amount (Principal + Interest): %.2f\n", total_amount);
    
    return 0;


}
