#include<stdio.h>
#include<stdlib.h>

int main(){
    char *text;
    int size;

    printf("Enter the maximum size of text:");
    scanf("%d",&size);

    text = (char *)malloc(size* sizeof(char));

    if (text == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }
    getchar();

    printf("Enter the text:");
    fgets(text,size,stdin);

    printf("You entered: %s\n",text);

    free(text);

    return 0;


}