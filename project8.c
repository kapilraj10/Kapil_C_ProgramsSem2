#include<stdio.h>

int main () {
    int totalDays;
    int Years, Months, Days;

    // User Input 
    printf("Enter the number of days: \n");
    scanf("%d", &totalDays);

    // Calculate Years
    Years = totalDays / 365;
    totalDays = totalDays % 365;

    // Calculate Months
    Months = totalDays / 30;
    Days = totalDays % 30;

    // Print the Output
    printf("%d days is approximately %d Years, %d Months, and %d Days\n", totalDays + Years * 365 + Months * 30 + Days, Years, Months, Days);

    return 0;
}
