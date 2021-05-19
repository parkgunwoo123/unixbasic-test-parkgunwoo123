//
// Created by parkgunwoo on 2021-05-18.
//

#ifndef UNTITLED20_PHONE_H
#define UNTITLED20_PHONE_H

// array of sturcure

# define MAX 50

struct Contact
{
    char Name[10];
    char PhoneNumber[14];
};

struct Contact PhoneBook[MAX];

static int size;


#endif //UNTITLED20_PHONE_H
