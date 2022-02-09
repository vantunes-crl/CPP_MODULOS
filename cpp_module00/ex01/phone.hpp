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
        bool empty;
    public:
        phonebook();
        ~phonebook() {};

        void print_text(int op);
        void printContact();
        void getFirstName();
        void getLastName();
        void getNickName();
        void getPhoneNumber();
        void getDarkestSecret();
};


#endif