#include "Contact.hpp"

Contact::Contact(std::string first_name,
				std::string last_name,
				std::string nickname,
				std::string phone_number,
				std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

Contact::Contact()
{
	Contact("", "", "", "", "");
}

Contact::~Contact()
{
	std::cout << "this is ~Contact()" << std::endl;
}

std::string	Contact::get_first_name()
{
	return this->first_name;
}