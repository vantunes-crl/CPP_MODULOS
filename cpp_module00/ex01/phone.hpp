#ifndef PHONE_H
#define PHONE_H

#include <ctime>
#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>
#include <string>

class phonebook {
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
    public:
        phonebook();
        void SetFirstName(std::string str);
        void SetLastName(std::string str);
        void SetNickName(std::string str);
        void SetPhoneNumber(std::string str);
        void SetDarkestSecret(std::string str);
        std::string GetFirstName();
        std::string GetLastName();
        std::string GetNickName();
        std::string GetPhoneNumber();
        std::string GetDarkestSecret();
};

void test_input(phonebook *book);
std::string gen_random(const int len);
void printfList(phonebook *book);
void print_text(std::string str);
void searchById(phonebook *book, int id);

#endif