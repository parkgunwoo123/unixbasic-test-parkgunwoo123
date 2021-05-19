#include <stdio.h>
#include "phone.h"
#include <string.h>
void registerPhoneData()
{
    extern int Size;
    findsize(Size);
    char Password[11] = "qwerty1234";
    char Password1[11];
    int Num = 0;
    while(Num != 4) {
        printf("Password:\n");
        scanf("%s",&Password1);
        if(strcmp(Password,Password1) == 0) {
            printf("New User Name: ");
            scanf("%s",PhoneBook[Size].Name);
            printf("Phone Number: \n");
            scanf("%s",PhoneBook[Size].PhoneNumber);
            printf("Registered....\n");
            Size++;
            break;
        }
        else if(Num == 0) {
            printf("Not matched !!!\n");
            Num++;
            continue;
        }
        else if(Num == 1) {
            printf("Not matched (twice) !!!\n");
            Num++;
            continue;
        }
        else if(Num == 2) {
            printf("Not matched (3 times) !!!\n");
            Num++;
            continue;
        }
        else{
            printf("You are not allowed to\naccess Phonebook\n");
            Num++;
        }

    }
    returnsize(Size);


}
