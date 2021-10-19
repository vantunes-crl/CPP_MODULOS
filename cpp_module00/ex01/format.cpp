#include "phone.hpp"

void print_text(std::string str)
{
    if (str.size() > 10)
        str[9] = '.';
    std::cout << std::left << std::setw(10) << str.substr(0, 10);
}

void printfList(phonebook *book)
{
    int i = -1;
    int input;

    if (!book)
    {
        std::cout << "list empty\n";
        return;
    }
    std::cout << "---------------------------------------------\n";
    std::cout << '|';
    print_text("ID");
    std::cout << '|';
    print_text("First name");
    std::cout << '|';
    print_text("Last name");
    std::cout << '|';
    print_text("Nick name");
    std::cout << '|';
    std::cout << '\n';
    while (++i < 8)
    {
        std::cout << '|';
        std::cout << std::left << std::setw(10) << i + 1;
        std::cout << '|';
        print_text(book[i].GetFirstName());
        std::cout << '|';
        print_text(book[i].GetLastName());
        std::cout << '|';
        print_text(book[i].GetNickName());
        std::cout << '|';
        std::cout << '\n';
    }
    std::cout << "---------------------------------------------\n";
    std::cout << "Input the id\n";
    std::cin >> input;
    searchById(book, input - 1);
}

void searchById(phonebook *book, int id)
{
    int i = -1;
    std::cout << "-------------------------------------------------------------------\n";
    std::cout << '|';
    print_text("ID");
    std::cout << '|';
    print_text("First name");
    std::cout << '|';
    print_text("Last name");
    std::cout << '|';
    print_text("Nick name");
    std::cout << '|';
    print_text("Phone number");
    std::cout << '|';
    print_text("Darkest Secret");
    std::cout << '|';
    std::cout << '\n';
    std::cout << '|';
    std::cout << std::left << std::setw(10) << id + 1;
    std::cout << '|';
    print_text(book[id].GetFirstName());
    std::cout << '|';
    print_text(book[id].GetLastName());
    std::cout << '|';
    print_text(book[id].GetNickName());
    std::cout << '|';
    print_text(book[id].GetPhoneNumber());
    std::cout << '|';
    print_text(book[id].GetDarkestSecret());
    std::cout << '|';
    std::cout << '\n';
     std::cout << "-------------------------------------------------------------------\n";
}