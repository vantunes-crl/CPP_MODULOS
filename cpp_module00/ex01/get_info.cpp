#include "phone.hpp"

void getFirstName(phonebook *book)
{
    std::string input;
    std::cout << "Plis inform your first name\n";
    getline(std::cin, input);
    if (input.size() > 10)
        input[9] = '.';
    book->SetFirstName(input);   
}

void getLastName(phonebook *book)
{
    std::string input;
    std::cout << "Plis inform your last name\n";
    getline(std::cin, input);
    if (input.size() > 10)
        input[9] = '.';
    book->SetLastName(input);
}

void getNickName(phonebook *book)
{
    std::string input;
    std::cout << "Plis inform your nick name\n";
    getline(std::cin, input);
    if (input.size() > 10)
        input[9] = '.';
    book->SetNickName(input);
}

void getPhoneNumber(phonebook *book)
{
    std::string input;
    std::cout << "Plis inform your phone number\n";
    getline(std::cin, input);
    if (input.size() > 10)
        input[9] = '.';
    book->SetPhoneNumber(input);
}

void getDarkestSecret(phonebook *book)
{
    std::string input;
    std::cout << "Plis inform your darkest secret\n";
    getline(std::cin, input);
    if (input.size() > 10)
        input[9] = '.';
    book->SetDarkestSecret(input);
}

void getInfo(phonebook *book)
{
    getFirstName(book);
    getLastName(book);
    getNickName(book);
    getPhoneNumber(book);
    getDarkestSecret(book);
}