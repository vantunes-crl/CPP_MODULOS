#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
    public:
        std::string name;
        int age;
        Data(const std::string &name, int age);
        Data();
        ~Data();
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif

