//
// Created by National Cyber City on 12/12/2023.
//
#include "stdio.h"

struct Computer{
    char c_name[50];
    int c_price;
    char cpu_name[20];
    int ram_size;

}computer1;

int main(){

    computer1.c_name[0]="Acer";
    computer1.c_price=1000;
    computer1.cpu_name[0]="Ryzen";
    computer1.ram_size=32;

    printf("Computer Name : %c\n",computer1.c_name);
    printf("Computer Price: %d",computer1.c_price);



}

