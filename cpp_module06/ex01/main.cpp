#include "Data.hpp"

int main()
{

    Data data("jose", 20);

    uintptr_t raw;
    Data *ptr;

    raw = serialize(&data);
    ptr = deserialize(raw);

    std::cout << "name: " << data.name << std::endl;
    std::cout << "age: "<< data.age << std::endl;
    std::cout << "andress: " << static_cast<void*>(&data) << std::endl;


    std::cout << "name ptr: " << ptr->name << std::endl;
    std::cout << "age ptr: " << ptr->age << std::endl;
    std::cout << "andress ptr: " << ptr << std::endl; 


    std::cout << "raw: " << raw << std::endl;
   

    return (0);    
}