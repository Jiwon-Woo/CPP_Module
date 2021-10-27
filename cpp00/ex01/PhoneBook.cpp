#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	PhoneBook->contact_num = 0;
	for (int i = 0; i < 8; i++)
		PhoneBook->contact[i] = 0;
}

void	PhoneBook::add_contact(Contact contact)
{
	PhoneBook->contact[PhoneBook->contact_num] = contact;
	PhoneBook->contact_num++;
}

void	PhoneBook::search_contact(int index)
{
	if (index >= PhoneBook->contact_num)
		return ;
	return;
}

PhoneBook::~PhoneBook()
{
	std::cout << "this is ~PhoneBook()" << std::endl;
}