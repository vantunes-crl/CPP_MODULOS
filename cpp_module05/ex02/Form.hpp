#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "gradeException.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class Form : public GradeTooHighException, public GradeTooLowException, public FormNotSignException, public FailCreateFile
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

        //Destructor
        ~Form();
};

std::ostream&		operator<<( std::ostream& os, const Form& obj );



#endif