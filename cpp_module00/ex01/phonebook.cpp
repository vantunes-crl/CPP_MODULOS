#include "phone.hpp"

phonebook::phonebook()
:empty(true), first_name("Empty"), last_name("Empty"), nick_name("Empty"), phone_number("Empty"), darkest_secret("Empty")
{
}

void phonebook::print_text(int op)
{
    if (empty)
        return;

    int		columns = 4;
    std::string	buffer;

    std::cout << std::string((10 + 1) * columns + 1, '-') << std::endl;
    std::cout << '-' << std::setw(10) << op
    << '|' << std::setw(10) << first_name.substr(0,9) << '.'
    << '|' << std::setw(10) << last_name.substr(0,9) << '.'
    << '|' << std::setw(10) << nick_name.substr(0,9) << '.'
    << '-' << std::endl;
}

void phonebook::printContact()
{
    std::cout << "First name: " << first_name << std::endl;;
    std::cout << "Last Name: " << last_name << std::endl;;
    std::cout << "Nick Name: " << nick_name << std::endl;;
    std::cout << "Phone Number: " << phone_number << std::endl;
    std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}

void phonebook::getFirstName()
{
    empty = false;
    std::string input;
    std::cout << "Plis inform your first name\n";
    getline(std::cin, input);
    this->first_name = input;
}

void phonebook::getLastName()
{
    std::string input;
    std::cout << "Plis inform your last name\n";
    getline(std::cin, input);
    this->last_name = input;
}

void phonebook::getNickName()
{
    std::string input;
    std::cout << "Plis inform your nick name\n";
    getline(std::cin, input);
    this->nick_name = input;
}

void phonebook::getPhoneNumber()
{
    std::string input;
    std::cout << "Plis inform your phone number\n";
    
    while (true)
    {
        getline(std::cin, input);
        if (input.length() > 10)
            std::cout << "bad input\n";
        else
        {
            for (size_t i = 0; i < input.length(); i++)
            {
		        if (!isdigit(input[i]))
                {
                    std::cout << "bad input\n";
                    break;
                }
            }
            if (isdigit(input[input.length() - 1]))
                break;
	    }
    }
    this->phone_number = input;
}

void phonebook::getDarkestSecret()
{
    std::string input;
    std::cout << "Plis inform your darkest secret\n";
    getline(std::cin, input);
    this->darkest_secret = input;
}