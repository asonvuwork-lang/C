#include <stdio.h>
#include <math.h>

#define PIE 3.14159
int main(void){

    /*
    Assignment 8
    Trying math function
    */
    float radius;

    printf("Enter the radius: ");
    scanf("%f",&radius);
    printf("Area: %.2f\n",pow(radius,2)*PIE);
    printf("Surface Area: %.2f\n",pow(radius,2)*PIE*4);
    printf("Volume: %.2f\n",pow(radius,3)*PIE*4/3);
}