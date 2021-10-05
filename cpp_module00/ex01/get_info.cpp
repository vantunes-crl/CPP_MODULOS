#include "phone.h"

void getFirstName(phonebook *new_node)
{
    std::string input;
    std::cout << "Plis inform your first name\n";
    std::cin >> input;
    if (input.size() > 10)
        input[9] = '.';
    new_node->first_name = input;   
}

void getLastName(phonebook *new_node)
{
    std::string input;
    std::cout << "Plis inform your last name\n";
    std::cin >> input;
    if (input.size() > 10)
        input[9] = '.';
    new_node->last_name = input;
}

void getNickName(phonebook *new_node)
{
    std::string input;
    std::cout << "Plis inform your nick name\n";
    std::cin >> input;
    if (input.size() > 10)
        input[9] = '.';
    new_node->nick_name = input;
}

void getPhoneNumber(phonebook *new_node)
{
    std::string input;
    std::cout << "Plis inform your phone number\n";
    std::cin >> input;
    if (input.size() > 10)
        input[9] = '.';
    new_node->phone_number = input;
}

void getDarkestSecret(phonebook *new_node)
{
    std::string input;
    std::cout << "Plis inform your darkest secret\n";
    std::cin >> input;
    if (input.size() > 10)
        input[9] = '.';
    new_node->darkest_secret = input;
}