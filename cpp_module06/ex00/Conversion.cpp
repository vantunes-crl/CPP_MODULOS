#include "Conversion.hpp"

Conversion::Conversion(const std::string str)
:str(str)
{
    f[0] = &Conversion::isInt;
    f[1] = &Conversion::isFloat;
    f[2] = &Conversion::isDouble;
    f[3] = &Conversion::isChar;
}

Conversion::~Conversion()
{}

void Conversion::convert(void)
{
    std::istringstream	iss(this->str);
    TYPES types;
    char c;

    for (int i = 0; i < 4; i++)
    {
        types = (this->*f[i])();
        if (types != OTHER)
            break;
    }
    std::cout << "Convert to type: " << types << std::endl;
    if (types != OTHER && types != CHAR || isPseudo1(str) || isPseudo2(str))
        iss >> nb;
    else if (types == CHAR)
    {
        iss >> c;
        nb = c;
    }
    else
    {
        std::cout << "Error: Invalid input: " + str << std::endl;
        exit(0);
    }

}

void Conversion::printTypes()
{
    switch (0)
    {
        case INT:
        {
            std::cout << "Int: ";
            if (isPseudo1(str) || isPseudo2(str))
                std::cout << "impossible\n";
            else
                std::cout << static_cast<int>(nb) << std::endl;   
        }
        case FLOAT:
        {   
            std::cout << "Float: ";
            if (isPseudo2(str))
                std::cout << str << "f" <<std::endl;
            else if (isPseudo1(str))
                std::cout << str << std::endl;
            else
                std::cout << static_cast<float>(nb) << "f\n";
        }
        case DOUBLE:
        {   
            std::cout << "Double: ";
            if (isPseudo2(str))
                std::cout << str <<std::endl;
            else if (isPseudo1(str))
                std::cout << str.substr(0, str.length() - 1) << std::endl;
            else
                std::cout << static_cast<double>(nb) << std::endl;
        }
        case CHAR:
        {
            char c = static_cast<char>(nb);
            std::cout << "Char: ";
            if (isPseudo1(str) || isPseudo2(str))
                std::cout << "impossible" << std::endl;
            else if (std::isprint(c))
                std::cout << c << std::endl;
            else
                std::cout << "non displayable\n";
        }
    }
}

TYPES Conversion::isInt()
{
    std::istringstream iss(str);
    int n;

    iss >> n;
    if (iss.eof() && !iss.fail())
        return INT;
    return OTHER;
}

TYPES Conversion::isFloat()
{
    std::istringstream iss(str);
    float num;
    std::string f;

    iss >> num;
    iss >> f;
    if (f == "f" && iss.eof() && !iss.fail())
        return FLOAT;
    return OTHER;
}

TYPES Conversion::isChar()
{
    if (str.length() == 1)
        return CHAR;
    return OTHER;
}

TYPES Conversion::isDouble()
{
    std::istringstream iss(str);
    double d;

    iss >> d;
    if (iss.eof() && !iss.fail())
        return DOUBLE;
    return OTHER;
}

bool Conversion::isPseudo1(const std::string str) {
	std::istringstream	iss("-inff +inff nanf");
	std::string			tmp;

	while (!iss.eof()) {
		iss >> tmp;
		if (tmp == str) {
			return true;
		}
	}
	return false;
}


bool Conversion::isPseudo2(const std::string str) {
	std::istringstream	iss("-inf +inf nan");
	std::string			tmp;

	while (!iss.eof()) {
		iss >> tmp;
		if (tmp == str) {
			return true;
		}
	}
	return false;
}