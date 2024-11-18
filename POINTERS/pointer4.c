#include<stdio.h>
int sum(int,int);
int(*ptr)(int,int);
int main(){
int a , b;
int result;

printf(" Enter the 1st Number:");
scanf("%d",&a);
printf("Enter the 2st Number:");
scanf("%d",&b);

ptr = sum;
result  = (*ptr)(a,b);
printf("The Sum is : %d\n",result);
return 0;
}
int sum (int x , int y){
    return x + y;
}
