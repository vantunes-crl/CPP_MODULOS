#include "book.hpp"

int main(int argc, char **argv)
{
    phonebook book[8];

    std::string input;
    int i = 0;
    while (input != "EXIT")
    {   
        if (i == 8)
            i = 0;
        std::cout << "************************************\n";
        std::cout << "WELCOME TO MENU OF YOUR PHONEBOOK\n";
        std::cout << "OPTIONS: ADD SEARCH EXIT\n";
        std::cout << "************************************\n";
        std::cin >> input;
        if (input == "ADD")
            test_input(&book[i++]);
        else if (input == "SEARCH")
            printfList(book);
        else if (input != "EXIT")
            std::cout << "ERROR COMMAND\n";
    }
}