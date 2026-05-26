#include <stdio.h>
#include <ctype.h>

int main(void){

    /*
    Assignment 14: 
    Switches/Case
    */
    char DayOfWeek;

    printf("Enter a day of the week (M,T,W,R,F,S,U): ");
    scanf("%c",&DayOfWeek);
    DayOfWeek = toupper(DayOfWeek);

    switch (DayOfWeek){
        case 'M':
            printf("It is Monday");
            break;
        case 'T':
            printf("It is Tuesday");
            break;
        case 'W':
            printf("It is Wednesday");
            break;
        case 'R':
            printf("It is Thursday");
            break;
        case 'F':
            printf("It is Friday");
            break;
        case 'S':
            printf("It is Saturday");
            break;
        case 'U':
            printf("It is Sunday");
            break;
    default:
        printf("Please only enter the correct 7 days (M,T,W,R,F,S,U)");
    }
}