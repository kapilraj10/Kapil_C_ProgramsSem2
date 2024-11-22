#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n,i;
    int *ptr;
    int sum=0;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    ptr = (int*)malloc(n* sizeof(int));

    if (ptr == NULL){
        printf("Memory allocation failed\n");
        scanf("%d",ptr + i);
    }
    for (i < 0; i < n; i++) {
        sum += *(ptr + i);
    }
    printf("The sum of the enterd number is: %d\n", sum);

    free(ptr);
    
    return 0;


}