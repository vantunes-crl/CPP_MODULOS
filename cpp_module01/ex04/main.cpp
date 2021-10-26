#include <iostream>
#include <fstream>
#include <sstream>

int error(int i)
{
    std::cout << "Error\n";
    return (i);
}

std::string replace_str(std::string line, std::string search, std::string replace)
{
	std::stringstream ss;
	size_t j;
	size_t slength(search.length());

	for (size_t i = 0; i < line.length(); i++)
	{
		j = 0;
		while (line[i + j] == search[j] && j < slength)
			j++;
		if (j == slength)
		{
			ss << replace;
			i += (j - 1);
		}
		else
			ss << line[i];
	}
	return (ss.str());
}

int replace(std::string file_name, std::string s1, std::string s2)
{
    std::fstream file;
    file.open(file_name, std::ios::in);
    if (!file)
        return (error(2));
    std::string text;
    std::string x;
    while (getline(file, x))
    {
        std::cout << replace_str(x, s1, s2);     
    }

    return (0);
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (error(1));
    std::string file = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    replace(file, s1, s2);
    return (0);
}