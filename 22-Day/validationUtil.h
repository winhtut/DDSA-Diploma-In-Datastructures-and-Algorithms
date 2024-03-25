//
// Created by winht on 2/12/2024.
//

#ifndef DDSA_1_VALIDATIONUTIL_H
#define DDSA_1_VALIDATIONUTIL_H
#include "stdio.h"
#include "n1c.h"
#include "transactionUtil.h"

void email_valid_one(char to_valid_email[30]){

    // character handling
    // win!asm@n1c.com ( special , space , - ,
    // @gmail.com , @yahoo.com , @outlook.com , @apple.com , @n1c.com
    // number , small letter ယူမယ် ကျန်တာ အကုန် ဘန်း // num = 48-57 , small = 97-122
    char first[30];
    char second[30];
    char one_char;
    int xx=0;
    int arr_size = size_of_charArray(to_valid_email);
    for(int i=0; i<arr_size; i++){
        one_char = to_valid_email[i];
        if(one_char=='@'){
            for(int a=i; a<arr_size; a++){
                if(to_valid_email[a]=='\0'){
                    break;
                } else{
                    second[xx]=to_valid_email[a];
                    xx++;
                }
            }
        } else{
            if((one_char>=48 && one_char<=57)||(one_char>=97 &&one_char<=122)){

                first[i]=one_char;
            } else{
                email_validation= -1;
                break;
            }
        }
    }

}

void email_valid_two(char to_valid_email[30]){
    // number , small letter ယူမယ် ကျန်တာ အကုန် ဘန်း // num = 48-57 , small = 97-122
    // to_valid_email[30] = {w,i,n,a,s,m,@,n,1,c,.,c,o,m};
    int first_count=0;
    char one_char;
    char first_valid=0;
    int arr_size =  size_of_charArray(to_valid_email);

    for (int i = 0; i < arr_size; ++i) {
        if(to_valid_email[i]=='@'){
            break;
        } else{
            first_count++;
        }
    }
    for(int x=0; x<first_count; x++){
        one_char = to_valid_email[x];
        if((one_char>=48 && one_char<=57)||(one_char>=97 &&one_char<=122)){
            first_valid++;
        } else{
            first_valid=-1;
        }
    }

    if(first_count!=first_valid || first_count==arr_size || first_count==0){
        email_validation=-1;
        return;
    } else{
        email_validation=1;
        printf("\n\n [+]First Part checking complete!\n");
    }

    printf("Arr Size: %d\n",arr_size);
    printf("first_count %d\n",first_count);
    printf("First count index value %c\n",to_valid_email[first_count]);

    // @gmail.com , @yahoo.com , @outlook.com , @apple.com , @n1c.com
    char gmail[11]={'@','g','m','a','i','l','.','c','o','m'};
    char yahoo[11]={'@','y','a','h','o','o','.','c','o','m'};
    char outlook[12]={'@','o','u','t','l','o','o','k','.','c','o','m'};
    char apple[11]={'@','a','p','p','l','e','.','c','o','m'};
    char n1c[11]={'@','n','1','c','.','c','o','m'};
    int second_count=0;
    char arr_sec_part[13];
    int for_sec_index=0;

    second_count = arr_size-first_count;
    printf("second count value : %d\n",second_count);
    printf("Second Data :");
    for(int xxx=first_count; xxx<arr_size; xxx++){
        arr_sec_part[for_sec_index] = to_valid_email[xxx];
        printf("%c",arr_sec_part[for_sec_index]);
        for_sec_index++;

    }
    printf("\n");

    int g = compare_two_char_array(arr_sec_part,gmail);
    int y = compare_two_char_array(arr_sec_part,yahoo);
    int o = compare_two_char_array(arr_sec_part,outlook);
    int a = compare_two_char_array(arr_sec_part,apple);
    int n = compare_two_char_array(arr_sec_part,n1c);

    if(g||y||o||a||n){
        email_validation=1;
        printf("\n\n [+]Second Part checking complete!\n");

    } else{
        printf("Second email validatino failed!\n");
        email_validation=-1;
    }

}

#endif //DDSA_1_VALIDATIONUTIL_H
