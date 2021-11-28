#include "PhoneBook.hpp"

int	main()
{
	std::string	command;
	PhoneBook	phone_book = PhoneBook();

	std::cout << "My Awesome Phonebook %> ";
	while (std::getline(std::cin, command))
	{
		if (command == "EXIT")
		{
			std::cout << "exit" << std::endl;
			break;
		}
		else if (command == "ADD")
		{
			phone_book.add_contact();
		}
		else if (command == "SEARCH")
		{
			phone_book.search_contact();
		}
		else if (command != "")
		{
			std::cout << C_YLLW << "It's not a valid command: " 
					<< C_NRML << command << std::endl;
		}
		std::cout << "My Awesome Phonebook %> ";
	}
	return 0;
}