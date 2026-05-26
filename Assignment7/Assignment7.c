#include <stdio.h>
#include <string.h>


int main(void){


    /*
    Assignment 8
    Fgets string input
    */
    char adj1[50] = "";
    char noun[50] = "";
    char adj2[50] = "";
    char verb[50] = "";
    char adj3[50] = "";


    printf("Enter an adjective (description): ");
    fgets(adj1, sizeof(adj1), stdin);   
    printf("Enter an noun (animal or person): ");
    fgets(noun,sizeof(noun),stdin);
    printf("Enter an adjective (description): ");
    fgets(adj2,sizeof(adj2),stdin);
    printf("Enter an verb (ending w/ -ing): ");
    fgets(verb,sizeof(verb),stdin);
    printf("Enter an adjective (description): ");
    fgets(adj3,sizeof(adj3),stdin);
    
    adj1[strlen(adj1)-1] = '\0';
    adj2[strlen(adj2)-1] = '\0';
    adj3[strlen(adj3)-1] = '\0';
    verb[strlen(verb)-1] = '\0';
    noun[strlen(noun) -1] = '\0';

    printf("Today i went to the %s zoo.\n",adj1);
    printf("In an exhibit, i saw a %s.\n",noun);
    printf("%s was %s and %s!\n",noun,adj2,verb);
    printf("I was %s!",adj3);

}