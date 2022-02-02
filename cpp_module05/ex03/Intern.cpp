#include "Intern.hpp"

Intern::Intern()
{
    f[0] = &Intern::sForm;
    f[1] = &Intern::rForm;
    f[2] = &Intern::pForm;
}

Intern::~Intern()
{}

Intern::Intern( const Intern &cpy) 
{*this = cpy;}

Intern &Intern::operator=(const Intern &obj)
{
	f[0] = obj.f[0];
	f[1] = obj.f[1];
	f[2] = obj.f[2];
	return *this;
}

Form *Intern::makeForm(std::string name, std::string target)
{
    for (int i = 0; i < 3; i++)
    {
        Form*	tmp = (this->*f[i])(target);
		if (name == tmp->getName())
            return tmp;
		delete tmp;
    }
    return nullptr;
}

Form *Intern::sForm(std::string target)
{return new ShrubberyCreationForm(target);}

Form *Intern::rForm(std::string target)
{return new RobotomyRequestForm(target);}

Form *Intern::pForm(std::string target)
{return new PresidentialPardonForm(target);}