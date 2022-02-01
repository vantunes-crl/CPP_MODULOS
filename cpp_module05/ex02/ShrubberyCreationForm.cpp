#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
:Form("ShrubberyCreationForm", 145), execGrade(137), target("no target")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
:Form("ShrubberyCreationForm", 145), execGrade(137), target(target)
{}


ShrubberyCreationForm::~ShrubberyCreationForm()
{}


void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (!getSign())
            throw FormNotSignException();
        else if (this->execGrade < executor.getGrade())
            throw GradeTooLowException();
        else
        {
            std::ofstream of;

            of.open((this->target + "_shrubbery").c_str());
            if (!of)
                throw FailCreateFile();
            else
            {
                of <<   "    _-_ \n"
                    << "     /~~   ~~\\ \n"
                    << "  /~~         ~~\\ \n"
                    << " {               } \n"
                    << "  \\  _-     -_ / \n"
                    << "    ~  \\ //  ~ \n"
                    << " _- -   | | _- _ \n"
                    << "   _ -  | |   -_ \n"
                    << "       // \\ \n";
                of.close();
                std::cout << this->getName() << " executed! take care of your tree!\n";
            }
        }
    }
    catch (FormNotSignException &e)
    {
        std::cout << "Error: Form Not Sign!\n"; 
    }
    catch (GradeTooLowException &e)
    {
        std::cout << "Error: Grade too Low to Execute!\n"; 
    }
    catch (FailCreateFile &e)
    {
        std::cout << "Error: Fail to create a file discriptor!\n";
    }
}