#include<stdio.h>
int main (){
    printf("Current Date  :%s\n", __DATE__);
    printf("Current Time :%s\n", __TIME__);
    printf("Filename :%S\n", __FILE__);
    printf(" Line number :%S\n", __LINE__);
    #ifdef __STDC__
        printf("STDC Supported  : Yes (%d)\n", __STDC__);
    #else
        printf("STDC Supported  : No\n");
    #endif

    return 0;

}