#include <stdio.h>

int main() {
    int integerNumber;
    float floatNumber;
    char character;
    char string[100];
  
    printf("Enter an integer value: ");
    scanf("%d", &integerNumber);
    printf("Enter a float value: ");
    scanf("%f", &floatNumber);
    printf("Enter a character: ");
    scanf(" %c", &character); 
    printf("Enter a string: ");
    scanf("%s", string); 

  
    printf("\nOutput:\n");
    printf("Integer value   : %d\n", integerNumber);
    printf("Float value     : %.2f\n", floatNumber);
    printf("Character value : %c\n", character);
    printf("String value    : %s\n", string);

    return 0;
}
