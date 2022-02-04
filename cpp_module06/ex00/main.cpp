#include "Conversion.hpp"

#include <string>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Invalide use: ./Convert + 'string' \n";
        return (-1);
    }

    Conversion c(argv[1]);
    c.convert();
    c.printTypes();

    return 0;
}