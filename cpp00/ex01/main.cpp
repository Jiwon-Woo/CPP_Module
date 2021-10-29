#include "main.hpp"

int	main()
{
	std::string	command;
	PhoneBook	phone_book = PhoneBook();
	std::string	add_fields[5];
	std::string	fields_name[5];

	fields_name[0] = "first_name     : ";
	fields_name[1] = "last_name      : ";
	fields_name[2] = "nickname       : ";
	fields_name[3] = "phone_number   : ";
	fields_name[4] = "darkest secret : ";

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
		{
			std::cout << C_GREN << "###############" << std::endl;
			std::cout << "# ADD Contact #" << std::endl;
			std::cout <<"###############" << C_NRML << std::endl;
			for (int i = 0; i < 5; i++)
			{
				std::cout << fields_name[i];
				std::getline(std::cin, add_fields[i]);
			}
			phone_book.add_contact(Contact(add_fields[0], add_fields[1], add_fields[2], add_fields[3], add_fields[4]));
		}
		else if (command == "SEARCH")
		{
			std::string	search;
			std::cout << C_AQUA << "##################" << std::endl;
			std::cout << "# SEARCH Contact #" << std::endl;
			std::cout <<"##################" << C_NRML << std::endl;
			std::cout << "Enter the index number : ";
			std::getline(std::cin, search);
			phone_book.search_contact((int)search[0] - 48);
		}
		else
			std::cout << C_YLLW << "It's not a valid command: " << C_NRML << command << std::endl;
	}
	return 0;
}