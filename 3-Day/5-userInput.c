//
// Created by National Cyber City on 12/11/2023.
//

#include "stdio.h"
int option();
int main(){

    int opt = option();
    if(opt==1){
        printf("This is for adding!\n");
    } else if(opt==2){
        printf("This is for sub fun!\n");
    }else if(opt==3){
        printf("This is for mul fun!\n");

    } else{
        printf("Wrong Option!\n");

    }
}

int option(){
    int opt=0;
    printf("# Enter 1 to add:\n#Enter 2 to sub:\nEnter 3 to mul:");
    scanf("%d",&opt);

    return opt;
}
