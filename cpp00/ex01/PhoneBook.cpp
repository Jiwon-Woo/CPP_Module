#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contact_num = 0;
	// for (int i = 0; i < 8; i++)
	// 	this->contact[i] = Contact();
}

PhoneBook::~PhoneBook()
{
	std::cout << "this is ~PhoneBook()" << std::endl;
}

void	PhoneBook::add_contact(Contact contact)
{
	this->contact[this->contact_num] = contact;
	this->contact_num++;
}

void	PhoneBook::search_contact(char index)
{
	if (index >= this->contact_num)
		return ;
	Contact	contact = this->contact[index - 48];
	std::cout << contact.get_first_name() << std::endl;
	return;
}