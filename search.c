#include <stdio.h>
#include "phone.h"
#include <string.h>
void searchByName()
{
    extern int Size;
    findsize(Size);
    char Name[10];
    printf("Enter a name of search: ");
    scanf("%s",&Name);
    for(int i = 0; i < Size; i++) {
        if(strcmp(Name,PhoneBook[i].Name) == 0) {
            printf("%s \t\t %s\n",PhoneBook[i].Name,PhoneBook[i].PhoneNumber);
            break;
        }
        if(i == Size - 1) {
            printf("Ooops! %s is not in the PhoneBook\n",Name);
        }
    }

}