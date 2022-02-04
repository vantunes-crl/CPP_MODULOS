#ifndef CONVERSION_HPP
#define CONVERSION_HPP


#include <iostream>
#include <sstream>
#include <iomanip>

enum TYPES {
    INT,
    FLOAT,
    DOUBLE,
    CHAR,
    OTHER
};

class Conversion
{
private:
    typedef TYPES (Conversion::*func)(void);
	func			f[4];
    double nb;
    std::string str;
public:
    Conversion(const std::string str);

    void convert();
    
    TYPES isInt();
    TYPES isFloat();
    TYPES isChar();
    TYPES isDouble();

    bool isPseudo1(const std::string str);
    bool isPseudo2(const std::string str);

    void printTypes();

    ~Conversion();
};




#endif