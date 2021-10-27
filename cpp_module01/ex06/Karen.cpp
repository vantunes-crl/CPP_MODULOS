#include "Karen.hpp"


Karen::Karen()
{
    Farray[0] = &Karen::debug;
	Farray[1] = &Karen::info;
	Farray[2] = &Karen::warning;
	Farray[3] = &Karen::error;
}

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to askfor it!\n";
}

void Karen::warning(void)
{
    std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void Karen::complain(std::string level)
{
    int i = 0;
    std::string	levels[4] = {"DEBUG","INFO","WARNING","ERROR"};
    while (i < 4)
    {
        if (level == levels[i])
        {
            (this->*Farray[i])();
            break;
        }
        i++;
    }
}

cases GetCase(std::string level)
{
    if (level == "DEBUG")
        return (DEBUG);
    else if (level == "ERROR")
        return (ERROR);
    else if (level == "INFO")
        return (INFO);
    else if (level == "WARNING")
        return (WARNING);
    return (INVAL);
}

void Karen::filter(std::string level)
{
    enum cases cases;

    switch (cases = GetCase(level))
    {
    case DEBUG:
        std::cout << "[ DEBUG ]" << '\n';
        complain("DEBUG");
        cases = INFO;
    case INFO:
        std::cout << "[ INFO ]" << '\n';
        complain("INFO");
        cases = WARNING;
    case WARNING:
        std::cout << "[ WARNING ]" << '\n';
        complain("WARNING");
        cases = ERROR;
    case ERROR:
        std::cout << "[ ERROR ]" << '\n';
        complain("ERROR");
        break ;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << '\n';
    }
}

Karen::~Karen()
{}