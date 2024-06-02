/**
 * Author:    Samrat Sur
 * Created:   01.06.2024
 * 
 * (c) Copyright by Samrat Innovations.
 **/

#include<stdio.h>
//Function Declaration or Prototype
void display(void);

void main(void){

    //classfication of Function based on return type and argument

    //calling an No Argument No Return Type function in function
    display();

    //calling an With Argument No Return Type function in function
    int returnVal=getInfo();

    //calling an No Argument With Return Type function in function
    setInfo(9748708278);

    //calling an With Argument With Return Type function in function
    int res=add(3,5);

}

//Function Definition for No Argument No Return Type function
void display(){
    printf("No Argument No Return Type function\n");
}
//Function Definition for No Argument with Return Type function
int getInfo(){
    printf("No Argument With Return Type function\n");
    return 0;
}
//Function Definition for With Argument No Return Type function
void setInfo(long mobileNo){
    long int mob=mobileNo;
    printf("With Argument No Return Type function\n");
}
//Function Definition for With Argument With Return Type function
int add(int a,int b){

    printf("With Argument With Return Type function\n");
    return (a+b);
}