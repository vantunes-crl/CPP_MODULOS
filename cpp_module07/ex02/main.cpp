#include "Array.hpp"
#define MAX_VAL 5
#include <cstring>

int main(int, char**)
{
    std::cout << "----------------------------------int test-----------------------------------------------------\n";
    {
        Array<int> numbers(MAX_VAL);

        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand() % 10;
            numbers[i] = value;
            mirror[i] = value;
        }

        Array<int> cpy;

        cpy = numbers;
        cpy.printArray();

        // //SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        delete [] mirror;
    }

    std::cout << "----------------------------------char test-----------------------------------------------------\n";
    {
        Array<char> numbers(MAX_VAL);

        char* mirror = new char[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const char value = (rand() % 10) + 100;
            numbers[i] = value;
            mirror[i] = value;
        }

        Array<char> cpy;

        cpy = numbers;
        cpy.printArray();

        // //SCOPE
        {
            Array<char> tmp = numbers;
            Array<char> test(tmp);
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        delete [] mirror;
    }
    return 0;
}

template<typename T>
Array<T>::Array()
:array(nullptr), ArraySize(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n)
:array(new T[n]), ArraySize(n)
{
}

template<typename T>
Array<T>::~Array()
{
    delete[] array;
}

template<typename T>
Array<T>::Array(const Array &cpy)
:array(0), ArraySize(0)
{
    *this = cpy;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &assign)
{
    if (this->array)
        delete[] array;
    this->ArraySize = assign.ArraySize;
    this->array = new T[assign.ArraySize];
    for(size_t i = 0; i < assign.ArraySize; i++)
        array[i] = assign.array[i];
    
    return *this;
}

template<typename T>
void Array<T>::printArray()
{   
    for (size_t i = 0; i < ArraySize; i++)
        std::cout << this->array[i] << std::endl;
}

template<typename T>
T &Array<T>::operator[](std::size_t i) const
{
    if ( i >= ArraySize)
		throw std::out_of_range("Error: Array out of range!");

	return array[i];
}