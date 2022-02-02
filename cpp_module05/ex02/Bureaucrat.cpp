#include "Bureaucrat.hpp"

//Contructors/Destructors
Bureaucrat::Bureaucrat(void):
name{0}, grade{150}
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade)
:name(name), grade(150)
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
void Bureaucrat::operator++(void)
{this->grade--;}

void Bureaucrat::operator--(void)
{this->grade++;}

//Getters
int Bureaucrat::getGrade(void) const
{return (this->grade);}

std::string Bureaucrat::getName(void) const
{return (this->name);}

//setter
void Bureaucrat::setGrade(int grade)
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
	catch(GradeTooHighException &e)
	{
        std::cerr << "Bureaucrat Error: Grade too high!" << std::endl;
	}
	catch(GradeTooLowException &e)
	{
        std::cerr << "Bureaucrat Error: Grade too low!" << std::endl;
	}

}


void Bureaucrat::signForm(Form &f)
{
	if (f.getSign())
		std::cout << "bureaucrat " << this->getName() << " signed "  << f.getName() << std::endl;
	else
		std::cout << "bureaucrat " << this->name << " couldn't sign " << f.getName() << " because grade is to low!\n";   
}



//Overload << to accept bureaucrat obj
std::ostream&		operator<<( std::ostream& os, const Bureaucrat& obj ) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}