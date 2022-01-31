#include <sstream>
#include "Form.hpp"

int main(int argc, char **argv)
{
    std::stringstream str(argv[2]);

    int x = 0;
    str >> x;
    Bureaucrat	obj(argv[1], x);
	std::cout << obj << std::endl;

    Form F("Form of peace!", 50);

    std::cout << F << std::endl;
    F.beSigned(obj);

    obj.signForm(F);

	//++obj;
}