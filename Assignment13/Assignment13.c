#include <stdio.h>

int main(void){
    
    int num;

    printf("Enter a number between 1 and 500: ");
    scanf("%d",&num);

    if(num<=100){
        printf("Your number is between 1 and 100");
    } else if(num <=200){
        printf("Your number is between 101 and 200");
    } else if(num <=300){
        printf("Your number is between 201 and 300");
    } else if(num <=400){
        printf("Your number is between 301 and 400");
    } else if(num <=500){
        printf("Your number is between 401 and 500");
    } else {
        printf("Your number was not in any of our ranges");
    }
}