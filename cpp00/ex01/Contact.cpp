#include "Contact.hpp"

Contact::Contact(std::string first_name,
				std::string last_name,
				std::string nickname,
				std::string phone_number,
				std::string darkest_secret)
{
	Contact->first_name = first_name;
	Contact->last_name = last_name;
	Contact->nickname = nickname;
	Contact->phone_number = phone_number;
	Contact->darkest_secret = darkest_secret;
}

Contact::~Contact()
{
	std::cout << "this is ~Contact()" << std::endl;
}