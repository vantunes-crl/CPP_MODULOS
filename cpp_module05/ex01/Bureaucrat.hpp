#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string name;
        int grade;
    public:
        //Contructors
        Bureaucrat(void);
        Bureaucrat(std::string const &name, int grade);

        //functions and getters
        int getGrade(void) const;
        std::string getName(void) const;
        void signForm(Form &f);

        //Operator Assing Overload
        Bureaucrat(const Bureaucrat &);
        Bureaucrat &operator=(const Bureaucrat &);

        //increment/decrement operators overload
        void operator++(void);
        void operator--(void);

        //setters
        void  setGrade(int grade);

        //Exceptions
        class GradeTooHighException : public std::exception {};
        class GradeTooLowException : public std::exception {};

        //Destructor
        ~Bureaucrat();
};

std::ostream&   operator<<( std::ostream& os, const Bureaucrat& obj);


#endif