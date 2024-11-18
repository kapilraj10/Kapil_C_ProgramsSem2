#include<stdio.h>

int main(){
    int num;
    num = 20;

    printf("Value of num %d\n",num);
    printf("Address of num %p\n", (void*)&num);

    return 0;
}