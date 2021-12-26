#include <iostream>
#include <iomanip>
#include <cmath>

int	is_valid_arg(char* str)
{
	char	*pos = 0;
	double str_to_d = std::strtod(str, &pos);

	std::string str_pos = static_cast<std::string>(pos);
	if (str_pos.length() == 0 || (str_pos.length() == 1 && str_pos[0] == 'f'))
		return 0;
	return 1;
}

int	print_all_impossible()
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : impossible" << std::endl;
	std::cout << "double : impossible" << std::endl;
	return 0;
}

void	print_char(std::string str)
{
	std::cout << "char: ";
	try
	{
		double	str_to_d = std::stod(str);
		int	str_to_i = static_cast<int>(str_to_d);
		std::string status;

		if (std::isnan(str_to_d) || std::isinf(str_to_d))
			status = "impossible";
		else if (str_to_d - str_to_i)
			status = "impossible";
		else if (0 <= str_to_i && str_to_i <= 32)
			status = "Non displayable";
		else if (32 <= str_to_i && str_to_i <= 126)
			status = "'" + std::string(1, str_to_i) + "'";
		else
			status = "impossible";
		std::cout << status << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void	print_int(std::string str)
{
	std::cout << "int: ";
	try
	{
		double str_to_d = std::stod(str);

		if (std::isnan(str_to_d) || std::isinf(str_to_d))
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(str_to_d) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void	print_float(std::string str)
{
	std::cout << "float: ";
	try
	{
		float str_to_f = std::stof(str);

		if (std::isinf(str_to_f))
			std::cout << std::showpos << str_to_f << std::noshowpos << "f" << std::endl;
		else
			std::cout << std::stof(str) << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void	print_double(std::string str)
{
	std::cout << "double: ";
	try
	{
		double str_to_d = std::stod(str);

		if (std::isinf(str_to_d))
			std::cout << std::showpos << str_to_d << std::noshowpos << std::endl;
		else
			std::cout << std::stod(str) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	std::cout << std::fixed;
	std::cout.precision(1);

	for (int i = 1; i < argc; i++)
	{
		if (is_valid_arg(argv[i]))
			return (print_all_impossible());
		
		std::string str = static_cast<std::string>(argv[i]);
		print_char(str);
		print_int(str);
		print_float(str);
		print_double(str);
	}
}
