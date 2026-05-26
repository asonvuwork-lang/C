#include <stdio.h>
#include <math.h>

int main(void){

    /*
    Assignment 9: 
    Time converter
    */
    int second;
    int leftsecond;
    int minute;
    int hours;
    
    printf("Enter the amount of second: ");
    scanf("%d",&second);
    hours = round(second/3600);
    minute = round((second-(hours*3600))/60);
    leftsecond = round(second - hours*3600 -minute*60);
    printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.", second,hours,minute,leftsecond);
}