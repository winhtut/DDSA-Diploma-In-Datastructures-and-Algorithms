//
// Created by National Cyber City on 12/12/2023.
//

#include "stdio.h"
#include "string.h"

struct Employee{
    char name[20];
    int age;
    char address[20];
    int phno;

}e1;

int main(){
    strcpy(e1.name,"MgMg");

    printf(" data printing: %s",e1.name);

    return 10;
}