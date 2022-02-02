#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
:Form("RobotomyRequestForm", 72), execGrade(45), target("no target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string &target)
:Form("RobotomyRequestForm", 72), execGrade(45), target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}


void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
     try
    {
        if (!getSign())
            throw FormNotSignException();
        else if (this->execGrade < executor.getGrade())
            throw GradeTooLowException();
        else
            std::cout << this->target << " has been robotomized successfully 50% of the time\n";
    }
    catch (FormNotSignException &e)
    {
        std::cout << "Error: Form Not Sign!\n";
    }
    catch (GradeTooLowException &e)
    {
        std::cout << "Error: Bureaucrat Grade too Low to Execute! the robotomy failed!\n"; 
    }
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy)
:execGrade(cpy.execGrade)
{
    *this = cpy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
   target = obj.target;
   return (*this); 
}