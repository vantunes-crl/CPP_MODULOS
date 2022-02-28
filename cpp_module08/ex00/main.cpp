#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
    std::vector<char> vec;

    for (int i = 48; i < 58; i++)
    {
        vec.push_back(i);
    }

    try
    {
        std::cout << *easyfind(vec, 48) << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::list<int> lst;
    for (int i = 0; i < 6; ++i)
        lst.push_back(i);

    try
    {
        std::cout << *easyfind(lst, 5) << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }


}