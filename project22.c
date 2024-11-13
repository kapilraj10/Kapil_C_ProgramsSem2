#include<stdio.h>
int add_without_arithmetic(int a, int b){
    while (b != 0){
        int carry = a & b ;
        a = a ^ b ;
        b = carry << 1 ;
    }
    return 0 ;
    
}

int main (){
    int num1, num2, result ;
    printf("Enter the two number ");
    scanf("%d %d", & num1 , & num2);
    result = add_without_arithmetic(num1,num2);
    printf("Sum: %d\n", result);
    return 0;
}