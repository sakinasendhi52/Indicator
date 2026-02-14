// Q1. Length Finder
// Develop a program that finds the length of a string using a pointer.

#include<stdio.h>

int main(){
    char str[100];
    char *ptr; //Pointer
    int length=0;

    //Input string with spaces
    printf("Enter any string : ");
    fgets(str,sizeof(str),stdin);


    //Loop to find the length
    for(ptr=str; *ptr!='\0'; ptr++){
        length++;
    }

    printf("The length of a string is : %d",--length);
    return 0;
}