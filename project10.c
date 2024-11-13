#include<stdio.h>

int main (){
    int a;
    char ch, s[10];
    float f;
    char string[20];

    printf("the size of int value: %d\n",sizeof(a));
    printf("the size of char value: %d\n", sizeof(ch));
    printf("the size of float value: %d\n", sizeof(f));
    printf("The size of string value (char array of 20 elements): %d\n", sizeof(string));

    return 0;
}