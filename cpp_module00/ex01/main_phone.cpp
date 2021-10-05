#include "phone.h"

void printfList(phonebook *n)
{
    while (n != NULL)
    {
        std::cout  << std::left << std::setw(10) << std::setfill(' ') << n->first_name;
        std::cout  << std::left << std::setw(10) << std::setfill(' ') << n->last_name;
        std::cout  << std::left << std::setw(10) << std::setfill(' ') << n->nick_name;
        std::cout  << std::left << std::setw(10) << std::setfill(' ') << n->phone_number;
        std::cout  << std::left << std::setw(10) << std::setfill(' ') << n->darkest_secret;
        std::cout << '\n';
        n = n->next;
    }
}

phonebook::phonebook()
{};

void appendData(phonebook **head_ref)
{
    int i = 0;
    std::string input;
    phonebook *new_node = new  phonebook();
    phonebook *last = *head_ref;
    while (i < 5)
    {
        if (i == 0)
            getFirstName(new_node);
        else if (i == 1)
            getLastName(new_node);   
        else if (i == 2)
            getNickName(new_node);
        else if (i == 3)
            getPhoneNumber(new_node);
        else if (i == 4)
            getDarkestSecret(new_node);
        i++;
    }
    new_node->next = NULL;
    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        return; 
    }
    while (last->next != NULL) 
        last = last->next;
    last->next = new_node; 
    return;
}

int main(int argc, char **argv)
{
    std::string input;
    phonebook *list = NULL;

    while (input != "EXIT")
    {   
        std::cout << "************************************\n";
        std::cout << "WELCOME TO MENU OF YOUR PHONEBOOK\n";
        std::cout << "OPTIONS: ADD SEARCH EXIT\n";
        std::cout << "************************************\n";
        std::cin >> input;
        if (input == "ADD")
        {
            appendData(&list);
        }
        else if (input == "SEARCH")
        {
            printfList(list);
        }
    }
    return (0);
}