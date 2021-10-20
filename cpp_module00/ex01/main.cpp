#include  "phone.hpp"

phonebook::phonebook()
{
    this->last_name = "0";
    this->first_name = "0";
    this->nick_name = "0";
    this->phone_number = "0";
    this->darkest_secret = "0";
}

int main(int argc , char **argv)
{
    phonebook book[8];

    std::cout << "************************************\n";
    std::cout << "WELCOME TO MENU OF YOUR PHONEBOOK\n";
    std::cout << "************************************\n";
    std::string input;
    int i = 0;
    while (input != "EXIT")
    {   
        if (i == 8)
            i = 0;
        std::cout << "Hello what i can do for you ?\n";
        std::cout << "OPTIONS: ADD SEARCH EXIT\n";
        std::cin >> input;
        if (input == "ADD")
        {
            //getInfo(&book[i++]);
            test_input(&book[i++]);
        }
        else if (input == "SEARCH")
            printfList(book);
        else if (input != "EXIT")
            std::cout << "ERROR COMMAND\n";
    }


    return (0);
}