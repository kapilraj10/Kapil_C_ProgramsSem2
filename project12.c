#include <stdio.h>

int main() {
    int id;
    float wh, hr, s;

    // Input employee ID
    printf("Enter Employee ID: ");
    scanf("%d", &id);

    // Input total worked hours in a month
    printf("Enter Employee Work Hours: ");
    scanf("%f", &wh);  
    
    // Input amount received per hour
    printf("Enter Employee Hourly Rate: ");
    scanf("%f", &hr);  
    // Calculate salary
    s = wh * hr;

    // Output employee ID and calculated salary
    printf("Employee ID: %d\n", id);
    printf("Salary: $%.2f\n", s);  
    return 0;
}
