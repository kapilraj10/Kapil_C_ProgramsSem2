#include <stdio.h>
int main (){
    int num;
    int *ptr;
    int **pptr;

    //printf("Enter a number:");
    //scanf("%d",&num);
    //printf("\n");
    num = 20;

    ptr = &num;
    pptr = &ptr;

    printf("Value of num %d\n",num);
    printf("Address of num %p\n",(void*)&num);
    printf("Address store in ptr %p\n",(void*)ptr);
    printf("Value of pointed to by ptr %p\n",*ptr);
    printf("Address store in pptr %p\n",(void*)pptr);
    printf("Value of pointed to by pptr %p\n",(void*)*pptr);
    printf("Value pointed to by the pointer pointed to by pptr: %d\n",**pptr);


    return 0;



}