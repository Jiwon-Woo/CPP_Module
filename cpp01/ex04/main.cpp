#include <iostream>
#include <cstring>
#include <fstream>

int	main(int argc, char **argv)
{

	if (argc != 4 || (int)strlen(argv[2]) == 0 || (int)strlen(argv[3]) == 0)
	{
		std::cerr << "Invalid argument" << std::endl;
		return 1;
	}
	

	std::ifstream	read_file(argv[1]);
	if (!read_file.is_open())
	{
		std::cerr << "Unable to find the file: " << argv[1] << std::endl;
		return 1;
	}

	std::string outputFile(argv[1]);
	outputFile += ".replace";

	std::string	line;
	bool		first = true;
	std::ofstream	write_file(outputFile);

	if (!write_file.is_open())
	{
		std::cerr << "Fail to open the file: " << argv[1] << ".replace" << std::endl;
		return 1;
	}

	std::string	to_find(argv[2]);
	std::string	re(argv[3]);
	
	while (std::getline(read_file, line))
	{
		size_t	npos = line.find(to_find);

		if (npos == std::string::npos)
		{
			if (first)
			{
				write_file << line;
				first = false;
			}
			else
				write_file << std::endl << line;
		}
		else
		{
			if (first)
			{
				write_file << line.substr(0, npos) << re << line.substr(to_find.length() + npos);
				first = false;
			}
			else
			{
				write_file << std::endl << line.substr(0, npos) << re << line.substr(to_find.length() + npos);
			}
		}

	}

	return 0;
}