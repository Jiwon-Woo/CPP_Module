#ifndef Contact_H
# define Contact_H

# include <iostream>

class	Contact {

private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	Contact(std::string first_name,
		std::string last_name,
		std::string nickname,
		std::string phone_number,
		std::string darkest_secret);
	~Contact();
};

#endif