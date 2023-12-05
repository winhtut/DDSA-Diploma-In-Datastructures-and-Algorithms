//
// Created by National Cyber City on 12/5/2023.
//

#include "stdio.h"

int main(){

    int age=0;
    printf("Enter your age:");
    scanf("%d",&age);

    if(age>=17){    // curlybraces -> for what? - > scope
        printf(" Over 18:");
        printf(" Over 18:1");
        printf(" Over 18:2");
        printf(" Over 18:3");
        printf(" Over 18:4");
        printf(" Over 18:5");
        printf(" Over 18:6");


    } else{

        printf("Under 17:");
        printf("Under 17:");
        printf("Under 17:");
        printf("Under 17:");
        printf("Under 17:");

    }

    return 0;
}
