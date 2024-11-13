#include<stdio.h>

int main() {
int num1,num2;
int addition, subtraction, multiplication, division, modulus;

//User Input 
printf("Enter the first integer:");
scanf("%d", &num1);

printf("Enter the second integer:");
scanf("%d", &num2);


//Calculate the num1 and num2 
addition = num1 + num2;
subtraction = num1 - num2;
multiplication = num1 * num2;

// Check if the second number is not zer befor division 

if(num2 != 0) {
    division = num1 / num2;
    modulus = num1 % num2;
}else {
        printf("Division by zero is not allowed.\n");
        division = 0;  
        modulus = 0;  
    }

// Print The Output
printf("Addition: %d + %d =%d\n", num1, num2, addition);
printf("Subtraction: %d - %d =%d\n", num1, num2, subtraction);
printf("Multiplication: %d * %d=%d\n", num1, num2, multiplication);
printf("Division: %d / %d =%d\n", num1, num2, division);
printf("Modulus: %d %% %d =%d\n,", num1, num2, modulus);

return 0;

}