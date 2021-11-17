#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "===================================" << std::endl;
	std::cout << " display the address of the string " << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << "by using str      : " << &str << std::endl;
	std::cout << "by using stringPTR: " << stringPTR << std::endl;
	std::cout << "by using stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "====================================" << std::endl;
	std::cout << "         display the string         " << std::endl;
	std::cout << "====================================" << std::endl;
	std::cout << "by using str      : " << str << std::endl;
	std::cout << "by using stringPTR: " << *stringPTR << std::endl;
	std::cout << "by using stringREF: " << stringREF << std::endl;

	return 0;
}