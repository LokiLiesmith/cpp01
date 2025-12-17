#include <iostream>
#include <string>
#include <fstream>


std::string replaceLine(const std::string& line, const std::string& s1, const std::string& s2)
{
	std::string				result;
	std::string::size_type	position = 0;
	std::string::size_type 	found;

	while ((found = line.find(s1, position)) != std::string::npos)
	{
		result.append(line, position, found - position);
		result.append(s2);
		position = found + s1.length();
	}
	result.append(line, position);
	return (result);
}


int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./losers <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	// Check if s1 is not empty
	if (s1.empty())
	{
		std::cerr << "Error: s1 can't be empty." << std::endl;
		return (1);
	}

	// Open file and check if stream is valid
	std::ifstream infile(filename.c_str());
	if(!infile)
	{
		std::cerr << "Error: Can't open " << filename << std::endl;
		return (1);
	}


	//create destination file
	std::ofstream outfile((filename + ".replace").c_str());
	if(!outfile)
	{
		std::cerr << "Error: failed to create a new file." << std::endl;
		return (1);
	}

	// fill buffer, filter and output into outfile
	std::string	line;
	bool		first = true;
	while (std::getline(infile, line))
	{
		if (!first)
			outfile << '\n';
		first = false;
		outfile << replaceLine(line, s1, s2);
	}
	return (0);
}