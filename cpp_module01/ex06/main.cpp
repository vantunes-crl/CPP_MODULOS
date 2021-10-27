#include "Karen.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return -1;

    Karen karen;

	karen.filter(std::string(argv[1]));

    return (0);
}