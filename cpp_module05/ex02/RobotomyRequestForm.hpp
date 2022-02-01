#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
    const int execGrade;
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string &target);

    void execute(Bureaucrat const &executor) const;

    ~RobotomyRequestForm();
};





#endif