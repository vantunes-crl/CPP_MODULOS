#include "phone.h"

void print_text(std::string str)
{
    if (str.size() > 10)
        str[9] = '.';
    std::cout << std::left << std::setw(10) << str.substr(0, 10);
}

void searchById(phonebook *list, int id)
{
    int i = -1;
    while (++i < id && list->next)
        list = list->next;
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
    std::cout << std::left << std::setw(10) << id;
    std::cout << '|';
    print_text(list->first_name);
    std::cout << '|';
    print_text(list->last_name);
    std::cout << '|';
    print_text(list->nick_name);
    std::cout << '|';
    print_text(list->phone_number);
    std::cout << '|';
    print_text(list->darkest_secret);
    std::cout << '|';
    std::cout << '\n';
     std::cout << "-------------------------------------------------------------------\n";
}

void printfList(phonebook *n)
{
    int input;
    int index = 1;
    phonebook *head = n;
    if (!n)
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
    while (n != NULL)
    {
        std::cout << '|';
        std::cout << std::left << std::setw(10) << index;
        std::cout << '|';
        print_text(n->first_name);
        std::cout << '|';
        print_text(n->last_name);
        std::cout << '|';
        print_text(n->nick_name);
        std::cout << '|';
        std::cout << '\n';
        index++;
        n = n->next;
    }
    std::cout << "---------------------------------------------\n";
    std::cout << "Input the id\n";
    std::cin >> input;
    searchById(head, input);
}