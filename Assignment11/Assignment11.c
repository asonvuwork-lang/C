#include <stdio.h>

int main(void){
    
    /*
    Assignment 11
    Weight converter
    */
    float weight;
    int choice;
    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): \n");
    scanf("%d",&choice);
    if(choice == 1){
        printf("Enter the weight in kilograms: ");
        scanf("%f",&weight);
        printf("%f kilograms is equal to %.2f pounds",weight,weight*2.20462262);
    }else{
        printf("Enter the weight in pounds: ");
        scanf("%f",&weight);
        printf("%f pounds is equal to %.2f kilogram",weight,weight/2.20462262);
    }

}