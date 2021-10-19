#ifndef PHONE_H
#define PHONE_H

#include <ctime>
#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>

class phonebook {
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void SetFirstName(std::string str) {
            first_name = str;
        }
        void SetLastName(std::string str){
            last_name = str;
        }
        void SetNickName(std::string str){
            nick_name = str;
        }
        void SetPhoneNumber(std::string str){
            phone_number = str;
        }
        void SetDarkestSecret(std::string str){
            darkest_secret = str;
        }
        std::string GetFirstName(){
            return (first_name);
        }
        std::string GetLastName(){
            return (last_name);
        }
        std::string GetNickName(){
            return (nick_name);
        }
        std::string GetPhoneNumber(){
            return (phone_number);
        }
        std::string GetDarkestSecret(){
            return (darkest_secret);
        }
};

void test_input(phonebook *book);
std::string gen_random(const int len);
void printfList(phonebook *book);
void print_text(std::string str);
void searchById(phonebook *book, int id);

#endif