#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "gradeException.hpp"
#include "Form.hpp"

class Form;

class Bureaucrat : public GradeTooHighException, public GradeTooLowException 
{
    private:
        std::string name;
        int grade;
    public:
        //functions and getters
        int getGrade(void) const;
        std::string getName(void) const;
        void signForm(Form &f);

        //Operator Assing Overload
        Bureaucrat(const Bureaucrat &);
        Bureaucrat &operator=(const Bureaucrat &);

        //increment/decrement operators overload
        Bureaucrat &operator++(void);
        Bureaucrat &operator--(void);

        //setters
        Bureaucrat  &setGrade(int grade);

        //Contructor Destructor
        Bureaucrat(void);
        Bureaucrat(std::string const &name, int grade);
        ~Bureaucrat();
};

std::ostream&   operator<<( std::ostream& os, const Bureaucrat& obj);





#endif