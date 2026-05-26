#include <stdio.h>

int main(){

    /*
    Assignment 3: Format Specifier
    Width, flag, and precision
    */

    float values = 2.13;

    //width
    printf("%10f\n",values);
    printf("%-10f\n",values);
    
    //Precision
    printf("%.5f\n",values);
    
    //Flag 
    printf("%+.2f\n",values);
    printf("%-.2f\n",values);


    //Combine all 3 
    printf("%+10.2f",values);
    return 0;
}