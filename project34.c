#include<stdio.h>
int main(){
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);
    printf("Character: %c\n", character);
    printf("ASCII VALUE: %d\n", character);
    return 0;
}