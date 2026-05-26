#include <stdio.h>

int main(void){

    /*
    Assignment 12
    Temperature converter
    */
    char choice;
    float temp;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Fahrenheit (F)?: ");
    scanf("%c",&choice);

    if(choice == 'C'){
        printf("Enter the temperature in Celsius: ");
        scanf("%f",&temp);
        printf("%.1f Celsius is equal to %.1f Fahrenheit",temp,temp*1.8+32);
    }else{
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f",&temp);
        printf("%.1f Fahrenheit is equal to %.1f Celsius",temp,(temp-32)/1.8);
    }
}