#include <stdio.h>
void swap(int *a ,int  *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x , y;
    x = 500;
    y = 15000;

    

    printf("Befor swapping: x= %d, y=%d\n", x,y);

    swap(&x,&y);

    printf("After Swapping\n");
    printf("x= %d, y=%d",x,y);


    return 0;
}
    


