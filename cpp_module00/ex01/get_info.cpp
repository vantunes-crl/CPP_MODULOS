#include "book.hpp"

void getFirstName(phonebook *book)
{
    std::string input;
    std::cout << "Plis inform your first name\n";
    std::cin >> input;
    if (input.size() > 10)
        input[9] = '.';
    book->first_name = input;   
}

void getLastName(phonebook *book)
{
    std::string input;
    std::cout << "Plis inform your last name\n";
    std::cin >> input;
    if (input.size() > 10)
        input[9] = '.';
    book->last_name = input;
}

void getNickName(phonebook *book)
{
    std::string input;
    std::cout << "Plis inform your nick name\n";
    std::cin >> input;
    if (input.size() > 10)
        input[9] = '.';
    book->nick_name = input;
}

void getPhoneNumber(phonebook *book)
{
    std::string input;
    std::cout << "Plis inform your phone number\n";
    std::cin >> input;
    if (input.size() > 10)
        input[9] = '.';
    book->phone_number = input;
}

void getDarkestSecret(phonebook *book)
{
    std::string input;
    std::cout << "Plis inform your darkest secret\n";
    std::cin >> input;
    if (input.size() > 10)
        input[9] = '.';
    book->darkest_secret = input;
}

void getInfo(phonebook *book)
{
    getFirstName(book);
    getLastName(book);
    getNickName(book);
    getPhoneNumber(book);
    getDarkestSecret(book);
}