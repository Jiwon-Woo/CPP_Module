#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contact_num = 0;
}

PhoneBook::~PhoneBook()
{
	// std::cout << "this is ~PhoneBook()" << std::endl;
}

void	PhoneBook::add_contact(Contact contact)
{
	if (this->contact_num < 8)
	{
		this->contact[this->contact_num] = contact;
		this->contact_num++;
	}
	else
	{
		for (int i = 1; i < 8; i++)
			this->contact[i - 1] = this->contact[i];
		this->contact[7] = contact;
	}
}

void	PhoneBook::show_contact_info(int index)
{
	Contact	contact = this->contact[index - 1];

	std::cout << "========================================================" << std::endl;
	std::cout << "|  index  |  first name  |   last name  |    nickname  |" << std::endl;
	std::cout << "========================================================" << std::endl;
	std::cout << "|    " << index << "    |";
	show_contact_fields(contact.get_first_name());
	show_contact_fields(contact.get_last_name());
	show_contact_fields(contact.get_nickname());
	std::cout << std::endl << "--------------------------------------------------------" << std::endl;
}

void	PhoneBook::show_contact_fields(std::string field)
{
	if (field.length() <= 10)
		std::cout << std::setw(12) << field << "  |";
	else
		std::cout << "  " << field.substr(0, 9) << ".  |";
}

void	PhoneBook::search_contact(int index)
{
	if (index <= 0 || index > this->contact_num)
	{
		std::cout << C_AQUA << 
			"Either the contact is not stored in this index, or the index value or format is invalid."
			<< C_NRML << std::endl;
	}
	else
	{
		show_contact_info(index);
	}
	return;
}