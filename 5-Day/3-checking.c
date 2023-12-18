//
// Created by National Cyber City on 12/18/2023.
//
#include "stdio.h"
void copy_two_charArray(char first[30],char second[30]);
void registration();

struct Db{
    char user_name[30];
    char user_email[30];
    char user_pass[20];
    int phone_number;

};

struct Db data[10];

int main(){


    registration();
    return 0;
}

void registration(){

    char r_username[30];
    char r_useremail[30];
    char r_userpassword[20];
    int r_phoneNumber=0;
    printf("This is Registration Option:\n");
    printf("Enter your user name to Register:");
    scanf(" %[^\n]",&r_username);
    printf("Enter your user email to Register:");
    scanf(" %[^\n]",&r_useremail);
    printf("Enter your user password to Register:");
    scanf(" %[^\n]",&r_userpassword);
    printf("Enter your PhoneNumber to Register:");
    scanf("%d",&r_phoneNumber);


    // collecting
    copy_two_charArray(data[0].user_name,r_username);
    printf("\nChecking for username: %s",data[0].user_name);

    copy_two_charArray(data[0].user_email,r_useremail);
    printf("\nChecking for userEmail: %s",data[0].user_email);

    copy_two_charArray(data[0].user_pass,r_userpassword);
    printf("\nChecking for Password: %s",data[0].user_pass);


    data[0].phone_number = r_phoneNumber;
    printf("\nChecking for PhoneNUmber: %d",data[0].phone_number);

}

void copy_two_charArray(char first[30],char second[30]){

    int i=0;
    for(i=0; i<30; i++){

        if(second[i]=='\0'){

            break;
        } else{
            first[i] = second[i];

        }

    }


}
