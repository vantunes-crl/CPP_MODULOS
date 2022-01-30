#include "Bureaucrat.hpp"
#include <sstream>

int main(int argc, char **argv)
{
    std::stringstream geek(argv[2]);

    int x = 0;
    geek >> x;
    Bureaucrat	obj(argv[1], x);

	std::cout << obj << std::endl;
	//++obj;
}