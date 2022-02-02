#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    private:
        typedef Form *(Intern::*func)(std::string target);
        func f[3];
    public:

        Intern& operator=( const Intern &);
        Intern( const Intern &);

        Form *makeForm(std::string name, std::string target);

        Form *sForm(std::string target);
        Form *rForm(std::string target);
        Form *pForm(std::string Target);

        Intern();
        ~Intern();
};





#endif