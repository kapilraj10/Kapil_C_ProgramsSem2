#include <stdio.h>

int main() {
    int num = 10;       
    int *ptr = &num;    

    printf("Initial value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value stored in pointer ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    
    *ptr = 20;
    printf("\nAfter modifying value using pointer:\n");
    printf("Value of num: %d\n", num);
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}
