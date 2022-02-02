#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
    const int execGrade;
    std::string target;
public:
    //contructors
    PresidentialPardonForm();
    PresidentialPardonForm(std::string &target);

    //Functions
    void execute(Bureaucrat const &executor) const;

    //assing operator overload
    PresidentialPardonForm(const PresidentialPardonForm &);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &);

    //Destructors
    ~PresidentialPardonForm();
};




#endif