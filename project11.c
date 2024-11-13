#include<stdio.h>

int main(){
    int num, rem;
    

    //Enter a four number 
    printf("Enter The Four Digit Number:");
    scanf("%d",&num);
    while(num != 0){
        rem= num % 10;
        printf("%d",rem);

        num = num / 10;
    }
    return 0;
    
}