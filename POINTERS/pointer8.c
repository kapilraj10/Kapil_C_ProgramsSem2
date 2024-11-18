#include <stdio.h>
int main (){
    char str[]= "Hello Kapil!";
    char *ptr;

    ptr = str;

    printf("Character amd its address in the string\n");

    while (*ptr != '\0')
    {
        printf("Character: %c, Address: %p\n", ptr,(void*)ptr);
        ptr++;
    }
    return 0;

    
}