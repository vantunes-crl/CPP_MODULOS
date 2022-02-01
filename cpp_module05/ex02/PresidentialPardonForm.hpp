#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
    const int execGrade;
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string &target);

    void execute(Bureaucrat const &executor) const;

    ~PresidentialPardonForm();
};




#endif