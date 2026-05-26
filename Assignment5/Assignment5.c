#include <stdio.h>

int main(void){


    /*
    Assignment 5
    Shopping cart menu and total count
    */
    char Item[30];
    float price;
    int number;

    printf("What item would you like to buy?: ");
    scanf("%s",&Item);

    printf("What is the price for each?: ");
    scanf("%f",&price);

    printf("How many would you like?: ");
    scanf("%d",&number);

    printf("\nYou have bought %d %s/s\n",number,Item);
    printf("The total is: $%.2f",price*number);
}