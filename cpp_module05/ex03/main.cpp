#include <sstream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(int argc, char **argv)
{
    std::stringstream str(argv[2]);

    int x = 0;
    str >> x;
    Bureaucrat	buro1("jose", 1);
    Bureaucrat	buro2("joao", 25);
    Intern someRandomIntern;

    Form* tree;

    tree = someRandomIntern.makeForm("ShrubberyCreationForm", "home");

    tree->beSigned(buro1);

    tree->execute(buro2);

    std::cout << buro2 << std::endl;
	++buro2;
    std::cout << buro2 << std::endl;
}