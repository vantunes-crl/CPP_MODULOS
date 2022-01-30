#include "Bureaucrat.hpp"

//Contructors/Destructors
Bureaucrat::Bureaucrat(void):
name{0}, grade{0}
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade)
:name(name)
{
    this->setGrade(grade);
}

Bureaucrat::~Bureaucrat()
{}

//Operator assing overload
Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{*this = cpy;}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assing)
{
    this->grade = assing.grade;
    this->name = assing.name;
    return (*this);
}

//increment/decrement operators overload
Bureaucrat &Bureaucrat::operator++(void)
{return (setGrade(grade - 1));}

Bureaucrat &Bureaucrat::operator--(void)
{return (setGrade(grade + 1));}

//Getters
int Bureaucrat::getGrade(void) const
{return (this->grade);}

std::string Bureaucrat::getName(void) const
{return (this->name);}

//setter function @return self class to use in increment/decrement overload and other cases to verify exceptions
Bureaucrat &Bureaucrat::setGrade(int grade)
{
    try
	{
		if (1 > grade)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		else
			this->grade = grade;
	}
	catch(std::exception &e)
	{
        std::cerr << e.what() << std::endl;
	}

	return *this;
}

//Overload << to accept bureaucrat obj
std::ostream&		operator<<( std::ostream& os, const Bureaucrat& obj ) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}