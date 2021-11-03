#include <iostream>
#include <cstring>
#include <fstream>

int	check_arg(int argc, char **argv)
{
	if (argc != 4 || (int)strlen(argv[2]) == 0 || (int)strlen(argv[3]) == 0)
	{
		std::cerr << "Invalid argument" << std::endl;
		return 1;
	}
	return 0;
}

int	check_ifstream(std::ifstream &read_file, std::string file_name)
{
	if (!read_file.is_open())
	{
		std::cerr << "Unable to find the file: " << file_name << std::endl;
		return 1;
	}
	return 0;
}

int	check_ofstream(std::ofstream &write_file, std::ifstream &read_file, std::string file_name)
{
	if (!write_file.is_open())
	{
		std::cerr << "Fail to open the file: " << file_name + ".replace" << std::endl;
		read_file.close();
		return 1;
	}
	return 0;
}

void	write_line(bool &first, std::ofstream &write_file, std::string line, std::string replace)
{
	if (first)
	{
		write_file << line << replace;
		first = false;
	}
	else
	{
		write_file << std::endl << line << replace;
	}
}

void	write_replace_file(std::ifstream &read_file, std::ofstream &write_file, char **argv)
{
	std::string	to_find(argv[2]);
	std::string	replace(argv[3]);
	std::string	line;
	bool		first = true;
	
	while (std::getline(read_file, line))
	{
		size_t	nPos = line.find(to_find);

		if (nPos == std::string::npos)
		{
			write_line(first, write_file, line, "");
		}
		else
		{
			write_line(first, write_file, line.substr(0, nPos), replace);
			std::string	new_line = line.substr(nPos + to_find.length());
			nPos = new_line.find(to_find);
			while (nPos != std::string::npos)
			{
				write_file << new_line.substr(0, nPos) << replace;
				new_line = new_line.substr(nPos + to_find.length());
				nPos = new_line.find(to_find);
			}
			write_file << new_line;
		}

	}
}

int	close_file(std::ifstream &read_file, std::ofstream &write_file)
{
	read_file.close();
	write_file.close();
	return 0;
}

int	main(int argc, char **argv)
{

	if (check_arg(argc, argv))
		return 1;

	std::string		file_name(argv[1]);
	std::ifstream	read_file(file_name);

	if (check_ifstream(read_file, file_name))
		return 1;

	std::ofstream	write_file(file_name + ".replace");

	if (check_ofstream(write_file, read_file, file_name))
		return 1;

	write_replace_file(read_file, write_file, argv);
	return close_file(read_file, write_file);
}