#include<stdio.h>
int main (){
    int n1 , n2 , n3 , larger;
    printf("Enter a First number:");
    scanf("%d",&n1);
    printf("Enter a Sechond number:");
    scanf("%d",&n2);
    printf("Enter a Third number:");
    scanf("%d",&n3);
    larger = (n1 > n2) ? ((n1 > n3)? n1 : n3 ) : ((n2 > n3 ) ? n2 :n3);
    printf("The largest number is  %d",larger);
    return 0 ;
}