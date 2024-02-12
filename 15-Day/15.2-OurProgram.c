//
// Created by National Cyber City on 12/18/2023.
//
#include "n1c.h"
#include "transactionUtil.h"
#include "validationUtil.h"
#include "stdio.h"


int main(){
//    char first[30]={'a','b','c','d'};
//    char second[30]={'a','b','c','d'};

//    int flag = compare_two_char_array(first,second);
//    printf("%d",flag);
    //menu();

//    char email[30];
//    while (email_validation==-1){
//        printf("Enter your email :");
//        scanf(" %[^\n]",&email);
//        email_valid_two(email);
//        if(email_validation==-1){
//            printf("Email is not valid:\n");
//        } else{
//            printf("Email is valid");
//        }
//
//    }
    loading_data_from_file();
    transaction_record(1,2,1000);

    all_data();
    menu();
    return 0;
}

