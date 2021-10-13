#ifndef PHONE_H
#define PHONE_H

#include <ctime>
#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>

class phonebook {
    public:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
};

void getFirstName(phonebook *new_node);
void getLastName(phonebook *new_node);
void getNickName(phonebook *new_node);
void getPhoneNumber(phonebook *new_node);
void getDarkestSecret(phonebook *new_node);
void getInfo(phonebook *book);
void print_text(std::string str);
void printfList(phonebook *book);
void searchById(phonebook *book, int id);

/* debug*/
std::string gen_random(const int len);
void test_input(phonebook *book);

#endif