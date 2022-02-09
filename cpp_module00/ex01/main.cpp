#include  "phone.hpp"


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
        std::cout << "Hello what i can do for you ?\n";
        std::cout << "OPTIONS: ADD SEARCH EXIT\n";
        getline(std::cin, input);
        if (input == "ADD")
        {
            if (i == 8)
                i = 0;
            book[i].getFirstName();
            book[i].getLastName();
            book[i].getNickName();
            book[i].getPhoneNumber();
            book[i].getDarkestSecret();
            i++;
        }
        else if (input == "SEARCH")
        {
            std::cout << "---------------------------------------------\n";
            std::cout << '-' << std::setw(10) << "id"
            << '|' << std::setw(10) << "First Name "
            << '|' << std::setw(10) << "Last Name "
            << '|' << std::setw(10) << " Nick Name -" << std::endl;
            for (int i = 0; i < 8; i++)
                book[i].print_text(i);
            std::cout << std::endl;
            std::cout << "Plis inform de ID: \n";
            while (true)
            {
                getline(std::cin, input);
                if (input.length() > 1)
                    std::cout << "bad input\n";
                else if (int(input[0 - 48]) > 8)
                    std::cout << "out of range max 8\n";
                else
                    break;
            }
            book[int(input[0] - 48)].printContact();
        }
        else if (input != "EXIT")
            std::cout << "ERROR COMMAND\n";
    }


    return (0);
}