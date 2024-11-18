#include<stdio.h>
 
 int main (){
    int paisa , rupees , remaining_paisa;

    printf(" Enter the cost of the pen in paisa:");
    scanf("%d",& paisa);

    rupees = paisa / 100;
    remaining_paisa = paisa % 100;
    printf("The cost of the pen is : %d rupees and %d paisa. \n", rupees, remaining_paisa);
    return 0;
 }