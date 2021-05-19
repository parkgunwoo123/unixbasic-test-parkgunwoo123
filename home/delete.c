#include <stdio.h>
#include "phone.h"
#include <string.h>
void deleteByName()
{
    extern int Size;
    findsize(Size);
    char Name[11];
    printf(">>Enter a name to delete: ");
    scanf("%s", &Name);
    for(int i = 0; i < Size; i++) {
        if(strcmp(Name,PhoneBook[i].Name) == 0) {
            for(int j = i; j < Size - 1; j++) {
                strcpy(PhoneBook[j].Name,PhoneBook[j + 1].Name);
                strcpy(PhoneBook[i].PhoneNumber,PhoneBook[j + 1].PhoneNumber);
            }
            Size--;
            printf("%s is deleted....\n",Name);
            break;
        }
        if(i == Size - 1) {
            printf("Oops! %s is not in the PhoneBook\n",Name);
        }
    }
    returnsize(Size);
}