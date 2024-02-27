//
// Created by winht on 2/12/2024.
//

#ifndef DDSA_1_TRANSACTIONUTIL_H
#define DDSA_1_TRANSACTIONUTIL_H
#include "stdio.h"
#include "n1c.h"
#include "validationUtil.h"





void transaction(int sender_id , int receiver_id,double amount){
    double percentage = amount*0.02;
    data[sender_id].amount = data[sender_id].amount-amount-percentage;
    data[0].amount = data[0].amount+percentage;
    data[receiver_id].amount = data[receiver_id].amount+amount;
    printf("Transaction Complete From %s to %s : amount=%lf\n",data[sender_id].user_name,data[receiver_id].user_name,amount);

    printf("\nTransfer Amount + Transaction Fee: -%lf",amount+percentage);
   transaction_record(sender_id , receiver_id,amount);
    all_data();
    my_privilege(sender_id);

}

void transaction_record(int sender_id , int receiver_id,double amount){
    int sender_index= data[sender_id].trans_counter;
    int receiver_index=data[receiver_id].trans_counter;
    int adminIndex =data[0].trans_counter;
//    int sender_index= 0;
//    int receiver_index=0;

    char *from="From-";
    //char *sender = data[sender_id].user_name;
//    char sender[20];
//    char receiver[20];
    char *sender = data[sender_id].user_name;
    char *to="-To-";
    char *receiver= data[receiver_id].user_name;
    //char *receiver= data[receiver_id].user_name;

//    copy_two_charArray(sender,data[sender_id].user_name);
//    copy_two_charArray(receiver,data[receiver_id].user_name);

    char *receive="ReceiveFrom-";

    sprintf((char *) data[sender_id].trans[sender_index].trans_record, "%s%s%s%s%c%lf", from, sender, to, receiver,'-',amount);
    sprintf((char *) data[receiver_id].trans[receiver_index].trans_record, "%s%s%c%lf", receive, sender,'-',amount);
    // For Admin Record
    sprintf((char *) data[0].trans[adminIndex].trans_record, "%s%s%s%s%c%lf", from, sender, to, receiver,'-',amount);

//    printf("all data for Sender %s\n",data[sender_id].trans);
//    printf("all data for receiver %s\n",data[receiver_id].trans);
    data[0].trans_counter++;
    data[sender_id].trans_counter++;
    data[receiver_id].trans_counter++;

}

void to_transfer_checking(int id){
    double amount=0;
    int receiver_phone=0;//
    int phone_id=0;
    int option=0;
    int cout_wrong=0;
    printf("Enter your amount to transfer:");
    scanf("%lf",&amount);
    double percentage = amount*0.02;
    while(data[id].amount>amount+100+percentage){

        printf("Enter receiver phone number to send money:");
        scanf("%d",&receiver_phone);
        phone_id =to_check_phone(receiver_phone);
        if(phone_id!=-1){
            transaction(id,phone_id,amount);
        } else{
            printf("This phone number is not available in our system!\n");
            cout_wrong++;
            if(cout_wrong>2){
                fprintf(stderr,"Wrong Phone Number!");
                my_privilege(id);
            }
        }
    }

    printf("Insufficient Amount: %lf\n",data[id].amount);
    printf("Press 1 to continue transaction:\nPress 2 To get Privilege:\n");
    scanf("%d",&option);
    if(option==1){
        to_transfer_checking(id);
    } else if(option==2){
        my_privilege(id);
    } else{
        fprintf(stderr,"Invalid Option\n");
        menu();
    }

}

#endif //DDSA_1_TRANSACTIONUTIL_H
