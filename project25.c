#include<stdio.h>

int main (){
    int num1 = 16; // Binary number 10000
    int num2 = 19; // Binary number 10011

    int andResult = num1 & num2;
    int orResult = num1 | num2;

    printf(" AND operation result(decimal):%d\n",andResult);
    printf("OR opration result(decimal):%d\n",orResult);
    return 0;

}
