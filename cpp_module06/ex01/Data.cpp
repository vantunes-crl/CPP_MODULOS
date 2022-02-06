#include "Data.hpp"

Data::Data()
:name("no name"), age{0}
{}

Data::Data(const std::string &name, int age)
:name(name), age(age)
{
}

Data::~Data()
{}

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

