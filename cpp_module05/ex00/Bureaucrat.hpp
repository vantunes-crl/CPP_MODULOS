#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    private:
        std::string name;
        int grade;
    public:
        //functions and getters
        int getGrade(void) const;
        std::string getName(void) const;

        //Operator Assing Overload
        Bureaucrat(const Bureaucrat &);
        Bureaucrat &operator=(const Bureaucrat &);

        //increment/decrement operators overload
        Bureaucrat &operator++(void);
        Bureaucrat &operator--(void);

        //Create a new Exception class inherit from std::exception and overload function what
        class GradeTooHighException : public std::exception {
			const char *what() const throw() {return "Grade to high!";}
		};

		class GradeTooLowException : public std::exception {
            const char *what() const throw() {return "Grade to low!";}
		};

        //setters
        Bureaucrat  &setGrade(int grade);

        //Contructor Destructor
        Bureaucrat(void);
        Bureaucrat(std::string const &name, int grade);
        ~Bureaucrat();
};
std::ostream&		operator<<( std::ostream& os, const Bureaucrat& rhs );





#endif