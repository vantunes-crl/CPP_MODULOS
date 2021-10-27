#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

enum cases
{
    DEBUG,INFO,WARNING,ERROR,INVAL
};

class Karen
{
    private:
        typedef void (Karen::*functionPtr) (void);
        functionPtr Farray[4];
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
public:
    Karen();

    void complain(std::string level);
    void filter(std::string level);
    virtual ~Karen();
};


#endif