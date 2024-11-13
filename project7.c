#include <stdio.h>

int main (){
    int totalDays, Years , Weeks , Days;
    printf("Enter the number of Days: ");
    scanf("%d", & totalDays);

    // Calculate  the number of years 
    Years= totalDays / 365;
    // After Converting Years
    totalDays = totalDays % 365 ;
    // Calculate the number of week 
    Weeks = totalDays / 7;
    //After Converting Weeks
    totalDays = totalDays % 7 ;
   


// Output
printf("%d Days is equivalent to %d Years, %d Weeks, %d Days \n ", totalDays + Years * 365 + Weeks * 7 + Days , Years , Weeks, Days);


    return 0;
}
