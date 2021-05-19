#include <stdio.h>
#include <string.h>
#include "phone.h"
void printAll()
{   extern int Size;
    findsize(Size);
    printf("<<Display all contants in the PhoneBook>>\n");
    for(int i = 0; i < Size; i++) {
        printf("%s \t\t %s\n",PhoneBook[i].Name,PhoneBook[i].PhoneNumber);
    }

}