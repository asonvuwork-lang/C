#include <stdbool.h>
#include <stdio.h>

int main(){
    /*
    Assignment 2: Variable 
    int name = value --> %d (4 bytes)
    float name = value --> %f | can use .n before f to determine the decimal places (4 bytes)
    double name = value --> %lf| can use .n before lf to determine the decimal places (8 bytes)
    char name = value --> $c (1 byte)
    char name[] = "value" --> %s (Depends on the string value)
    bool name = true/false --> can either be %d to print 0/1 (1 byte since t/f)
    */

    int integerValue = 5;
    float pi = 3.14;
    char value[] = "Hello, World!";

    printf("%d is an integer!\n",integerValue);
    printf("%f is a float!\n",pi );
    printf("%s is a char!\n",value);

    return 0;
}