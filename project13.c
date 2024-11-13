#include<stdio.h>

int main(){
    float principal, rate, time, simple_interest, total_amount;

    // Input Principal
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Input the number of years 
    printf("Enter the number of years: ");
    scanf("%f", &time);

    // Input rate of interest

    printf(" Enter the rate of interest:");
    scanf("%f", &rate);


    //Calculate the simple interest
    simple_interest = (principal * rate * time ) / 100;

    // Calculate total amount
    total_amount = principal + simple_interest;
 
    // Output the results 
    printf("Simple Interest: $%2.f\n",simple_interest);
    printf("Total Amount: $%2.f\n", total_amount);

    return 0;
}