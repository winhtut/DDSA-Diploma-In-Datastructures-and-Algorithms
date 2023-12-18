//
// Created by National Cyber City on 12/18/2023.
//
// String Lesson
#include "stdio.h"



int main(){
    char myName[20];
    printf("Please enter your name:");
    scanf(" %[^\n]",&myName); //^

    printf("This is your name: %s",myName);


    return 0;
}
