#ifndef ZUMBIE_HPP
#define ZUMBIE_HPP

#include <iostream>

class zombie {
    private:
        std::string name;
    public:
        void SetName(std::string str);
        std::string GetName();
};


#endif