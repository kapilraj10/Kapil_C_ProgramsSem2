// syntax error 
#include<stdio.h>
int main (){
    printf("Hello Kapil"
    return 0;
}

//Sematic error 
#include<stdio.h>
int main(){
    int a = 10, b = 25;
    int sum = a * b;
    printf("sum is %d\n",sum);
    return 0;

}


//Runtime error 
#include<stdio.h>
int main (){
    int a = 10 , b = 0;
    int result  = a / b;
    printf("Result is:%d\n",result);
    return 0;
}


//Linker error 
#include<stdio.h>
int main(){
    externalFuncation();
    return 0;
}