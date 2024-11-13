#include<stdio.h>
int main(){
    int x = 29;
    int y = 47;

    printf("x = %d, y = %d\n", x,y );
    printf("x == y : %d\n", x == y);
    printf("x != y : %d\n", x != y );
    printf("x < y  : %d\n", x < y);
    printf("x > y %d\n", x > y);
    printf("x <= y : %d\n", x <= y);
    printf("x >= y :%d\n", x >= y);
    printf("(x < y ) &&  (x != y ): %d\n", (x < y) && (x != y));
    printf("(x > y) || (x == y): %d\n", (x > y) || (x == y));
    printf("!(x == y): %d\n", !(x == y));
    return 0;

}