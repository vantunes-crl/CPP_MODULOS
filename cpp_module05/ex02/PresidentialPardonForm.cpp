#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
:Form("PresidentialPardonForm", 25), execGrade(5), target("no target")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string &target)
:Form("PresidentialPardonForm", 25), execGrade(5), target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (!getSign())
            throw FormNotSignException();
        else if (this->execGrade < executor.getGrade())
            throw GradeTooLowException();
        else
            std::cout << this->target << " has been pardoned by Zaphod Beeblebrox\n";
    }
    catch (FormNotSignException &e)
    {
        std::cout << "Error: Form Not Sign!\n";
    }
    catch (GradeTooLowException &e)
    {
        std::cout << "Error: Grade too Low to Execute! " << this->target << " stil a criminal!\n"; 
    }

}