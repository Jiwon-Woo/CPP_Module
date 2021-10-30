#include "PhoneBook.hpp"

Contact	get_user_contact()
{
	Contact contact;
	std::string	fields_name[5];
	std::string	add_fields[5];

	fields_name[0] = "first_name     : ";
	fields_name[1] = "last_name      : ";
	fields_name[2] = "nickname       : ";
	fields_name[3] = "phone_number   : ";
	fields_name[4] = "darkest secret : ";

	std::cout << C_GREN << "###############" << std::endl;
	std::cout << "# ADD Contact #" << std::endl;
	std::cout <<"###############" << C_NRML << std::endl;
	
	int	i = 0;
	std::cout << fields_name[i];
	while (i < 5 && std::getline(std::cin, add_fields[i]))
	{
		if (i >= 4)
			break;
		std::cout << fields_name[++i];
	}
	return Contact(add_fields[0], add_fields[1], add_fields[2], add_fields[3], add_fields[4]);
}

int	get_user_search_index()
{
	std::string	str_index;
	int			index = 0;

	std::cout << C_AQUA << "##################" << std::endl;
	std::cout << "# SEARCH Contact #" << std::endl;
	std::cout <<"##################" << C_NRML << std::endl;
	std::cout << "Enter the index number : ";
	if (std::getline(std::cin, str_index))
		index = atoi(str_index.c_str());
	return index;
}

int	main()
{
	std::string	command;
	PhoneBook	phone_book = PhoneBook();
	Contact		user_contact;
	int			user_index;

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
			user_contact = get_user_contact();
			phone_book.add_contact(user_contact);
		}
		else if (command == "SEARCH")
		{
			user_index = get_user_search_index();
			phone_book.search_contact(user_index);
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