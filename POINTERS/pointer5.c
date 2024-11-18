#include <stdio.h>
void swap(int *x , int *y){
    int temp;
    temp  = *x;
    *x = *y;
    *y = temp;
}
int main (){
    int Num1, Num2;

    printf("Enter the 1st Number:");
    scanf("%d",&Num1);
    printf("Enter the 2st Number:");
    scanf("%d",&Num2);

    printf("Befor Swapping\n ");
    printf("Num1 =%d,Num2 =%d\n",Num1 ,Num2);

    swap(&Num1,&Num2);

    printf("After Swapping\n");
    printf("Num1 =%d,Num2 =%d",Num1 ,Num2);


    return 0;


}
