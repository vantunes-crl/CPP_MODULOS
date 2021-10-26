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
    size_t i = -1;
	while (++i < line.length())
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

int main(int argc, char **argv)
{
    if (argc != 4)
        return (error(1));
    std::fstream file;
    std::string text;
    std::fstream outfile;
    std::string OutFileName;

	OutFileName.append(argv[1]);
	OutFileName.append(".reverse");
	outfile.open(OutFileName, std::ios::out);
	if (!outfile)
		return (error(2));
    file.open(argv[1], std::ios::in);
    if (!file)
        return (error(3));
    while (getline(file, text))
        outfile << replace_str(text, argv[2], argv[3]) << '\n';
	outfile.close();
	file.close();
    return (0);
}