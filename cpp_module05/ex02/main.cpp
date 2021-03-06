#include <sstream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(int argc, char **argv)
{
    std::stringstream str(argv[2]);

    int x = 0;
    str >> x;
    Bureaucrat	buro1("jose", 1);
    Bureaucrat	buro2("joao", 25);

    Form*	tree = new ShrubberyCreationForm("Home");

    tree->beSigned(buro1);

    tree->execute(buro2);

    std::cout << buro2 << std::endl;
	++buro2;
    std::cout << buro2 << std::endl;

    delete tree;
}