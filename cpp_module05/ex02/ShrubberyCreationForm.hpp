#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    const int execGrade;
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);

    void execute(Bureaucrat const &executor) const;

    ~ShrubberyCreationForm();
};





#endif