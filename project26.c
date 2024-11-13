# include<stdio.h>
int main(){
    int num1 , num2;
    int intResult;
    float floatResult;
    printf("Enter the frist integer:");
    scanf("%d",&num1);
    printf("Enter the second integer:");
    scanf("%d",&num2);

    if ( num2 == 0){
         printf("Division by zero is not allowed\n");
         return 1;
    }

     intResult = num1 / num2;
    printf("Integer division result: %d\n", intResult);
    floatResult = (float) num1 / num2;
    printf(" Floting point division result:%2.f\n", floatResult);
    return 0;

}