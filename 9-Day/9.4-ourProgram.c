//
// Created by National Cyber City on 12/18/2023.
//
#include "stdio.h"
#include "stdlib.h"

// function declare
int email_scanner(char to_check_email[30]);
void email_valid(char to_valid_email[30]);
void copy_two_charArray(char first[30],char second[30]);
void registration();
void menu();
void login();
void login_checking(char l_email[30],char l_pass[20]);
int size_of_charArray(char arr[30]);
int compare_two_char_array(char first[30],char second[30]);
void my_privilege(int user_id);
void user_info_change(int user_id);

//Global Var

int g_userCount=0; // how many users
int g_login_check=-1;

int email_validation=-1; // to check email is valid or not

// structure Declare

struct Db{
    int user_id;
    char user_name[30];
    char user_email[30];
    char user_pass[20];
    int phone_number;
    char address[50];
    int postal_code;

};

struct Db data[10];

int main(){
//    char first[30]={'a','b','c','d'};
//    char second[30]={'a','b','c','d'};

//    int flag = compare_two_char_array(first,second);
//    printf("%d",flag);
    menu();

    return 0;
}

void menu(){

    while (1) { // 1 true 0 false
        int option = 0;
        printf("Welcome to our System!\n");
        printf("Press:1 To Login!\nPress:2 To Register!\nPress:3 To Exist!:\nEnter:");
        scanf("%d", &option); //

        if (option == 1) {
            login();

        } else if (option == 2) {

            registration();
        } else {

            exit(1);
        }

    }

}
void login(){
    char l_email[30];
    char l_password[20];
    printf("This is login!\n");
    printf("Enter your email to login:");
    scanf(" %[^\n]",&l_email);
    printf("Enter your password to login:");
    scanf(" %[^\n]",&l_password);

    login_checking(l_email,l_password);
    if(g_login_check != -1){

        printf("LoginSuccess!\n Your Id= %d",g_login_check);
        my_privilege(g_login_check);
    } else{
        printf("Login Failed!\n");
        menu();
    }

}

void my_privilege(int user_id){

    int m_option=-1;
    printf("Welcome Sir: %s\n",data[user_id].user_name);
    printf("Your PhoneNumber: %d\n",data[user_id].phone_number);

    printf("What you want to do!\n");
    printf("Enter 0 To Complete Exist:\nEnter 1 to Menu:\nEnter 2 to change user info:");
    scanf("%d",&m_option);
    if(m_option == 0){
        exit(1);
    } else if(m_option==1){
        menu();
    } else if(m_option==2){
        user_info_change(user_id);
    }
    else{
        printf("Wrong Option Number:\n");
        my_privilege(user_id);
    }


}

void user_info_change(int user_id){
    int change_option=0;
    printf("Press 1: To change Name:\nPress 2: To change Email:\n");
    printf("Press 3: To change Password:\nPress 4: To change PhoneNumber:\n");
    printf("Press 5: To change Address:\nPress 6: To change PostCode:\n");
    printf("Press 7: For your privilege:");
    scanf("%d",&change_option);

    if(change_option==1){
        char newuser_name[30];
        printf("To change name:\n");
        printf("This is your user name: %s\n",data[user_id].user_name);
        printf("Enter your new user name:");
        scanf(" %[^\n]",&newuser_name);
        copy_two_charArray(data[user_id].user_name,newuser_name);
        printf("This is your new user name: %s",data[user_id].user_name);


    }else if(change_option==2){
        printf("To change email:\n");
    }


}
void login_checking(char l_email[30],char l_pass[20]){
    int i=0;
    g_login_check=-1;
    for(i=0; i<g_userCount ; i++){
        int email_check =compare_two_char_array(data[i].user_email,l_email);

        if(email_check == 1){
            int pass_check =compare_two_char_array(data[i].user_pass,l_pass);
            if(pass_check==1){
                g_login_check=data[i].user_id;
                break;
            }

        }

    }

}

void registration(){

    char r_username[30];
    char r_useremail[30];
    char r_userpassword[20];
    int r_phoneNumber=0;
    char r_address[50];
    int r_postal_code=0;
    printf("This is Registration Option:\n");
    printf("Enter your user name to Register:");
    scanf(" %[^\n]",&r_username);
    int email_exist=-1;

    while (email_exist==-1){
        printf("Enter your user email to Register:");
        scanf(" %[^\n]",&r_useremail);
        email_exist =email_scanner(r_useremail);
        if(email_exist==-1){
            printf("Your email already registered! %s\n",r_useremail);
            printf("Enter your new email address!\n");
        }

    }



    printf("Enter your user password to Register:");
    scanf(" %[^\n]",&r_userpassword);
    printf("Enter your PhoneNumber to Register:");
    scanf("%d",&r_phoneNumber);

    printf("Enter your Address to Register:");
    scanf(" %[^\n]",&r_address);
    printf("Enter your Postal code to Register:");
    scanf("%d",&r_postal_code);

    // collecting
    copy_two_charArray(data[g_userCount].user_name,r_username);
    printf("\nChecking for username: %s",data[g_userCount].user_name);

    copy_two_charArray(data[g_userCount].user_email,r_useremail);
    printf("\nChecking for userEmail: %s",data[g_userCount].user_email);

    copy_two_charArray(data[g_userCount].user_pass,r_userpassword);
    printf("\nChecking for Password: %s",data[g_userCount].user_pass);


    data[g_userCount].phone_number = r_phoneNumber;
    printf("\nChecking for PhoneNUmber: %d",data[g_userCount].phone_number);


    copy_two_charArray(data[g_userCount].address,r_address);
    printf("\nChecking for Address  %s",data[g_userCount].user_pass);

    data[g_userCount].postal_code = r_postal_code;
    printf("\nChecking for postal_code: %d",data[g_userCount].postal_code);

    data[g_userCount].user_id = g_userCount;
    g_userCount++;

}
void copy_two_charArray(char first[30],char second[30]){
    for(int x=0; x<30; x++){
        first[x]=='\0';
    }
    int i=0;
    for(i=0; i<30; i++){

        if(second[i]=='\0'){

            break;
        } else{
            first[i] = second[i];

        }
    }
}

int compare_two_char_array(char first[30],char second[30]){

    int size1= size_of_charArray(first);
    int size2= size_of_charArray(second);
    int sameCount=0;
    if( size1 == size2){
        for(int i=0; i<size1; i++){

            if(first[i]==second[i]){
                sameCount++;
            }
        }
    }
    if(size1 == sameCount){
        return 1;// if same
    } else{
        return 0; // if not same
    }
}

int size_of_charArray(char arr[30]){
    int size=0;
    for(int i=0; i<30 ;i++){

        if(arr[i]=='\0'){
            break;
        }
        size++;
    }

    return size;
}

int email_scanner(char to_check_email[30]){
    int exit_or_not=-1;
    if(g_userCount==0){
        return 1;
    } else{
        for(int i=0; i<g_userCount ; i++){
            // we got 1 if same , 0
            exit_or_not=compare_two_char_array(data[i].user_email,to_check_email);
            if(exit_or_not==1){
                return -1; // already register
            }
        }
    }

    return 1;// you can register

}

void email_valid(char to_valid_email[30]){

    // character handling
    // win!asm@n1c.com ( special , space , - ,
    // @gmail.com , @yahoo.com , @outlook.com , @apple.com , @n1c.com
    // number , small letter ယူမယ် ကျန်တာ အကုန် ဘန်း



}