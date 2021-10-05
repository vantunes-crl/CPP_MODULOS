#ifndef PHONE_H
#define PHONE_H

#include <iostream>
#include <string>
#include <iomanip>

class phonebook {
    public:
        phonebook();
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
        phonebook *next;
};

void getFirstName(phonebook *new_node);
void getLastName(phonebook *new_node);
void getNickName(phonebook *new_node);
void getPhoneNumber(phonebook *new_node);
void getDarkestSecret(phonebook *new_node);

#endif