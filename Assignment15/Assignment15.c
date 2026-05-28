#include <stdio.h>


int main(void){

    float firstNum;
    float secondNum;
    char operation;
    float answer;

    printf("Enter the first number: ");
    scanf("%f",&firstNum);
    
    printf("Enter the operator (+ - * /): ");
    scanf(" %c",&operation);
    
    printf("Enter the second number: ");
    scanf(" %f",&secondNum);

    switch (operation){
        case '+':
            answer = firstNum + secondNum;
            break;
        case '-':
            answer = firstNum - secondNum;
            break;
        case '*':
            answer = firstNum * secondNum;
            break;
        case '/':
            answer = firstNum / secondNum;
            break;
        default:
            printf("Please enter the correct operation");
            break;
    }
    
    printf("Result: %f",answer);
}