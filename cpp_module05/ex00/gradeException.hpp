#ifndef GRADE_EXCEPTION
#define GRADE_EXCEPTION

#include <stdexcept>
//Create a new Exception class inherit from std::exception and overload function what
class GradeTooHighException : public std::exception {
    const char *what() const throw() {return "Grade to high!";}
};

class GradeTooLowException : public std::exception {
    const char *what() const throw() {return "Grade to low!";}
};

#endif