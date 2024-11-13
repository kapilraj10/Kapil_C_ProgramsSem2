#include <stdio.h>

int main() {
    char str[100];  // Array to store the input string
    char ch;
    int i = 0;  // `i` should be an `int` for indexing

    printf("ENTER A STRING: ");

    // Read input character by character until newline is encountered
    while ((ch = getchar()) != '\n') {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';  // Null-terminate the string correctly

    printf("YOUR ENTERED: ");

    // Reset `i` and print the string character by character
    i = 0;
    while (str[i] != '\0') {
        putchar(str[i]);
        i++;
    }
    putchar('\n');  // Move to the next line after printing the string

    return 0;
}
