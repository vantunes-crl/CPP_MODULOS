#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "gradeException.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form : public GradeTooHighException, public GradeTooLowException
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

        //operator assing overload
        Form(const Form &);
        Form &operator=(const Form &);

        // setters
        void setSign(bool b);

        //Getters
        std::string getName(void) const;
        bool getSign(void);
        int getGrade(void) const;

        //Destructor
        ~Form();
};

std::ostream&		operator<<( std::ostream& os, const Form& obj );



#endif