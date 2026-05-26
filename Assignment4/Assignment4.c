#include <stdio.h>

int main(){

    /*
    Assignment 4: User Input 
    */
    char firstName[30];
    char lastName[30];
    
    printf("Enter your first name: ");
    scanf("%s",&firstName);
    printf("Enter your last name: ");
    scanf("%s",&lastName);

    printf("Hello %s %s!", firstName,lastName);

    return 0;
}