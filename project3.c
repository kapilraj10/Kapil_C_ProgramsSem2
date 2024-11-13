#include<stdio.h>

int main() {
    // Define the data 
    char Name[3][40], Addresh[3][45], Phone[3][30];
    int i;

    printf("Enter Your Data\n");

    for(i = 0; i < 3; i++) {
        printf("Name: ");
        scanf("%s", Name[i]);

        printf("Address: ");
        scanf("%s", Addresh[i]);

        printf("Phone: ");
        scanf("%s", Phone[i]);
    }

    // Print the data 
    printf("__________________________________________________________________________\n");
    printf("Name\t\t\t\tAddress\t\t\t\tPhone \n");

    for (i = 0; i < 3; i++) {
        printf("%s\t\t\t\t", Name[i]);
        printf("%s\t\t\t\t", Addresh[i]);
        printf("%s\t\t\t\t\n", Phone[i]);
    }

    return 0;
}
