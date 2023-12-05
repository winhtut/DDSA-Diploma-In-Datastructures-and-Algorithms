//
// Created by National Cyber City on 12/5/2023.
//
// Basic input output
// Control Structures -> if else , for loop , while loop , switch case break

#include "stdio.h"

int main(){

    int first_number = 0 ;
    int sec_number=0;
    int total=0;

    printf("This is adding program !\n");
    printf("Please enter first number:");
    scanf("%d",&first_number);
    printf("Plese enter sec nubmer:");
    scanf("%d",&sec_number);

    total = first_number+sec_number;




    printf("Total number:= %d",total);
    return 0;

}
