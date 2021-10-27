#include <iostream>
#include <fstream>
#include <sstream>

int error(int i)
{
	std::string Error[2] = {"File Error", "Arg Error"};

    std::cout << Error[i] << '\n';
    return (i);
}

std::string replace_str(std::string line, std::string s1, std::string s2)
{
	std::stringstream ss;
	size_t j;
	size_t len(s1.length());
    size_t i = -1;
	while (++i < line.length())
	{
		j = 0;
		while (line[i + j] == s1[j] && j < len)
			j++;
		if (j == len)
		{
			ss << s2;
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
	{
		outfile.close();
		return (error(0));
	}
    file.open(argv[1], std::ios::in);
    if (!file)
	{
		file.close();
		outfile.close();
        return (error(0));
	}
    while (getline(file, text))
        outfile << replace_str(text, argv[2], argv[3]) << '\n';
	outfile.close();
	file.close();
    return (0);
}