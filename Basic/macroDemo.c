/**
 * Author:    Samrat Sur
 * Created:   01.06.2024
 * 
 * (c) Copyright by Samrat Innovations.
 **/
#include<stdio.h>

//Object Like Macro
#define PI 3.14

//Chain like Macro
#define FACEBOOK FOLLOWERS
#define FOLLOWERS 120

//Multiline Macro using backslash
#define MULTILINE printf("Hello World\n"); \
printf("Hii how are You ?\n")

//Function Like Macro
#define MULTIPLY(X,Y) X*Y

//main function begins here
void main(void){

    printf("The Value of PI is %f\n",PI); //using as Object
    printf("I have %dM followers on Facebook\n",FACEBOOK); //using chain like macro
    
    //Usage of Multiline Macro Statement
    MULTILINE;

    int a=5;
    int b=6;
    //usage of Function Like Macro 
    printf("Result of Multiplication is %d\n",MULTIPLY(a,b));

}