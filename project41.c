#include <stdio.h>

int main() {
    int c_programming, microprocessor, financial_accounting, mathematics, english;
    int total_marks;
    float percentage;

    
    printf("Enter marks for C Programming: ");
    scanf("%d", &c_programming);
    printf("Enter marks for Microprocessor and Computer Arch: ");
    scanf("%d", &microprocessor);
    printf("Enter marks for Financial Accounting: ");
    scanf("%d", &financial_accounting);
    printf("Enter marks for Mathematics-II: ");
    scanf("%d", &mathematics);
    printf("Enter marks for English-II: ");
    scanf("%d", &english);

    
    total_marks = c_programming + microprocessor + financial_accounting + mathematics + english;
    percentage = (total_marks / 500.0) * 100;

   
    printf("\nTotal Marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
