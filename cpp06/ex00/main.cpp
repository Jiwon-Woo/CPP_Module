#include <iostream>

int	is_valid_arg(std::string str)
{
	int	dot = 0;

	if (str == "nan" || str == "nanf" || str == "inf" || str == "inff"
		|| str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
		return 0;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+'))
			continue;
		if (str[i] < '0' || str[i] > '9')
		{
			if (i == str.length() - 1 && str[i] == 'f')
				return 0;
			else if (str[i] == '.' && dot == 0)
				dot++;
			else
				return 1;
		}
	}
	return 0;
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
		double	str_to_double = std::stod(str);
		int	str_to_int = (int)str_to_double;
		std::string status;

		if (str_to_double - str_to_int)
			status = "impossible";
		else if (0 <= str_to_int && str_to_int <= 32)
			status = "Non displayable";
		else if (32 <= str_to_int && str_to_int <= 126)
			status = "'" + std::string(1, str_to_int) + "'";
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
		std::string status;

		if (str == "nan" || str == "nanf" || str == "inf" || str == "inff"
			|| str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
			std::cout << "impossible" << std::endl;
		else
			std::cout << (int)std::stod(str) << std::endl;
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
		if (str == "inf" || str == "inff" || str == "+inf" || str == "+inff")
			std::cout << "+inff" << std::endl;
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
		if (str == "inf" || str == "inff" || str == "+inf" || str == "+inff")
			std::cout << "+inf" << std::endl;
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
		std::string str(argv[i]);

		if (is_valid_arg(str))
			return (print_all_impossible());
		
		print_char(str);
		print_int(str);
		print_float(str);
		print_double(str);
	}
}
