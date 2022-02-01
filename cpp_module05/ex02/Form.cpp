#include "Form.hpp"

Form::Form()
:sign(false), name("no name"), grade(150)
{}

Form::Form(const std::string &name, int grade)
:name(name), grade(grade), sign(false)
{
    try
    {
        if (grade < 1)
            throw GradeTooHighException();
        else if (grade > 150)
            throw GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what()  << " form!" << '\n';
        return ;
    }
}

Form::~Form()
{
}

// Functions
void Form::beSigned(Bureaucrat &obj)
{
    try
    {
        if (obj.getGrade() > this->grade)
            throw GradeTooLowException();
        else
        {
            if (this->getSign())
                std::cout << "Form is alread signed!\n";
            else
            {
                this->setSign(true);
                std::cout << obj.getName() << " sign form:" << this->getName() << std::endl;
            }
        }
    }
    catch(std::exception &ex)
    {
        std::cerr << "Form Error: " << ex.what() <<  " to sign the Form!" << std::endl;
    }
}

// setters
void Form::setSign(bool b)
{this->sign = b;}

//Getters
std::string Form::getName(void) const
{return this->name;}

bool Form::getSign(void) const
{return this->sign;}

int Form::getGrade(void) const
{return this->grade;}

void Form::execute(Bureaucrat const &executor) const
{}

//Overload << to accept Form obj
std::ostream&		operator<<(std::ostream& os, const Form& obj ) {
	os << obj.getName() << ", form grade " << obj.getGrade();
	return os;
}

Form::Form(const Form &cpy)
:grade{cpy.grade}, name(cpy.name), sign(cpy.sign)
{*this = cpy;}

// name and grade are const can't overload
Form &Form::operator=(const Form &obj)
{
    this->sign = obj.sign;
    return *this;
}