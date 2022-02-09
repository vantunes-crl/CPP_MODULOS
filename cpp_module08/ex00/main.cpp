#include "easyfind.hpp"
#include <vector>
#include <list>

int main(int argc, char **argv)
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

    std::list<int> lst = {0,1,2,3,5,4,6};

    try
    {
        std::cout << *easyfind(lst, 5) << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }


}