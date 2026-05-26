#include <stdio.h>

#define PIE 3.14
int main(void){

    /*
    Assignment 6
    Calculate area ofthe circle 
    */
    float radius;
    printf("Enter the radius of your circle: ");
    scanf("%f",&radius);
    printf("The area of your circle is %f",radius * PIE * radius);
    
}