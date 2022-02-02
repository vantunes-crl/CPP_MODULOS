#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool sign;
        const int grade;
    public:
        //Contructors
        Form();
        Form(const std::string &name, int grade);

        //functions
        void beSigned(Bureaucrat &obj);
        virtual void execute(Bureaucrat const &executor) const = 0;

        //operator assing overload
        Form(const Form &);
        Form &operator=(const Form &);

        // setters
        void setSign(bool b);

        //Getters
        std::string getName(void) const;
        bool getSign(void) const;
        int getGrade(void) const;

        //Exceptions
        class GradeTooHighException : public std::exception {};
        class GradeTooLowException : public std::exception {};
        class FormNotSignException : public std::exception {};
        class FailCreateFile: public std::exception {};

        //Destructor
        ~Form();
};

std::ostream&		operator<<( std::ostream& os, const Form& obj );



#endif