#include <stdio.h>

int main() {
    float basic_salary, medical_allowance, house_rent_allowance, provident_fund, net_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    medical_allowance = basic_salary * 0.10;
    house_rent_allowance = basic_salary * 0.08;
    provident_fund = basic_salary * 0.10;

    net_salary = basic_salary + medical_allowance + house_rent_allowance - provident_fund;

    printf("Net salary: %.2f\n", net_salary);

    return 0;
}