#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contact_num(0)
{
}

PhoneBook::~PhoneBook()
{
}

int		PhoneBook::get_contact_num()
{
	return this->contact_num;
}

Contact	PhoneBook::get_user_contact()
{
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

void	PhoneBook::add_contact()
{
	Contact contact = get_user_contact();

	if (this->contact_num < 8)
	{
		this->contact[this->contact_num] = contact;
		this->contact_num++;
		std::cout << C_GREN << "Added a contact to index number " << this->contact_num
			<< ". (" << this->contact_num << "/8)" << C_NRML << std::endl;
	}
	else
	{
		for (int i = 1; i < 8; i++)
			this->contact[i - 1] = this->contact[i];
		this->contact[7] = contact;
		std::cout << C_GREN <<
			"The storage space is full. Deleted the oldest saved contact. (8/8)"
			<< C_NRML << std::endl;
	}
}

void	PhoneBook::show_contact_header()
{
	std::cout << "=====================================================" << std::endl;
	std::cout << "|      index | first name |  last name |   nickname |" << std::endl;
	std::cout << "=====================================================" << std::endl;
}

void	PhoneBook::show_contact_info(int index)
{
	Contact	contact = this->contact[index - 1];

	std::cout << "|          " << index << " |";
	show_contact_fields(contact.get_first_name());
	show_contact_fields(contact.get_last_name());
	show_contact_fields(contact.get_nickname());
	std::cout << std::endl << "-----------------------------------------------------" << std::endl;
}

void	PhoneBook::show_contact_fields(std::string field)
{
	if (field.length() <= 10)
		std::cout << std::setw(11) << field << " |";
	else
		std::cout << " " << field.substr(0, 9) << ". |";
}

int	PhoneBook::get_user_search_index()
{
	std::string	str_index;
	int			index = 0;

	std::cout << C_AQUA << "##################" << std::endl;
	std::cout << "# SEARCH Contact #" << std::endl;
	std::cout <<"##################" << C_NRML << std::endl;
	show_contact_header();
	for (int i = 1; i <= get_contact_num(); i++)
		show_contact_info(i);
	std::cout << "Enter the index number : ";
	if (std::getline(std::cin, str_index))
		index = atoi(str_index.c_str());
	return index;
}

void	PhoneBook::show_contact(int index)
{
	if (index <= 0 || index > this->contact_num)
	{
		std::cout << C_RED<< 
			"Either the contact is not stored in this index, or the index value or format is invalid."
			<< C_NRML << std::endl;
	}
	else
	{
		std::cout << C_AQUA << "#####################################################" << std::endl;
		std::cout<< "#             Contact stored in index " << index << "             #" << std::endl;
		std::cout<< "#####################################################" << C_NRML << std::endl;
		show_contact_header();
		show_contact_info(index);
	}
}

void	PhoneBook::search_contact()
{
	int index = get_user_search_index();
	
	show_contact(index);
	return;
}