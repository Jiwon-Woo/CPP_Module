#include "main.hpp"

int	main()
{
	std::string	command;
	PhoneBook	phone_book = new PhoneBook();

	while (42)
	{
		std::cout << "My Awesome Phonebook %> ";
		std::getline(std::cin, command);
		if (command == "EXIT")
		{
			std::cout << "exit" << std::endl;
			break;
		}
		else if (command == "ADD")
			std::cout << C_GREN << "ADD" << C_NRML<< std::endl;
		else if (command == "SEARCH")
			std::cout << C_AQUA << "SEARCH" << C_NRML << std::endl;
		else
			std::cout << C_YLLW << "It's not a valid command: " << C_NRML << command << std::endl;
	}
	return 0;
}