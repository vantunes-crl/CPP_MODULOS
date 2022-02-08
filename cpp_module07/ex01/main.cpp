#include "Iter.hpp"

int main()
{
    int array[] = {1,2,3,4,5,6};

    char array2[] = "123456";

    std::string array3[] = {"ola", "tudo", "bem"};

    std::cout << "-----------------array int-------------------\n";
    iter(array, 6, print);


    std::cout << "-----------------array char-------------------\n";
    iter(array2, 6, add);
    iter(array2, 6, print);
    


    std::cout << "-----------------array string-------------------\n";
    iter(array3, 3, print);


}