#include <stdio.h>

int main (){
    int a, b, temp;
    

    // Input two integers
    printf("Enter two integers:\n");
    printf("Enter the first integers (a):\n");
    scanf("%d", &a);
    printf("Enter the sechond integers (b):\n ");
    scanf("%d", &b);

    // Display the value the before the swapping
    printf("Before swapping: a=%d, b=%d\n", a,b);

    //Swap the value temporary variable 
    temp = a;
    a = b;
    b = temp;


    //Display the value the after swapping
    printf("After swapping: a=%d, b=%d\n", a,b);

    return 0;


}