#include <stdio.h>

int main() {
    char Name[40];
    char DOB[20];
    char MobileNumber[10];

    // User input
    printf("Enter Your Name: ");
    scanf("%39s", Name); 
    printf("Enter Your DOB (format: dd/mm/yyyy): ");
    scanf("%19s", DOB); 
    printf("Enter Your Mobile Number: ");
    scanf("%9s", MobileNumber); 

    // Display user input
    printf("Name: %s\n", Name);
    printf("DOB: %s\n", DOB);
    printf("Mobile Number: %s\n", MobileNumber);

    return 0;
}
