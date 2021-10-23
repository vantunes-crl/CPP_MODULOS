#include <iostream>

int main(int argc, char **argv)
{

    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << *stringPTR << '\n';
    std::cout << stringREF << '\n';
    return (0);
}